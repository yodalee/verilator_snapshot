// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_HLS_cdp_ocvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_0__0(Vsim_HLS_cdp_ocvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_ocvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__4__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__4__Vfuncout = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__4__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__4__vector = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__16__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__16__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__16__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__16__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__16__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__16__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__16__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__16__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__17__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__17__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__17__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__17__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__17__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__17__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__60__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__60__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__60__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__60__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__60__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__60__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__60__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__60__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__60__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__60__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__61__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__61__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__61__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__61__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__61__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__61__input_1 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__61__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__61__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__61__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__61__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__62__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__62__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__62__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__62__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__62__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__62__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__62__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__62__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__62__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__62__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__63__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__63__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__63__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__63__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__63__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__63__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__63__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__63__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__63__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__63__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__64__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__64__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__64__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__64__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__64__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__64__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__64__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__64__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__64__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__64__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__65__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__65__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__65__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__65__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__65__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__65__input_1 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__65__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__65__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__65__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__65__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__66__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__66__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__66__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__66__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__66__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__66__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__66__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__66__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__66__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__66__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__67__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__67__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__67__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__67__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__67__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__67__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__67__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__67__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__67__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__67__sel = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__68__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__68__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__68__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__68__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__69__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__69__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__69__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__69__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__69__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__69__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__69__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__69__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__70__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__70__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__70__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__70__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__70__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__70__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__70__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__70__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__71__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__71__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__71__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__71__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__71__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__71__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__71__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__71__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__72__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__72__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__72__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__72__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__72__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__72__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__73__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__73__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__73__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__73__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__73__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__73__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__73__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__73__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__input_2 = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__input_1 = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__75__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__75__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__75__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__75__vector = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__76__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__76__Vfuncout = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__76__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__76__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__77__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__77__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__77__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__77__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__77__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__77__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__77__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__77__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__78__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__78__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__78__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__78__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__78__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__78__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__78__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__78__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__79__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__79__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__79__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__79__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__79__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__79__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__80__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__80__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__80__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__80__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__80__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__80__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__86__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__86__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__86__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__86__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__86__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__86__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__86__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__86__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__88__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__88__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__88__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__88__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__88__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__88__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__88__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__88__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__95__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__95__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__95__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__95__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__95__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__95__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__95__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__95__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__96__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__96__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__96__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__96__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__96__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__96__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__96__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__96__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__104__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__104__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__104__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__104__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__104__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__104__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__104__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__104__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__109__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__109__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__109__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__109__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__109__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__109__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__109__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__109__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__118__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__118__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__118__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__118__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__118__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__118__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__118__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__118__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__119__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__119__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__119__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__119__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__119__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__119__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__119__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__119__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__123__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__123__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__123__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__123__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__123__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__123__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__123__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__123__sel = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__139__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__139__Vfuncout = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__139__arg1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__139__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__139__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__139__arg2 = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__140__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__140__Vfuncout = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__140__arg1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__140__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__140__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__140__arg2 = 0;
    SData/*10:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__141__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__141__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__141__arg1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__141__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__141__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__141__arg2 = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__142__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__142__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__142__arg1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__142__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__142__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__142__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__143__arg1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__143__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__143__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__143__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__143__sbit;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__143__sbit = 0;
    VlWide<4>/*112:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__147__Vfuncout;
    VL_ZERO_W(113, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__147__Vfuncout);
    VlWide<4>/*112:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__147__arg1;
    VL_ZERO_W(113, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__147__arg1);
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__147__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__147__arg2 = 0;
    VlWide<4>/*104:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__148__Vfuncout;
    VL_ZERO_W(105, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__148__Vfuncout);
    VlWide<4>/*104:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__148__arg1;
    VL_ZERO_W(105, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__148__arg1);
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__148__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__148__arg2 = 0;
    VlWide<4>/*104:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__149__Vfuncout;
    VL_ZERO_W(105, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__149__Vfuncout);
    VlWide<4>/*104:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__149__arg1;
    VL_ZERO_W(105, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__149__arg1);
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__149__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__149__arg2 = 0;
    SData/*10:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__150__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__150__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__150__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__150__arg2 = 0;
    SData/*10:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__151__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__151__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__151__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__151__arg2 = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_acc_itm_2 
                = (0x03ffffffU & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_25U_25U_26U_1_o_acc_itm_2);
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_bits_slc_FpMantDecShiftRight_10U_6U_10U_least_mask_10_itm_2 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva) 
                         >> 0x0aU));
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_sva_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_itm;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_0_1 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_7_1 
                = (1U & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                                 >> 7U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_mx0w0;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_0_1 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_7_1 
                = (1U & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                 >> 7U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_mx0w0;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_bits_slc_FpMantDecShiftRight_10U_6U_10U_least_mask_10_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_0_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_7_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_0_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_7_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_2 = 0U;
    }
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_56_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_2_itm_2 
                = (0x0000003fU & (~ ([&]() {
                            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__72__sel 
                                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_mx0w0;
                            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__72__input_0 
                                = (0x0000003fU & (IData)(
                                                         (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                                                          >> 1U)));
                            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__72__sel)
                                    ? 0x3fU : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__72__input_0));
                            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__72__Vfuncout 
                                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                        }(), (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__72__Vfuncout))));
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_2_itm_2 = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_42_1 
                = (1U & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                 >> 0x0000002aU)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nand_itm_2 
                = (0x00000007ffffffffULL != (0x00000007ffffffffULL 
                                             & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                                >> 7U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_42_1 
                = (1U & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                                 >> 0x0000002aU)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nand_itm_2 
                = (0x00000007ffffffffULL != (0x00000007ffffffffULL 
                                             & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                                                >> 7U)));
        }
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct_mx0c0;
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_bits_9_0_sva_2 
                = (0x000003ffU & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                  & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_or_itm_2 
                = (IData)((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva_mx0w0) 
                            >> 0x0000000aU) | (0U != 
                                               (0x000003ffU 
                                                & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                                   & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva_mx0w0))))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_21_nl)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_4 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_18_nl))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__69__sel 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_35;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__69__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_IntShiftRightSat_50U_6U_16U_oelse_IntShiftRightSat_50U_6U_16U_if_unequal_tmp;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__69__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_3;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__69__sel)
                    ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__69__input_1)
                    : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__69__input_0));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__69__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_4 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__69__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_24_nl))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__70__sel 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_35;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__70__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_IntShiftRightSat_50U_6U_16U_oelse_IntShiftRightSat_50U_6U_16U_if_unequal_tmp;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__70__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__70__sel)
                    ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__70__input_1)
                    : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__70__input_0));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__70__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__70__Vfuncout;
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_85_nl) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm 
                = (0x000003ffffffffffULL & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_mux1h_1_itm);
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_24;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_FpExpoWidthDec_6U_5U_10U_1U_1U_if_or_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_41_nl))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__71__sel 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_41;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__71__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_if_IntShiftRightSat_50U_6U_16U_if_or_1_nl;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__71__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_5;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__71__sel)
                    ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__71__input_1)
                    : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__71__input_0));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__71__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_6 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__71__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_42_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4;
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_52) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_IntShiftRightSat_50U_6U_16U_oelse_IntShiftRightSat_50U_6U_16U_if_unequal_tmp)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_itm 
                = (0x000000ffU & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_mux1h_1_itm 
                                          >> 0x2aU)));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_24) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_25)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_25)));
        }
        if ((((((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_88_nl)) 
                & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen)) 
               & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5))) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_1_itm 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_mux1h_4_itm));
        }
        if ((((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
                & (0U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5))) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
              & (~ ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                             >> 0x0000002aU)) & (0x00000007ffffffffULL 
                                                 != 
                                                 (0x00000007ffffffffULL 
                                                  & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                                     >> 7U)))))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_itm 
                = (3U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_mux1h_4_itm) 
                         >> 4U));
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
               & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U))) & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6)) 
                                         | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3))))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_48_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm_mx1w0;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_42_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nand_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_42_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nand_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt = 0ULL;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_bits_9_0_sva_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm = 0ULL;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_6 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_1_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm = 0U;
    }
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__60__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__61__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__65__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__60__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_4;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__61__input_0 
                = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__65__input_0 
                = ((0x0000000cU & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_3_1) 
                                   << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_0) 
                                               << 1U) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                                                    >> 9U))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_16 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_nl) 
                            | (~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_17 
                = (1U & (~ ((((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_sva_2 
                               == ([&]() {
                                            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__68__vector 
                                                = (0x000001ffU 
                                                   & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_1_oif_1_acc_nl));
                                            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__68__Vfuncout 
                                                = (
                                                   (0x000003fffffffe00ULL 
                                                    & ((- (QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__68__vector) 
                                                                              >> 8U))))) 
                                                       << 9U)) 
                                                   | (QData)((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__68__vector)));
                                        }(), __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__68__Vfuncout)) 
                              | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_oelse_mux_1_nl)) 
                             | (~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8))) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43))));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__60__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_0_sva;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__61__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_6_1_sva;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__65__input_1 
                = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva) 
                                  >> 1U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__60__input_2 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__61__input_2 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                                  >> 1U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__65__input_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_or_3_nl;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__60__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__60__sel));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__61__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__61__sel)))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__65__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__65__sel)))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__60__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__60__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__61__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__61__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__65__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__65__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__60__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__60__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__61__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__61__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__65__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__65__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__60__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__61__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__65__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_0 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__60__Vfuncout;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_6_1 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__61__Vfuncout;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_13_10 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__65__Vfuncout;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__62__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__62__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                         >> 6U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__62__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_7_sva;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__62__input_2 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                         >> 7U));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__62__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__62__sel));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__62__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__62__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__62__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__62__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__62__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_7 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__62__Vfuncout;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__63__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__63__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                         >> 7U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__63__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_0_sva;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__63__input_2 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                         >> 8U));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__63__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__63__sel));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__63__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__63__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__63__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__63__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__63__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_8 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__63__Vfuncout;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__64__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__64__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                         >> 8U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__64__input_1 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__64__input_2 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                         >> 9U));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__64__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__64__sel));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__64__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__64__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__64__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__64__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__64__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_9 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__64__Vfuncout;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__66__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__66__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_3_1) 
                         >> 2U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__66__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva) 
                         >> 5U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__66__input_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_or_2_itm_2;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__66__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__66__sel));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__66__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__66__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__66__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__66__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__66__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_14 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__66__Vfuncout;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__67__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__67__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_4;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__67__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_7_sva;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__67__input_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_4;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__67__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__67__sel));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__67__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__67__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__67__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__67__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__67__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_15 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__67__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_6_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_7 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_8 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_9 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_13_10 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_14 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_15 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_17 = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_137_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_42_1) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nand_itm_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_135_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_42_1) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nand_itm_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_iswt0));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_iswt0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__79__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_6;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__79__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_1_itm;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__79__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__79__input_1)
            : 0x0eU);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__79__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_mux_6_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__79__Vfuncout;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3267 = (
                                                   (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_9) 
                                                     << 9U) 
                                                    | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_8) 
                                                        << 8U) 
                                                       | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_7) 
                                                          << 7U))) 
                                                   | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_6_1) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_0)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_67_nl))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__75__vector 
                = (0x0003ffffffffffffULL & VL_MULS_QQQ(50, 
                                                       (0x0003ffffffffffffULL 
                                                        & VL_EXTENDS_QQ(50,34, 
                                                                        (0x00000003ffffffffULL 
                                                                         & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_33U_32U_34U_o_acc_nl))), 
                                                       (0x0003ffffffffffffULL 
                                                        & VL_EXTENDS_QI(50,16, (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_scale_use)))));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__75__Vfuncout 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__75__vector;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__75__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_and_1_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_3;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4 = 0U;
    }
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__148__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__148__arg1[0U] = 0U;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__148__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__148__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__148__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__148__arg1[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__148__arg1[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__148__arg1[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__148__arg1[3U];
    VL_SHIFTRS_WWI(105,105,6, __Vtemp_2, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__148__arg2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x000001ffU & __Vtemp_2[3U]);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__148__Vfuncout[0U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__148__Vfuncout[1U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__148__Vfuncout[2U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__148__Vfuncout[3U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__148__Vfuncout[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__148__Vfuncout[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__148__Vfuncout[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__148__Vfuncout[3U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__139__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_and_1_cse) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__76__vector 
                = (0x000003ffffffffffULL & VL_MULS_QQQ(42, 
                                                       (0x000003ffffffffffULL 
                                                        & VL_EXTENDS_QI(42,26, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_o_acc_itm_2)), 
                                                       (0x000003ffffffffffULL 
                                                        & VL_EXTENDS_QI(42,16, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_mul_in_1_sva_3)))));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__76__Vfuncout 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__76__vector;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__76__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2 = 0ULL;
    }
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__139__arg1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__139__arg1;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x000003ffffffffffULL & VL_SHIFTRS_QQI(42,42,6, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__139__arg2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__139__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__139__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__149__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__149__arg1[0U] = 0U;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__149__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__149__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__149__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__149__arg1[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__149__arg1[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__149__arg1[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__149__arg1[3U];
    VL_SHIFTRS_WWI(105,105,6, __Vtemp_4, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__149__arg2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_4[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x000001ffU & __Vtemp_4[3U]);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__149__Vfuncout[0U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__149__Vfuncout[1U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__149__Vfuncout[2U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__149__Vfuncout[3U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__149__Vfuncout[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__149__Vfuncout[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__149__Vfuncout[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__149__Vfuncout[3U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_7_sva 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_7_1) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_137_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_2))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_0_sva 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_0_1) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_2))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_137_cse))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_183_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2 
                = (0U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_sva_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_itm;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_62_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_4 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3_mx0c1)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_FpExpoWidthDec_6U_5U_10U_1U_1U_if_or_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_60_nl))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__73__sel 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_40;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__73__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_16_1;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__73__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_3;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__73__sel)
                    ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__73__input_1)
                    : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__73__input_0));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__73__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_4 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__73__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_187_ssc) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_3_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_itm;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm) 
                         >> 0x0aU));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_64_nl)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_or_2_itm_2 
                = (1U & (((((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1) 
                                >> 0x0eU)) & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4)) 
                           & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4))) 
                          | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_5))) 
                         | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)));
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_209_cse) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__sel 
                = ((4U & ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_86_tmp) 
                              | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_84_tmp))) 
                          << 2U)) | ((((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_84_tmp)) 
                                       & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_86_tmp)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_84_tmp)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__input_2 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__sel)))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_69_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_3 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_shifter_use;
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_o_acc_itm_2 
                = (0x03ffffffU & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_25U_25U_26U_o_acc_itm_2);
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_mul_in_1_sva_3 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_scale_use;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_3_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_or_2_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_o_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_mul_in_1_sva_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__45__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_137_cse;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__45__input_0 
                        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_itm) 
                            << 4U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_1_itm));
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__45__sel)
                            ? 0x3fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__45__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__45__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__45__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_7_sva 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_7_1) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_135_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_2))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_0_sva 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_0_1) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_2))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_135_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_6_1_sva 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__44__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_135_cse;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__44__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_2_itm_2;
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__44__sel)
                            ? 0x3fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__44__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__44__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__44__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__80__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_5;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__80__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_mux_6_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__80__sel)
            ? 0x0fU : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__80__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__80__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_or_3_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__80__Vfuncout;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3268 = (
                                                   ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_14) 
                                                    << 0x0000000eU) 
                                                   | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_13_10) 
                                                       << 0x0000000aU) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3267)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__140__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__140__arg1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__140__arg1;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x000003ffffffffffULL & VL_SHIFTRS_QQI(42,42,6, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__140__arg2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__140__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__140__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[3U] 
                                           >> 8U)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[3U] 
                                           >> 8U)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_1_oif_1_acc_nl 
        = (0x000003ffU & ((IData)(0x01ffU) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__87__vector 
                            = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_7_sva) 
                                << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_0_sva)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__87__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__87__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__87__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__87__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_1_oif_acc_nl 
        = (0x000003ffU & ((IData)(1U) + VL_EXTEND_II(10,9, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__41__vector 
                            = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_7_sva) 
                                << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_0_sva)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__41__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__41__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__41__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__41__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_oif_1_acc_nl 
        = (0x000003ffU & ((IData)(0x01ffU) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__81__vector 
                            = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_7_sva) 
                                << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_6_1_sva) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_0_sva)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__81__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__81__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__81__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__81__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_oif_acc_nl 
        = (0x000003ffU & ((IData)(1U) + VL_EXTEND_II(10,9, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__82__vector 
                            = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_7_sva) 
                                << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_6_1_sva) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_0_sva)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__82__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__82__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__82__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__82__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_69_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3)) 
                 | (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6))));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_3 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_mx0w0;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_3 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_mx0w0;
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_and_3_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_16_1 
                = (1U & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_5 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_nor_itm_2) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_IsNaN_6U_10U_nand_itm_2))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_3;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_3;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1 
                = (0x00007fffU & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1);
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_173_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_52) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_itm 
                = (7U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_mux1h_2_itm) 
                         >> 0x0bU));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_70_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (((((~ (((((((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4) 
                            >> 1U)) | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4))) 
                       | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3)) 
                      | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_3)) 
                   | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_39)))) 
               | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_52)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm 
                = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_mux1h_2_itm));
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_16_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_5 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
        = (0x00000fffffffffffULL & (VL_EXTEND_QQ(44,43, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__46__vector 
                            = (0x000003ffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__46__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__46__vector 
                                                            >> 0x29U))))) 
                                << 0x0000002aU) | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__46__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__46__Vfuncout)) 
                                    + VL_EXTEND_QQ(44,43, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__47__vector 
                            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__47__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__47__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__47__Vfuncout))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__142__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_3;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__142__arg1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__142__arg1;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x0003ffffffffffffULL & VL_SHIFTRS_QQI(50,50,6, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__142__arg2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__142__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_sva_mx0w0 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__142__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__147__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_3;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__147__arg1[0U] = 0U;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__147__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__147__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__147__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__147__arg1[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__147__arg1[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__147__arg1[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__147__arg1[3U];
    VL_SHIFTRS_WWI(113,113,6, __Vtemp_6, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__147__arg2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_6[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x0001ffffU & __Vtemp_6[3U]);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__147__Vfuncout[0U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__147__Vfuncout[1U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__147__Vfuncout[2U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__147__Vfuncout[3U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__147__Vfuncout[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__147__Vfuncout[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__147__Vfuncout[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__147__Vfuncout[3U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
        = (0x00000fffffffffffULL & (VL_EXTEND_QQ(44,43, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__48__vector 
                            = (0x000003ffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__48__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__48__vector 
                                                            >> 0x29U))))) 
                                << 0x0000002aU) | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__48__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__48__Vfuncout)) 
                                    + VL_EXTEND_QQ(44,43, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__49__vector 
                            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__49__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__49__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__49__Vfuncout))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__4__vector 
        = (0x000003ffffffffffULL & VL_MULS_QQQ(42, 
                                               (0x000003ffffffffffULL 
                                                & VL_EXTENDS_QI(42,26, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_acc_itm_2)), 
                                               (0x000003ffffffffffULL 
                                                & VL_EXTENDS_QI(42,16, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_mul_in_1_sva_3)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__4__Vfuncout 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__4__vector;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_1_o_mul_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__4__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm_mx1w0 
        = ((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_sva_2 
            == ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__42__vector 
                        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_1_oif_acc_nl));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__42__Vfuncout 
                        = ((0x000003fffffffe00ULL & 
                            ((- (QData)((IData)((1U 
                                                 & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__42__vector) 
                                                    >> 8U))))) 
                             << 9U)) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__42__vector)));
                }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__42__Vfuncout)) 
           | (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_sva_2 
              == ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__43__vector 
                        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_7_sva) 
                            << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_0_sva)));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__43__Vfuncout 
                        = ((0x000003ffffffff00ULL & 
                            ((- (QData)((IData)((1U 
                                                 & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__43__vector) 
                                                    >> 7U))))) 
                             << 8U)) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__43__vector)));
                }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__43__Vfuncout)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_if_IntShiftRightSat_42U_6U_8U_if_or_1_nl 
        = (((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_sva_2 
             == ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__83__vector 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_oif_1_acc_nl));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__83__Vfuncout 
                            = ((0x000003fffffffe00ULL 
                                & ((- (QData)((IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__83__vector) 
                                                          >> 8U))))) 
                                   << 9U)) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__83__vector)));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__83__Vfuncout)) 
            | (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_sva_2 
               == ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__84__vector 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_oif_acc_nl));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__84__Vfuncout 
                            = ((0x000003fffffffe00ULL 
                                & ((- (QData)((IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__84__vector) 
                                                          >> 8U))))) 
                                   << 9U)) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__84__vector)));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__84__Vfuncout))) 
           | (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_sva_2 
              == ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__85__vector 
                        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_7_sva) 
                            << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_6_1_sva) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_0_sva)));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__85__Vfuncout 
                        = ((0x000003ffffffff00ULL & 
                            ((- (QData)((IData)((1U 
                                                 & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__85__vector) 
                                                    >> 7U))))) 
                             << 8U)) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__85__vector)));
                }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__85__Vfuncout)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_91_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3)) 
                 | (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_mx0w0 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                             >> 0x0000002aU)) | (0ULL 
                                                 == 
                                                 (0x00000007ffffffffULL 
                                                  & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                                     >> 7U))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp 
        = ((0x00000007ffffffffULL != (0x00000007ffffffffULL 
                                      & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                         >> 7U))) & (IData)(
                                                            (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                                             >> 0x0000002aU)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[3U] 
                                           >> 0x00000010U)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_mx0w0 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                             >> 0x0000002aU)) | (0ULL 
                                                 == 
                                                 (0x00000007ffffffffULL 
                                                  & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                                                     >> 7U))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_209_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42) 
           | (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_14 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_5)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_13 
        = (1U & (((0x00000007ffffffffULL != (0x00000007ffffffffULL 
                                             & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                                                >> 7U))) 
                  & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                             >> 0x0000002aU))) | ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                                                  | (0U 
                                                     != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)))));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_5 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                 | (2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_29 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_11 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_57 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                    & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_nor_itm_2 
                = (0U == (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_IsNaN_6U_10U_nand_itm_2 
                = (0x3fU != (0x0000003fU & (IData)(
                                                   (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
                                                    >> 0x0aU))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_8_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                = (0x0001ffffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt));
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_nor_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_IsNaN_6U_10U_nand_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_50U_6U_16U_oif_1_acc_nl 
        = (0x0003ffffU & ((IData)(0x0001ffffU) + VL_EXTEND_II(18,17, 
                                                              ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__105__vector 
                            = ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_3) 
                                 << 0x0000000fU) | 
                                ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_itm) 
                                 << 0x0000000cU)) | 
                               (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm) 
                                 << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_3)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__105__Vfuncout 
                            = ((0x00010000U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__105__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__105__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__105__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_50U_6U_16U_oif_acc_nl 
        = (0x0003ffffU & ((IData)(1U) + VL_EXTEND_II(18,17, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__106__vector 
                            = ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_3) 
                                 << 0x0000000fU) | 
                                ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_itm) 
                                 << 0x0000000cU)) | 
                               (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm) 
                                 << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_3)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__106__Vfuncout 
                            = ((0x00010000U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__106__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__106__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__106__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva 
        = (0x00000fffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm_2) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__52__vector 
                            = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_or_itm_2) 
                               & ((0U != (0x000003ffU 
                                          & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1) 
                                             & ((IData)(0x03ffU) 
                                                + (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm))))) 
                                  | ((1U & (((IData)(0x07ffU) 
                                             + (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm)) 
                                            >> 0x0000000aU)) 
                                     | ((0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_bits_9_0_sva_2)) 
                                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_bits_slc_FpMantDecShiftRight_10U_6U_10U_least_mask_10_itm_2)))));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__52__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__52__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__52__Vfuncout)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_10_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_3 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_12_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_75_itm)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_15_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_89_rgt))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_75_itm)))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__77__sel 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_89_rgt;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__77__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__77__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__77__sel)
                    ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__77__input_1)
                    : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__77__input_0));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__77__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_3 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__77__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
                   & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
                  & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1))) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_92_rgt))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_75_itm)))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__78__sel 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_92_rgt;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__78__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__78__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__78__sel)
                    ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__78__input_1)
                    : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__78__input_0));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__78__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_3 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__78__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__18__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_mx0w0;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__18__input_0 
                        = (0x0000003fU & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                                  >> 1U)));
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__18__sel)
                            ? 0x3fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__18__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__18__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__18__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_164 
        = (IData)((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                    >> 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
        = (0x000fffffffffffffULL & (VL_EXTEND_QQ(52,51, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__50__vector 
                            = (0x0003ffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__50__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__50__vector 
                                                            >> 0x31U))))) 
                                << 0x00000032U) | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__50__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__50__Vfuncout)) 
                                    + VL_EXTEND_QQ(52,51, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__51__vector 
                            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__51__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__51__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__51__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_26 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_209_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_94 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_57) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_if_IntShiftRightSat_50U_6U_16U_if_or_1_nl 
        = (1U & (((((QData)((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_itm)) 
                    << 0x0000002aU) | vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm) 
                  == ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__107__vector 
                            = (0x0001ffffU & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_50U_6U_16U_oif_1_acc_nl);
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__107__Vfuncout 
                            = ((0x0003fffffffe0000ULL 
                                & ((- (QData)((IData)(
                                                      (1U 
                                                       & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__107__vector 
                                                          >> 0x10U))))) 
                                   << 0x00000011U)) 
                               | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__107__vector)));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__107__Vfuncout)) 
                 | (~ (((((QData)((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_itm)) 
                          << 0x0000002aU) | vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm) 
                        != ([&]() {
                                vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__108__vector 
                                    = (0x0001ffffU 
                                       & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_50U_6U_16U_oif_acc_nl);
                                vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__108__Vfuncout 
                                    = ((0x0003fffffffe0000ULL 
                                        & ((- (QData)((IData)(
                                                              (1U 
                                                               & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__108__vector 
                                                                  >> 0x10U))))) 
                                           << 0x00000011U)) 
                                       | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__108__vector)));
                            }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__108__Vfuncout)) 
                       & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_4)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__123__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__123__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__123__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__123__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__123__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__123__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__123__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__123__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__16__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__16__input_1 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1) 
                          >> 0x0aU));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__16__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva) 
                 >> 0x0000000aU));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__16__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__16__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__16__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__16__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_6_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__16__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__86__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__86__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_6;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__86__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_if_IntShiftRightSat_42U_6U_8U_if_or_1_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__86__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__86__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__86__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__86__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__86__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__88__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__88__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__88__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm_mx1w0;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__88__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__88__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__88__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__88__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_oelse_mux_1_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__88__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__96__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__96__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__96__input_0 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
            >> 1U) & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4) 
                      & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_4)) 
                         & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__96__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__96__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__96__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__96__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__96__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__109__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__109__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__109__input_0 
        = (1U & (~ ((2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__109__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__109__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__109__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__109__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_40_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__109__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__118__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__118__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp)) 
                    | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                       >> 1U))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__118__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_164;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__118__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__118__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__118__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__118__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_87_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__118__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_unfl_sva 
        = ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
                    >> 0x00000032U)) & (0x00000007ffffffffULL 
                                        != (0x00000007ffffffffULL 
                                            & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
                                               >> 0x0000000fU))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
                             >> 0x00000032U)) | (0ULL 
                                                 == 
                                                 (0x00000007ffffffffULL 
                                                  & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
                                                     >> 0x0000000fU))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_39 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_IsNaN_6U_10U_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_nor_itm_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s 
        = ((0x0000003eU & (((IData)(9U) + (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                              >> 0x0000000bU))) 
                           << 1U)) | (1U & (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                               >> 0x0000000aU))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg_s 
        = (0x000000ffU & ((IData)(0x7fU) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__0__vector 
                            = ((0x0000003eU & (((IData)(9U) 
                                                + (~ 
                                                   (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                                    >> 0x0000000bU))) 
                                               << 1U)) 
                               | (1U & (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                           >> 0x0aU))));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__0__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__0__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__0__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__124__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4)));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__124__input_1 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_nl;
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__124__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__124__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__124__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__124__Vfuncout))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__17__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__17__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_6_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__17__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__17__input_1)
            : 0U);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__17__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_FpExpoWidthDec_6U_5U_10U_1U_1U_else_and_2_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__17__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_112_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)) 
                 | (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4))));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_2 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)) 
                 | (2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_146_nl 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4) 
            >> 1U) & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_7_cse 
        = (1U & ((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__119__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42) 
           | (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_14));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__119__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_164;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__119__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_87_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__119__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__119__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__119__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__119__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_88_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__119__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_mx0w0 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
                                 >> 0x0000000fU)) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_unfl_sva))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_ovfl_sva))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_mx0w0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_ovfl_sva) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_unfl_sva))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22) 
                      | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) 
                     | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1))) 
                   | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U))))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22) 
                       | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) 
                      | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))) 
                     | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1)) 
                   | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U))))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_2_nl 
        = (0x00003fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__39__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__39__input_0 
                        = (0x00003fffU & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__39__sel)
                            ? 0x3fffU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__39__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__39__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__39__Vfuncout))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__141__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__141__arg1 
        = (0x00000400U | (0x000003ffU & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = ((0x0800U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t)) 
           | (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__141__arg1));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x00000fffU & VL_SHIFTRS_III(12,12,6, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t), (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__141__arg2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__141__Vfuncout 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__141__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__150__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__151__arg2 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__150__arg2;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = (1U | (0x07fcU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000007ffU & VL_SHIFTL_III(11,11,6, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t), (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__151__arg2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__151__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__150__Vfuncout 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__151__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__150__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__143__sbit = 0U;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__143__arg2 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg_s));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__143__arg1 = 1U;
    if ((0x00000040U & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__143__arg2))) {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__143__sbit) 
                << 1U) | (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__143__arg1));
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__144__sbit 
            = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__143__sbit;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__144__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__143__arg2)));
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__144__arg1 
            = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                     >> 1U));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x000007ffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__144__sbit))));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x07feU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t)) 
               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__144__arg1));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x000007ffU & VL_SHIFTRS_III(11,11,7, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__144__arg2)));
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__144__Vfuncout 
            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__143__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__144__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__145__sbit 
            = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__143__sbit;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__145__arg2 
            = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__143__arg2;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__145__arg1 
            = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__143__arg1;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__146__sbit 
            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__145__sbit;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__146__arg2 
            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__145__arg2;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__146__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__145__sbit) 
                << 1U) | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__145__arg1));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x000007ffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__146__sbit))));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x07fcU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t)) 
               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__146__arg1));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x000007ffU & VL_SHIFTL_III(11,11,7, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__146__arg2)));
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__146__Vfuncout 
            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__145__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__146__Vfuncout;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__143__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__145__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva_mx0w0 
        = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__143__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__125__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_5;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__125__input_1 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl;
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__125__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__125__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__125__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__125__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_8_nl 
        = (1U & ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_2) 
                 | ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__95__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__95__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__95__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_146_nl) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__95__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__95__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__95__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__95__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__95__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_14_1_sva_mx0w0 
        = (0x00003fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__40__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__40__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__40__sel)
                            ? 0x3fffU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__40__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__40__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__40__Vfuncout))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var = 1U;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_IntShiftRightSat_50U_6U_16U_oelse_IntShiftRightSat_50U_6U_16U_if_unequal_tmp 
        = (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_sva_mx0w0 
           != ([&]() {
                vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__38__vector 
                    = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_mx0w0) 
                        << 0x0000000fU) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_14_1_sva_mx0w0) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_mx0w0)));
                vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__38__Vfuncout 
                    = ((0x0003ffffffff0000ULL & ((- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__38__vector) 
                                                                        >> 0x0fU))))) 
                                                 << 0x00000010U)) 
                       | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__38__vector)));
            }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__38__Vfuncout));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__104__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__104__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_IntShiftRightSat_50U_6U_16U_oelse_IntShiftRightSat_50U_6U_16U_if_unequal_tmp;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__104__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4) 
                    >> 1U)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__104__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__104__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__104__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__104__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_85_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__104__Vfuncout;
}

void Vsim_HLS_cdp_ocvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_0__0(Vsim_HLS_cdp_ocvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_ocvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__33__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__33__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__33__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__33__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__35__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__35__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__35__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__35__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__37__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__37__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__37__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__37__vector = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__152__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__152__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__152__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__152__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__152__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__152__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__152__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__152__sel = 0;
    // Body
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__152__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__152__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__152__input_0 
        = (0x0003ffffffffffffULL & (((QData)((IData)(
                                                     vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_data[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_data[0U]))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__152__sel)
            ? __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__152__input_1
            : __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__152__input_0);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__152__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__152__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_33U_32U_34U_o_acc_nl 
        = (0x00000007ffffffffULL & (VL_EXTEND_QQ(35,34, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__130__vector 
                            = (0x00000001ffffffffULL 
                               & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt);
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__130__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__130__vector 
                                                            >> 0x20U))))) 
                                << 0x00000021U) | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__130__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__130__Vfuncout)) 
                                    - VL_EXTEND_QQ(35,34, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__131__vector 
                            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_offset_use;
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__131__Vfuncout 
                            = (((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__131__vector 
                                                               >> 0x1fU)))))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__131__vector)));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__131__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_25U_25U_26U_1_o_acc_itm_2 
        = (0x07ffffffU & (VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__135__vector 
                            = (0x01ffffffU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
                                                      >> 0x19U)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__135__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__135__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__135__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__135__Vfuncout)) 
                          - VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__136__vector 
                            = (0x01ffffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_offset_use);
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__136__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__136__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__136__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__136__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_25U_25U_26U_o_acc_itm_2 
        = (0x07ffffffU & (VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__137__vector 
                            = (0x01ffffffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__137__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__137__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__137__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__137__Vfuncout)) 
                          - VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__138__vector 
                            = (0x01ffffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_offset_use);
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__138__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__138__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__138__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__138__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_nl 
        = (0x0000007fU & ((IData)(0x3dU) + VL_EXTEND_II(7,6, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__34__vector 
                            = (0x0000001fU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
                                                      >> 0x0bU)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__34__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__34__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__34__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_nl 
        = (0x000000ffU & ((IData)(0x51U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__36__vector 
                            = (0x0000003fU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
                                                      >> 0x0aU)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__36__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__36__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__36__Vfuncout)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__33__vector 
        = (0x0000007fU & ((IData)(0x11U) + (0x00000040U 
                                            | (0x0000003fU 
                                               & (~ (IData)(
                                                            (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
                                                             >> 0x0000000aU)))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__33__vector), 6U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__33__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__33__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__35__vector 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__35__vector), 5U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__35__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__35__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__37__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__37__vector), 6U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__37__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__37__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_13_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
                 | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_11_nl 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_13_nl));
}

void Vsim_HLS_cdp_ocvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_0__1(Vsim_HLS_cdp_ocvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_ocvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__1__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__1__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__1__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__1__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__1__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__1__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__2__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__2__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__2__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__2__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__5__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__5__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__5__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__5__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__5__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__5__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__5__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__5__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__6__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__6__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__6__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__6__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__6__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__6__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__6__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__6__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__7__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__7__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__7__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__7__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__7__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__7__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__7__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__7__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__8__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__8__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__8__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__8__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__8__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__8__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__8__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__8__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__9__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__9__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__9__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__9__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__9__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__9__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__9__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__9__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__10__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__10__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__10__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__10__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__10__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__10__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__10__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__10__sel = 0;
    SData/*13:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__11__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__11__Vfuncout = 0;
    SData/*13:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__11__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__11__input_0 = 0;
    SData/*13:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__11__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__11__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__11__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__11__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__12__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__12__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__12__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__12__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__12__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__12__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__12__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__12__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__13__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__13__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__13__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__13__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__13__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__13__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__13__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__13__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__14__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__14__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__14__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__14__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__14__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__14__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__14__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__14__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__15__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__15__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__15__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__15__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__15__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__15__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__15__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__15__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__19__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__19__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__19__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__19__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__19__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__19__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__19__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__19__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__20__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__20__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__20__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__20__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__20__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__20__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__20__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__20__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__21__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__21__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__21__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__21__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__21__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__21__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__21__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__21__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__22__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__22__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__22__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__22__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__22__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__22__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__22__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__22__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__23__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__23__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__23__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__23__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__23__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__23__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__23__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__23__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__24__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__24__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__24__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__24__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__24__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__24__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__24__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__24__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__25__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__25__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__25__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__25__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__25__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__25__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__25__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__25__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__26__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__26__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__26__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__26__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__26__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__26__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__26__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__26__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__27__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__27__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__27__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__27__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__27__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__27__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__27__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__27__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__53__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__53__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__53__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__53__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__53__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__53__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__53__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__53__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__54__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__54__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__54__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__54__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__54__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__54__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__54__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__54__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__55__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__55__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__55__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__55__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__55__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__55__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__55__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__55__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__56__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__56__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__56__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__56__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__56__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__56__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__56__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__56__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__97__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__97__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__97__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__97__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__97__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__97__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__97__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__97__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__98__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__98__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__98__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__98__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__98__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__98__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__98__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__98__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__99__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__99__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__99__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__99__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__99__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__99__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__99__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__99__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__100__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__100__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__100__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__100__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__100__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__100__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__100__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__100__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__101__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__101__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__101__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__101__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__101__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__101__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__101__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__101__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__102__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__102__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__102__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__102__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__102__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__102__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__102__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__102__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__103__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__103__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__103__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__103__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__103__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__103__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__103__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__103__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__110__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__110__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__110__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__110__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__110__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__110__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__110__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__110__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__111__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__111__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__111__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__111__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__111__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__111__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__111__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__111__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__112__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__112__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__112__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__112__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__112__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__112__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__112__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__112__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__113__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__113__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__113__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__113__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__113__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__113__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__113__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__113__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__120__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__120__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__120__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__120__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__120__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__120__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__121__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__121__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__121__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__121__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__121__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__121__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__122__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__122__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__122__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__122__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__122__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__122__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__122__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__122__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__126__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__126__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__126__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__126__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__126__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__126__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__126__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__126__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__127__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__127__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__127__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__127__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__127__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__127__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__127__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__127__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__128__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__128__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__128__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__128__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__128__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__128__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__128__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__128__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__129__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__129__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__129__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__129__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__129__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__129__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__129__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__129__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cdp_cvtout_output_rdy) 
              & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_1.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT____VdfgRegularize_hcdf09104_0_5))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt));
    vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__128__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__128__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_94;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__128__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_94)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__128__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__128__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__128__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__128__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_63_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__128__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__126__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__126__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_29;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__126__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_29)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__126__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__126__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__126__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__126__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_61_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__126__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_25 
        = (1U & ((2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                 | ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse) 
                        & (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_11))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__56__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__56__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_26;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__56__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_26)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__56__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__56__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__56__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__56__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_50 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__56__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__55__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__55__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__55__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__55__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__55__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__55__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__55__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_41 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__55__Vfuncout;
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_15 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2) 
                     & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_25 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_25 
        = (1U & (~ ((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                    | (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_15))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_86_tmp 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_24 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_40 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_35 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__1__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_3) 
                  | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3))) 
              & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4) 
                 & ((2U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                    & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__2__vector 
        = (0x0000007fU & ((IData)(1U) + (0x00000040U 
                                         | ((0x0000003eU 
                                             & ((~ 
                                                 ((IData)(9U) 
                                                  + 
                                                  (~ 
                                                   (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                                    >> 0x0000000bU)))) 
                                                << 1U)) 
                                            | (1U & 
                                               (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                                >> 0x0aU))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__2__vector), 6U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__2__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__1__input_0 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__2__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__1__input_0) 
           & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__1__sel));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__1__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__shift_0_prb 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__1__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__120__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_135_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_69_nl));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__120__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                    | (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_13))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__120__input_0 
        = (1U & (~ ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_13) 
                    & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__120__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__120__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__120__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_56_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__111__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__111__input_1 
        = (1U & (~ ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_5) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__111__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_91_nl) 
                    | (2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__111__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__111__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__111__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__111__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_42_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__111__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__127__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__127__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_29)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__127__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_61_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__127__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__127__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__127__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__127__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_62_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__127__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__110__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__110__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_40_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__110__input_0 
        = (((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                | ((2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6)) 
                   | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_5)))) 
            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__110__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__110__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__110__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__110__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_41_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__110__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_41 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__121__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__121__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_26)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__121__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_50;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__121__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__121__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__121__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_59_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__23__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__23__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_94;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__23__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_7_cse;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__23__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__23__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__23__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__23__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_65_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__23__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_153_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__9__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__9__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__9__input_0 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42) 
                     & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__9__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__9__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__9__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__9__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_81_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__9__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_144_nl 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__98__sel 
        = (2U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__98__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                    & (~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_11)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__98__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__98__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__98__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__98__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__98__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__98__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_71 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_42 
        = ((~ ((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6)) 
               | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_28 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_117 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
                 | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4) 
                    | (0U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_70_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_69_nl) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_89_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_92_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
              | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__97__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__97__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__97__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_17_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__97__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__97__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__97__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__97__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__97__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__25__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__25__input_1 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_8_nl) 
               | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_3) 
                  | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_3) 
                     | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_3))))) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_39));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__25__input_0 
        = (1U & (~ ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_5) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4)) 
                       | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_4) 
                          | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_4) 
                             | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42) 
                                | ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_14) 
                                   | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4) 
                                      | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4))))))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__25__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__25__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__25__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__25__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_70_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__25__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__19__sel 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6) 
                 >> 1U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__19__input_1 
        = (IData)((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                    >> 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__19__input_0 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
            >> 1U) & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__19__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__19__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__19__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__19__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_83_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__19__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
            & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_35));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_FpExpoWidthDec_6U_5U_10U_1U_1U_if_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_40) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_41));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__122__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__122__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_59_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__122__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_50;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__122__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__122__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__122__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__122__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_60_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__122__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__24__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__24__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_65_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__24__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_94));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__24__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__24__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__24__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__24__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_66_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__24__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__22__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__22__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_153_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__22__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_41;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__22__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__22__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__22__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__22__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_84_tmp 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__22__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__129__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_91_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__129__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_57) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_153_nl));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__129__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_63_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__129__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__129__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__129__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__129__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_64_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__129__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__5__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__5__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_144_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__5__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__5__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__5__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__5__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__5__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_80_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__5__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__10__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__10__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_144_nl) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__10__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_81_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__10__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__10__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__10__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__10__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_82_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__10__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__99__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_146_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__99__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_19_nl)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__99__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_25;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__99__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__99__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__99__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__99__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_20_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__99__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__21__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__21__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_71;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__21__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_41;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__21__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__21__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__21__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__21__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_57_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__21__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__13__sel 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                 >> 1U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__13__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__13__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_71;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__13__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__13__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__13__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__13__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_50_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__13__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__12__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__12__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_28;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__12__input_0 
        = (1U & (~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_15)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__12__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__12__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__12__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__12__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_39_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__12__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__26__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__26__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__26__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_28;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__26__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__26__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__26__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__26__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_71_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__26__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__101__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__101__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_28;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__101__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__101__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__101__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__101__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__101__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__101__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__53__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__53__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__53__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_70_cse;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__53__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__53__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__53__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__53__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__53__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__112__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__112__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__112__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_42;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__112__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__112__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__112__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__112__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_43_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__112__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__113__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__113__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__113__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_42;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__113__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__113__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__113__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__113__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_44_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__113__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__20__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_83_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__20__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_FpExpoWidthDec_6U_5U_10U_1U_1U_else_and_2_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__20__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__20__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__20__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__20__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__20__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_mux1h_4_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__20__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__6__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_80_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__6__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_sva_mx0w0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__6__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_1_o_mul_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__6__sel)
            ? __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__6__input_1
            : __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__6__input_0);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__6__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_mux1h_1_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__6__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__11__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_82_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__11__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva_mx0w0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__11__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_14_1_sva_mx0w0;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__11__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__11__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__11__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__11__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_mux1h_2_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__11__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__100__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__100__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__100__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_20_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__100__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__100__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__100__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__100__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_21_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__100__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__14__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_69_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__14__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_41)) 
                    | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                       >> 1U))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__14__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_50_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__14__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__14__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__14__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__14__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_51_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__14__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__27__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_112_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__27__input_1 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                    | (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_15))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__27__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_71_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__27__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__27__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__27__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__27__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_72_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__27__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__102__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__102__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__102__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_25;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__102__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__102__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__102__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__102__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__102__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__54__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__54__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_28_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__54__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__54__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__54__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__54__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__54__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_22 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__54__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__15__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__15__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__15__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_51_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__15__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__15__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__15__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__15__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_52_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__15__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__103__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__103__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_23_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__103__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_25;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__103__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__103__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__103__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__103__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__103__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__7__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__7__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_22;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__7__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_70_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__7__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__7__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__7__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__7__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__7__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__8__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__8__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_22;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__8__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_32_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__8__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__8__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__8__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__8__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__8__Vfuncout;
}

void Vsim_HLS_cdp_ocvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_0__2(Vsim_HLS_cdp_ocvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_ocvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16;
    HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__3__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__3__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__3__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__3__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__28__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__28__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__28__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__28__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__28__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__28__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__28__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__28__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__29__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__29__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__29__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__29__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__29__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__29__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__29__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__29__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__30__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__30__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__30__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__30__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__30__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__30__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__30__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__30__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__31__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__31__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__31__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__31__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__32__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__32__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__32__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__32__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__57__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__57__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__57__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__57__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__57__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__57__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__57__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__57__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__58__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__58__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__58__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__58__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__58__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__58__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__58__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__58__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__59__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__59__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__59__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__59__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__59__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__59__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__59__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__59__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__89__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__89__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__89__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__89__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__89__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__89__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__89__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__89__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__90__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__90__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__90__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__90__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__90__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__90__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__90__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__90__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__91__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__91__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__91__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__91__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__91__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__91__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__91__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__91__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__92__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__92__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__92__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__92__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__92__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__92__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__92__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__92__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__93__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__93__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__93__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__93__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__93__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__93__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__93__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__93__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__94__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__94__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__94__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__94__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__94__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__94__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__94__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__94__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__114__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__114__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__114__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__114__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__114__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__114__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__114__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__114__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__115__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__115__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__115__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__115__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__115__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__115__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__115__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__115__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__116__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__116__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__116__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__116__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__116__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__116__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__116__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__116__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__117__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__117__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__117__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__117__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__117__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__117__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__117__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__117__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__132__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__132__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__132__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__132__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__132__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__132__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__132__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__132__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__133__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__133__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__133__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__133__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__133__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__133__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__133__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__133__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__134__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__134__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__134__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__134__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__134__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__134__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__134__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__134__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cdp_cvtout_input_vld) 
              & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_1.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT____VdfgRegularize_hcdf09104_0_2))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_10 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
              & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__89__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__89__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                    | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__89__input_0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_7_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__89__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__89__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__89__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__89__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__89__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_15 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__114__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__114__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_69_nl)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__114__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__114__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__114__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__114__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__114__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_45_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__114__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__57__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__57__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse) 
                        & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_7_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__57__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_117;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__57__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__57__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__57__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__57__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_73_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__57__Vfuncout;
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_9 
        = ((2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_11 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_16 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_15));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__115__sel 
        = (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__115__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__115__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_45_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__115__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__115__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__115__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__115__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_46_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__115__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__58__sel 
        = (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__58__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_117;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__58__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_73_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__58__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__58__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__58__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__58__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_66 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__58__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_tmp_6 
        = ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_9) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__3__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1) 
            & ((2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)) 
               & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_10) 
                                           & (2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__3__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__3__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__iExpoWidth_oExpoWidth_prb 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__3__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__31__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1) 
            & ((0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)) 
               & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_10) 
                                           & (0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__31__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__31__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_nvdla_int_h_ln346_assert_oWidth_ge_aWidth_p_bWidth_1_sig_mx0w1 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__31__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_17 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1)) 
                 | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__94__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__94__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_11;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__94__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__94__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__94__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__94__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__94__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__94__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__90__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_11_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__90__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__90__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__90__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__90__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__90__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__90__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__90__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__92__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_13_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__92__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__92__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__92__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__92__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__92__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__92__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__92__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__29__sel 
        = (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__29__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__29__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__29__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__29__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__29__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__29__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_77_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__29__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_52 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_187_ssc 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
           & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2) 
              & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42) 
                 & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__32__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_16) 
            & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                 ? 2U : 1U) >> 1U)) | ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
                                       & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_15)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__32__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__32__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_nvdla_int_h_ln346_assert_oWidth_ge_aWidth_p_bWidth_2_sig_mx0w1 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__32__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__132__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__132__input_1 
        = (1U & (~ ((~ ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use) 
                        & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) 
                    & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__132__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_16;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__132__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__132__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__132__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__132__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_67_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__132__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__116__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__116__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_44_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__116__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_46_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__116__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__116__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__116__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__116__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_47_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__116__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__133__sel 
        = (2U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__133__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_tmp_6;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__133__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_9)) 
                    & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__133__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__133__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__133__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__133__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_68_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__133__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__59__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__59__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_66;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__59__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_17;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__59__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__59__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__59__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__59__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_75_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__59__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__28__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__28__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_66;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__28__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_17;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__28__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__28__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__28__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__28__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_76_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__28__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__91__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_8_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__91__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_11_nl))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__91__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__91__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__91__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__91__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__91__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__91__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__93__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1) 
           & ((2U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__93__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_11_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__93__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1) 
           & ((2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__93__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__93__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__93__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__93__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__93__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__30__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_112_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__30__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1)) 
                    | (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__30__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_77_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__30__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__30__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__30__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__30__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_78_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__30__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_and_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_33_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_173_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_39_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_and_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_52_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_183_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_57_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_and_3_cse 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_66_nl)) 
           & (IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_and_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_70_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_and_1_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_72_nl));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__117__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__117__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_43_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__117__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_47_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__117__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__117__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__117__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__117__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_48_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__117__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__134__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__134__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_68_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__134__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_tmp_6;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__134__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__134__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__134__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__134__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_69_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__134__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_and_cse 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_76_nl)) 
           & (IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_and_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_78_nl));
}

void Vsim_HLS_cdp_ocvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_1__0(Vsim_HLS_cdp_ocvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_ocvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__157__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__157__Vfuncout = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__157__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__157__vector = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__169__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__169__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__169__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__169__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__169__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__169__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__169__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__169__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__170__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__170__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__170__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__170__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__170__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__170__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__213__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__213__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__213__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__213__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__213__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__213__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__213__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__213__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__213__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__213__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__214__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__214__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__214__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__214__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__214__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__214__input_1 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__214__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__214__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__214__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__214__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__215__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__215__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__215__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__215__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__215__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__215__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__215__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__215__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__215__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__215__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__216__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__216__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__216__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__216__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__216__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__216__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__216__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__216__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__216__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__216__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__217__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__217__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__217__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__217__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__217__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__217__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__217__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__217__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__217__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__217__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__218__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__218__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__218__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__218__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__218__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__218__input_1 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__218__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__218__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__218__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__218__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__219__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__219__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__219__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__219__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__219__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__219__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__219__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__219__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__219__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__219__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__220__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__220__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__220__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__220__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__220__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__220__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__220__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__220__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__220__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__220__sel = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__221__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__221__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__221__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__221__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__222__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__222__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__222__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__222__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__222__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__222__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__222__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__222__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__223__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__223__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__223__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__223__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__223__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__223__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__223__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__223__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__224__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__224__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__224__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__224__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__224__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__224__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__224__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__224__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__225__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__225__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__225__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__225__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__225__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__225__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__226__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__226__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__226__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__226__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__226__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__226__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__226__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__226__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__227__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__227__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__227__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__227__input_2 = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__227__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__227__input_1 = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__227__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__227__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__227__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__227__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__228__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__228__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__228__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__228__vector = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__229__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__229__Vfuncout = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__229__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__229__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__230__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__230__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__230__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__230__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__230__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__230__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__230__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__230__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__231__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__231__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__231__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__231__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__231__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__231__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__231__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__231__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__232__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__232__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__232__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__232__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__232__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__232__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__233__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__233__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__233__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__233__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__233__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__233__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__239__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__239__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__239__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__239__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__239__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__239__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__239__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__239__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__241__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__241__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__241__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__241__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__241__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__241__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__241__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__241__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__248__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__248__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__248__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__248__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__248__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__248__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__248__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__248__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__249__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__249__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__249__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__249__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__249__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__249__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__249__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__249__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__257__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__257__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__257__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__257__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__257__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__257__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__257__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__257__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__262__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__262__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__262__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__262__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__262__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__262__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__262__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__262__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__271__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__271__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__271__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__271__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__271__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__271__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__271__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__271__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__272__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__272__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__272__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__272__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__272__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__272__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__272__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__272__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__276__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__276__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__276__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__276__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__276__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__276__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__276__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__276__sel = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__292__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__292__Vfuncout = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__292__arg1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__292__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__292__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__292__arg2 = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__293__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__293__Vfuncout = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__293__arg1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__293__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__293__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__293__arg2 = 0;
    SData/*10:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__294__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__294__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__294__arg1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__294__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__294__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__294__arg2 = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__295__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__295__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__295__arg1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__295__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__295__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__295__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__296__arg1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__296__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__296__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__296__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__296__sbit;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__296__sbit = 0;
    VlWide<4>/*112:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__300__Vfuncout;
    VL_ZERO_W(113, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__300__Vfuncout);
    VlWide<4>/*112:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__300__arg1;
    VL_ZERO_W(113, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__300__arg1);
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__300__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__300__arg2 = 0;
    VlWide<4>/*104:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__301__Vfuncout;
    VL_ZERO_W(105, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__301__Vfuncout);
    VlWide<4>/*104:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__301__arg1;
    VL_ZERO_W(105, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__301__arg1);
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__301__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__301__arg2 = 0;
    VlWide<4>/*104:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__302__Vfuncout;
    VL_ZERO_W(105, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__302__Vfuncout);
    VlWide<4>/*104:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__302__arg1;
    VL_ZERO_W(105, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__302__arg1);
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__302__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__302__arg2 = 0;
    SData/*10:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__303__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__303__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__303__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__303__arg2 = 0;
    SData/*10:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__304__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__304__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__304__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__304__arg2 = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_acc_itm_2 
                = (0x03ffffffU & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_25U_25U_26U_1_o_acc_itm_2);
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_bits_slc_FpMantDecShiftRight_10U_6U_10U_least_mask_10_itm_2 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva) 
                         >> 0x0aU));
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_sva_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_itm;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_0_1 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_7_1 
                = (1U & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                                 >> 7U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_mx0w0;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_0_1 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_7_1 
                = (1U & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                 >> 7U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_mx0w0;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_bits_slc_FpMantDecShiftRight_10U_6U_10U_least_mask_10_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_0_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_7_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_0_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_7_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_2 = 0U;
    }
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_56_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_2_itm_2 
                = (0x0000003fU & (~ ([&]() {
                            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__225__sel 
                                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_mx0w0;
                            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__225__input_0 
                                = (0x0000003fU & (IData)(
                                                         (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                                                          >> 1U)));
                            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__225__sel)
                                    ? 0x3fU : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__225__input_0));
                            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__225__Vfuncout 
                                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                        }(), (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__225__Vfuncout))));
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_2_itm_2 = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_42_1 
                = (1U & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                 >> 0x0000002aU)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nand_itm_2 
                = (0x00000007ffffffffULL != (0x00000007ffffffffULL 
                                             & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                                >> 7U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_42_1 
                = (1U & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                                 >> 0x0000002aU)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nand_itm_2 
                = (0x00000007ffffffffULL != (0x00000007ffffffffULL 
                                             & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                                                >> 7U)));
        }
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct_mx0c0;
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_bits_9_0_sva_2 
                = (0x000003ffU & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                  & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_or_itm_2 
                = (IData)((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva_mx0w0) 
                            >> 0x0000000aU) | (0U != 
                                               (0x000003ffU 
                                                & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                                   & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva_mx0w0))))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_21_nl)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_4 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_18_nl))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__222__sel 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_35;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__222__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_IntShiftRightSat_50U_6U_16U_oelse_IntShiftRightSat_50U_6U_16U_if_unequal_tmp;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__222__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_3;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__222__sel)
                    ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__222__input_1)
                    : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__222__input_0));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__222__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_4 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__222__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_24_nl))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__223__sel 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_35;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__223__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_IntShiftRightSat_50U_6U_16U_oelse_IntShiftRightSat_50U_6U_16U_if_unequal_tmp;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__223__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__223__sel)
                    ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__223__input_1)
                    : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__223__input_0));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__223__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__223__Vfuncout;
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_85_nl) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm 
                = (0x000003ffffffffffULL & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_mux1h_1_itm);
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_24;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_FpExpoWidthDec_6U_5U_10U_1U_1U_if_or_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_41_nl))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__224__sel 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_41;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__224__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_if_IntShiftRightSat_50U_6U_16U_if_or_1_nl;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__224__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_5;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__224__sel)
                    ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__224__input_1)
                    : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__224__input_0));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__224__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_6 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__224__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_42_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4;
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_52) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_IntShiftRightSat_50U_6U_16U_oelse_IntShiftRightSat_50U_6U_16U_if_unequal_tmp)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_itm 
                = (0x000000ffU & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_mux1h_1_itm 
                                          >> 0x2aU)));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_24) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_25)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_25)));
        }
        if ((((((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_88_nl)) 
                & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen)) 
               & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5))) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_1_itm 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_mux1h_4_itm));
        }
        if ((((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
                & (0U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5))) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
              & (~ ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                             >> 0x0000002aU)) & (0x00000007ffffffffULL 
                                                 != 
                                                 (0x00000007ffffffffULL 
                                                  & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                                     >> 7U)))))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_itm 
                = (3U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_mux1h_4_itm) 
                         >> 4U));
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
               & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U))) & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6)) 
                                         | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3))))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_48_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm_mx1w0;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_42_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nand_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_42_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nand_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt = 0ULL;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_bits_9_0_sva_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm = 0ULL;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_6 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_1_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm = 0U;
    }
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__213__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__214__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__218__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__213__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_4;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__214__input_0 
                = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__218__input_0 
                = ((0x0000000cU & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_3_1) 
                                   << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_0) 
                                               << 1U) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                                                    >> 9U))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_16 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_nl) 
                            | (~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_17 
                = (1U & (~ ((((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_sva_2 
                               == ([&]() {
                                            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__221__vector 
                                                = (0x000001ffU 
                                                   & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_1_oif_1_acc_nl));
                                            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__221__Vfuncout 
                                                = (
                                                   (0x000003fffffffe00ULL 
                                                    & ((- (QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__221__vector) 
                                                                              >> 8U))))) 
                                                       << 9U)) 
                                                   | (QData)((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__221__vector)));
                                        }(), __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__221__Vfuncout)) 
                              | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_oelse_mux_1_nl)) 
                             | (~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8))) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43))));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__213__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_0_sva;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__214__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_6_1_sva;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__218__input_1 
                = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva) 
                                  >> 1U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__213__input_2 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__214__input_2 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                                  >> 1U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__218__input_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_or_3_nl;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__213__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__213__sel));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__214__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__214__sel)))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__218__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__218__sel)))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__213__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__213__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__214__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__214__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__218__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__218__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__213__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__213__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__214__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__214__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__218__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__218__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__213__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__214__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__218__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_0 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__213__Vfuncout;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_6_1 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__214__Vfuncout;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_13_10 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__218__Vfuncout;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__215__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__215__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                         >> 6U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__215__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_7_sva;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__215__input_2 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                         >> 7U));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__215__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__215__sel));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__215__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__215__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__215__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__215__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__215__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_7 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__215__Vfuncout;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__216__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__216__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                         >> 7U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__216__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_0_sva;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__216__input_2 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                         >> 8U));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__216__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__216__sel));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__216__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__216__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__216__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__216__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__216__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_8 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__216__Vfuncout;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__217__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__217__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                         >> 8U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__217__input_1 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__217__input_2 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                         >> 9U));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__217__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__217__sel));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__217__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__217__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__217__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__217__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__217__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_9 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__217__Vfuncout;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__219__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__219__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_3_1) 
                         >> 2U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__219__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva) 
                         >> 5U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__219__input_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_or_2_itm_2;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__219__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__219__sel));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__219__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__219__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__219__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__219__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__219__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_14 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__219__Vfuncout;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__220__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__220__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_4;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__220__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_7_sva;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__220__input_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_4;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__220__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__220__sel));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__220__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__220__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__220__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__220__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__220__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_15 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__220__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_6_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_7 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_8 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_9 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_13_10 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_14 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_15 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_17 = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_137_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_42_1) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nand_itm_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_135_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_42_1) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nand_itm_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_iswt0));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_iswt0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__232__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_6;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__232__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_1_itm;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__232__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__232__input_1)
            : 0x0eU);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__232__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_mux_6_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__232__Vfuncout;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3269 = (
                                                   (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_9) 
                                                     << 9U) 
                                                    | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_8) 
                                                        << 8U) 
                                                       | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_7) 
                                                          << 7U))) 
                                                   | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_6_1) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_0)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_67_nl))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__228__vector 
                = (0x0003ffffffffffffULL & VL_MULS_QQQ(50, 
                                                       (0x0003ffffffffffffULL 
                                                        & VL_EXTENDS_QQ(50,34, 
                                                                        (0x00000003ffffffffULL 
                                                                         & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_33U_32U_34U_o_acc_nl))), 
                                                       (0x0003ffffffffffffULL 
                                                        & VL_EXTENDS_QI(50,16, (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_scale_use)))));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__228__Vfuncout 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__228__vector;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__228__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_and_1_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_3;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4 = 0U;
    }
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__301__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__301__arg1[0U] = 0U;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__301__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__301__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__301__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__301__arg1[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__301__arg1[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__301__arg1[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__301__arg1[3U];
    VL_SHIFTRS_WWI(105,105,6, __Vtemp_2, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__301__arg2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x000001ffU & __Vtemp_2[3U]);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__301__Vfuncout[0U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__301__Vfuncout[1U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__301__Vfuncout[2U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__301__Vfuncout[3U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__301__Vfuncout[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__301__Vfuncout[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__301__Vfuncout[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__301__Vfuncout[3U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__292__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_and_1_cse) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__229__vector 
                = (0x000003ffffffffffULL & VL_MULS_QQQ(42, 
                                                       (0x000003ffffffffffULL 
                                                        & VL_EXTENDS_QI(42,26, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_o_acc_itm_2)), 
                                                       (0x000003ffffffffffULL 
                                                        & VL_EXTENDS_QI(42,16, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_mul_in_1_sva_3)))));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__229__Vfuncout 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__229__vector;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__229__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2 = 0ULL;
    }
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__292__arg1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__292__arg1;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x000003ffffffffffULL & VL_SHIFTRS_QQI(42,42,6, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__292__arg2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__292__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__292__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__302__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__302__arg1[0U] = 0U;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__302__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__302__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__302__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__302__arg1[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__302__arg1[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__302__arg1[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__302__arg1[3U];
    VL_SHIFTRS_WWI(105,105,6, __Vtemp_4, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__302__arg2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_4[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x000001ffU & __Vtemp_4[3U]);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__302__Vfuncout[0U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__302__Vfuncout[1U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__302__Vfuncout[2U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__302__Vfuncout[3U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__302__Vfuncout[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__302__Vfuncout[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__302__Vfuncout[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__302__Vfuncout[3U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_7_sva 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_7_1) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_137_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_2))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_0_sva 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_0_1) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_2))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_137_cse))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_183_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2 
                = (0U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_sva_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_itm;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_62_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_4 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3_mx0c1)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_FpExpoWidthDec_6U_5U_10U_1U_1U_if_or_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_60_nl))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__226__sel 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_40;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__226__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_16_1;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__226__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_3;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__226__sel)
                    ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__226__input_1)
                    : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__226__input_0));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__226__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_4 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__226__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_187_ssc) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_3_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_itm;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm) 
                         >> 0x0aU));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_64_nl)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_or_2_itm_2 
                = (1U & (((((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1) 
                                >> 0x0eU)) & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4)) 
                           & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4))) 
                          | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_5))) 
                         | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)));
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_209_cse) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__227__sel 
                = ((4U & ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_86_tmp) 
                              | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_84_tmp))) 
                          << 2U)) | ((((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_84_tmp)) 
                                       & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_86_tmp)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_84_tmp)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__227__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__227__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__227__input_2 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__227__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__227__sel)))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__227__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__227__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__227__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__227__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__227__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__227__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_69_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_3 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_shifter_use;
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_o_acc_itm_2 
                = (0x03ffffffU & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_25U_25U_26U_o_acc_itm_2);
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_mul_in_1_sva_3 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_scale_use;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_3_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_or_2_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_o_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_mul_in_1_sva_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__198__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_137_cse;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__198__input_0 
                        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_itm) 
                            << 4U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_1_itm));
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__198__sel)
                            ? 0x3fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__198__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__198__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__198__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_7_sva 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_7_1) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_135_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_2))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_0_sva 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_0_1) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_2))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_135_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_6_1_sva 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__197__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_135_cse;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__197__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_2_itm_2;
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__197__sel)
                            ? 0x3fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__197__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__197__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__197__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__233__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_5;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__233__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_mux_6_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__233__sel)
            ? 0x0fU : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__233__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__233__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_or_3_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__233__Vfuncout;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3270 = (
                                                   ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_14) 
                                                    << 0x0000000eU) 
                                                   | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_13_10) 
                                                       << 0x0000000aU) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3269)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__293__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__293__arg1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__293__arg1;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x000003ffffffffffULL & VL_SHIFTRS_QQI(42,42,6, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__293__arg2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__293__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__293__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[3U] 
                                           >> 8U)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[3U] 
                                           >> 8U)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_1_oif_1_acc_nl 
        = (0x000003ffU & ((IData)(0x01ffU) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__240__vector 
                            = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_7_sva) 
                                << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_0_sva)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__240__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__240__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__240__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__240__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_1_oif_acc_nl 
        = (0x000003ffU & ((IData)(1U) + VL_EXTEND_II(10,9, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__194__vector 
                            = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_7_sva) 
                                << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_0_sva)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__194__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__194__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__194__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__194__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_oif_1_acc_nl 
        = (0x000003ffU & ((IData)(0x01ffU) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__234__vector 
                            = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_7_sva) 
                                << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_6_1_sva) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_0_sva)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__234__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__234__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__234__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__234__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_oif_acc_nl 
        = (0x000003ffU & ((IData)(1U) + VL_EXTEND_II(10,9, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__235__vector 
                            = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_7_sva) 
                                << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_6_1_sva) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_0_sva)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__235__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__235__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__235__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__235__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_69_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3)) 
                 | (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6))));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_3 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_mx0w0;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_3 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_mx0w0;
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_and_3_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_16_1 
                = (1U & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_5 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_nor_itm_2) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_IsNaN_6U_10U_nand_itm_2))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_3;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_3;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1 
                = (0x00007fffU & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1);
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_173_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_52) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_itm 
                = (7U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_mux1h_2_itm) 
                         >> 0x0bU));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_70_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (((((~ (((((((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4) 
                            >> 1U)) | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4))) 
                       | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3)) 
                      | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_3)) 
                   | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_39)))) 
               | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_52)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm 
                = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_mux1h_2_itm));
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_16_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_5 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
        = (0x00000fffffffffffULL & (VL_EXTEND_QQ(44,43, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__199__vector 
                            = (0x000003ffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__199__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__199__vector 
                                                            >> 0x29U))))) 
                                << 0x0000002aU) | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__199__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__199__Vfuncout)) 
                                    + VL_EXTEND_QQ(44,43, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__200__vector 
                            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__200__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__200__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__200__Vfuncout))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__295__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_3;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__295__arg1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__295__arg1;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x0003ffffffffffffULL & VL_SHIFTRS_QQI(50,50,6, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__295__arg2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__295__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_sva_mx0w0 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__295__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__300__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_3;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__300__arg1[0U] = 0U;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__300__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__300__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__300__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__300__arg1[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__300__arg1[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__300__arg1[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__300__arg1[3U];
    VL_SHIFTRS_WWI(113,113,6, __Vtemp_6, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__300__arg2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_6[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x0001ffffU & __Vtemp_6[3U]);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__300__Vfuncout[0U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__300__Vfuncout[1U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__300__Vfuncout[2U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__300__Vfuncout[3U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__300__Vfuncout[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__300__Vfuncout[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__300__Vfuncout[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__300__Vfuncout[3U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
        = (0x00000fffffffffffULL & (VL_EXTEND_QQ(44,43, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__201__vector 
                            = (0x000003ffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__201__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__201__vector 
                                                            >> 0x29U))))) 
                                << 0x0000002aU) | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__201__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__201__Vfuncout)) 
                                    + VL_EXTEND_QQ(44,43, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__202__vector 
                            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__202__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__202__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__202__Vfuncout))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__157__vector 
        = (0x000003ffffffffffULL & VL_MULS_QQQ(42, 
                                               (0x000003ffffffffffULL 
                                                & VL_EXTENDS_QI(42,26, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_acc_itm_2)), 
                                               (0x000003ffffffffffULL 
                                                & VL_EXTENDS_QI(42,16, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_mul_in_1_sva_3)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__157__Vfuncout 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__157__vector;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_1_o_mul_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__157__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm_mx1w0 
        = ((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_sva_2 
            == ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__195__vector 
                        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_1_oif_acc_nl));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__195__Vfuncout 
                        = ((0x000003fffffffe00ULL & 
                            ((- (QData)((IData)((1U 
                                                 & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__195__vector) 
                                                    >> 8U))))) 
                             << 9U)) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__195__vector)));
                }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__195__Vfuncout)) 
           | (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_sva_2 
              == ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__196__vector 
                        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_7_sva) 
                            << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_0_sva)));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__196__Vfuncout 
                        = ((0x000003ffffffff00ULL & 
                            ((- (QData)((IData)((1U 
                                                 & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__196__vector) 
                                                    >> 7U))))) 
                             << 8U)) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__196__vector)));
                }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__196__Vfuncout)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_if_IntShiftRightSat_42U_6U_8U_if_or_1_nl 
        = (((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_sva_2 
             == ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__236__vector 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_oif_1_acc_nl));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__236__Vfuncout 
                            = ((0x000003fffffffe00ULL 
                                & ((- (QData)((IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__236__vector) 
                                                          >> 8U))))) 
                                   << 9U)) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__236__vector)));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__236__Vfuncout)) 
            | (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_sva_2 
               == ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__237__vector 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_oif_acc_nl));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__237__Vfuncout 
                            = ((0x000003fffffffe00ULL 
                                & ((- (QData)((IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__237__vector) 
                                                          >> 8U))))) 
                                   << 9U)) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__237__vector)));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__237__Vfuncout))) 
           | (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_sva_2 
              == ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__238__vector 
                        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_7_sva) 
                            << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_6_1_sva) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_0_sva)));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__238__Vfuncout 
                        = ((0x000003ffffffff00ULL & 
                            ((- (QData)((IData)((1U 
                                                 & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__238__vector) 
                                                    >> 7U))))) 
                             << 8U)) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__238__vector)));
                }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__238__Vfuncout)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_91_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3)) 
                 | (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_mx0w0 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                             >> 0x0000002aU)) | (0ULL 
                                                 == 
                                                 (0x00000007ffffffffULL 
                                                  & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                                     >> 7U))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp 
        = ((0x00000007ffffffffULL != (0x00000007ffffffffULL 
                                      & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                         >> 7U))) & (IData)(
                                                            (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                                             >> 0x0000002aU)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[3U] 
                                           >> 0x00000010U)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_mx0w0 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                             >> 0x0000002aU)) | (0ULL 
                                                 == 
                                                 (0x00000007ffffffffULL 
                                                  & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                                                     >> 7U))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_209_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42) 
           | (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_14 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_5)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_13 
        = (1U & (((0x00000007ffffffffULL != (0x00000007ffffffffULL 
                                             & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                                                >> 7U))) 
                  & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                             >> 0x0000002aU))) | ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                                                  | (0U 
                                                     != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)))));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_5 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                 | (2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_29 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_11 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_57 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                    & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_nor_itm_2 
                = (0U == (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_IsNaN_6U_10U_nand_itm_2 
                = (0x3fU != (0x0000003fU & (IData)(
                                                   (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
                                                    >> 0x0aU))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_8_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                = (0x0001ffffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt));
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_nor_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_IsNaN_6U_10U_nand_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_50U_6U_16U_oif_1_acc_nl 
        = (0x0003ffffU & ((IData)(0x0001ffffU) + VL_EXTEND_II(18,17, 
                                                              ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__258__vector 
                            = ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_3) 
                                 << 0x0000000fU) | 
                                ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_itm) 
                                 << 0x0000000cU)) | 
                               (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm) 
                                 << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_3)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__258__Vfuncout 
                            = ((0x00010000U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__258__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__258__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__258__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_50U_6U_16U_oif_acc_nl 
        = (0x0003ffffU & ((IData)(1U) + VL_EXTEND_II(18,17, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__259__vector 
                            = ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_3) 
                                 << 0x0000000fU) | 
                                ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_itm) 
                                 << 0x0000000cU)) | 
                               (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm) 
                                 << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_3)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__259__Vfuncout 
                            = ((0x00010000U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__259__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__259__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__259__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva 
        = (0x00000fffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm_2) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__205__vector 
                            = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_or_itm_2) 
                               & ((0U != (0x000003ffU 
                                          & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1) 
                                             & ((IData)(0x03ffU) 
                                                + (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm))))) 
                                  | ((1U & (((IData)(0x07ffU) 
                                             + (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm)) 
                                            >> 0x0000000aU)) 
                                     | ((0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_bits_9_0_sva_2)) 
                                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_bits_slc_FpMantDecShiftRight_10U_6U_10U_least_mask_10_itm_2)))));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__205__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__205__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__205__Vfuncout)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_10_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_3 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_12_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_75_itm)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_15_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_89_rgt))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_75_itm)))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__230__sel 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_89_rgt;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__230__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__230__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__230__sel)
                    ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__230__input_1)
                    : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__230__input_0));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__230__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_3 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__230__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
                   & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
                  & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1))) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_92_rgt))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_75_itm)))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__231__sel 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_92_rgt;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__231__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__231__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__231__sel)
                    ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__231__input_1)
                    : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__231__input_0));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__231__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_3 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__231__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__171__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_mx0w0;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__171__input_0 
                        = (0x0000003fU & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                                  >> 1U)));
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__171__sel)
                            ? 0x3fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__171__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__171__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__171__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_164 
        = (IData)((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                    >> 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
        = (0x000fffffffffffffULL & (VL_EXTEND_QQ(52,51, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__203__vector 
                            = (0x0003ffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__203__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__203__vector 
                                                            >> 0x31U))))) 
                                << 0x00000032U) | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__203__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__203__Vfuncout)) 
                                    + VL_EXTEND_QQ(52,51, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__204__vector 
                            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__204__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__204__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__204__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_26 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_209_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_94 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_57) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_if_IntShiftRightSat_50U_6U_16U_if_or_1_nl 
        = (1U & (((((QData)((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_itm)) 
                    << 0x0000002aU) | vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm) 
                  == ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__260__vector 
                            = (0x0001ffffU & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_50U_6U_16U_oif_1_acc_nl);
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__260__Vfuncout 
                            = ((0x0003fffffffe0000ULL 
                                & ((- (QData)((IData)(
                                                      (1U 
                                                       & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__260__vector 
                                                          >> 0x10U))))) 
                                   << 0x00000011U)) 
                               | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__260__vector)));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__260__Vfuncout)) 
                 | (~ (((((QData)((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_itm)) 
                          << 0x0000002aU) | vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm) 
                        != ([&]() {
                                vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__261__vector 
                                    = (0x0001ffffU 
                                       & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_50U_6U_16U_oif_acc_nl);
                                vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__261__Vfuncout 
                                    = ((0x0003fffffffe0000ULL 
                                        & ((- (QData)((IData)(
                                                              (1U 
                                                               & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__261__vector 
                                                                  >> 0x10U))))) 
                                           << 0x00000011U)) 
                                       | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__261__vector)));
                            }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__261__Vfuncout)) 
                       & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_4)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__276__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__276__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__276__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__276__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__276__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__276__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__276__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__276__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__169__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__169__input_1 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1) 
                          >> 0x0aU));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__169__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva) 
                 >> 0x0000000aU));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__169__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__169__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__169__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__169__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_6_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__169__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__239__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__239__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_6;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__239__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_if_IntShiftRightSat_42U_6U_8U_if_or_1_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__239__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__239__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__239__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__239__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__239__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__241__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__241__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__241__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm_mx1w0;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__241__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__241__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__241__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__241__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_oelse_mux_1_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__241__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__249__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__249__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__249__input_0 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
            >> 1U) & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4) 
                      & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_4)) 
                         & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__249__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__249__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__249__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__249__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__249__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__262__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__262__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__262__input_0 
        = (1U & (~ ((2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__262__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__262__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__262__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__262__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_40_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__262__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__271__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__271__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp)) 
                    | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                       >> 1U))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__271__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_164;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__271__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__271__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__271__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__271__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_87_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__271__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_unfl_sva 
        = ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
                    >> 0x00000032U)) & (0x00000007ffffffffULL 
                                        != (0x00000007ffffffffULL 
                                            & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
                                               >> 0x0000000fU))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
                             >> 0x00000032U)) | (0ULL 
                                                 == 
                                                 (0x00000007ffffffffULL 
                                                  & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
                                                     >> 0x0000000fU))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_39 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_IsNaN_6U_10U_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_nor_itm_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s 
        = ((0x0000003eU & (((IData)(9U) + (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                              >> 0x0000000bU))) 
                           << 1U)) | (1U & (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                               >> 0x0000000aU))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg_s 
        = (0x000000ffU & ((IData)(0x7fU) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__153__vector 
                            = ((0x0000003eU & (((IData)(9U) 
                                                + (~ 
                                                   (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                                    >> 0x0000000bU))) 
                                               << 1U)) 
                               | (1U & (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                           >> 0x0aU))));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__153__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__153__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__153__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__277__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4)));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__277__input_1 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_nl;
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__277__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__277__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__277__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__277__Vfuncout))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__170__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__170__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_6_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__170__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__170__input_1)
            : 0U);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__170__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_FpExpoWidthDec_6U_5U_10U_1U_1U_else_and_2_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__170__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_112_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)) 
                 | (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4))));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_2 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)) 
                 | (2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_146_nl 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4) 
            >> 1U) & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_7_cse 
        = (1U & ((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__272__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42) 
           | (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_14));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__272__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_164;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__272__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_87_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__272__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__272__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__272__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__272__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_88_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__272__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_mx0w0 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
                                 >> 0x0000000fU)) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_unfl_sva))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_ovfl_sva))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_mx0w0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_ovfl_sva) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_unfl_sva))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22) 
                      | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) 
                     | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1))) 
                   | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U))))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22) 
                       | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) 
                      | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))) 
                     | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1)) 
                   | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U))))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_2_nl 
        = (0x00003fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__192__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__192__input_0 
                        = (0x00003fffU & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__192__sel)
                            ? 0x3fffU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__192__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__192__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__192__Vfuncout))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__294__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__294__arg1 
        = (0x00000400U | (0x000003ffU & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = ((0x0800U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t)) 
           | (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__294__arg1));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x00000fffU & VL_SHIFTRS_III(12,12,6, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t), (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__294__arg2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__294__Vfuncout 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__294__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__303__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__304__arg2 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__303__arg2;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = (1U | (0x07fcU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000007ffU & VL_SHIFTL_III(11,11,6, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t), (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__304__arg2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__304__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__303__Vfuncout 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__304__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__303__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__296__sbit = 0U;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__296__arg2 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg_s));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__296__arg1 = 1U;
    if ((0x00000040U & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__296__arg2))) {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__296__sbit) 
                << 1U) | (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__296__arg1));
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__297__sbit 
            = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__296__sbit;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__297__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__296__arg2)));
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__297__arg1 
            = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                     >> 1U));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x000007ffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__297__sbit))));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x07feU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t)) 
               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__297__arg1));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x000007ffU & VL_SHIFTRS_III(11,11,7, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__297__arg2)));
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__297__Vfuncout 
            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__296__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__297__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__298__sbit 
            = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__296__sbit;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__298__arg2 
            = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__296__arg2;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__298__arg1 
            = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__296__arg1;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__299__sbit 
            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__298__sbit;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__299__arg2 
            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__298__arg2;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__299__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__298__sbit) 
                << 1U) | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__298__arg1));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x000007ffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__299__sbit))));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x07fcU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t)) 
               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__299__arg1));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x000007ffU & VL_SHIFTL_III(11,11,7, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__299__arg2)));
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__299__Vfuncout 
            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__298__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__299__Vfuncout;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__296__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__298__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva_mx0w0 
        = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__296__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__278__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_5;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__278__input_1 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl;
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__278__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__278__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__278__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__278__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_8_nl 
        = (1U & ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_2) 
                 | ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__248__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__248__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__248__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_146_nl) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__248__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__248__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__248__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__248__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__248__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_14_1_sva_mx0w0 
        = (0x00003fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__193__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__193__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__193__sel)
                            ? 0x3fffU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__193__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__193__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__193__Vfuncout))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var = 1U;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_IntShiftRightSat_50U_6U_16U_oelse_IntShiftRightSat_50U_6U_16U_if_unequal_tmp 
        = (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_sva_mx0w0 
           != ([&]() {
                vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__191__vector 
                    = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_mx0w0) 
                        << 0x0000000fU) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_14_1_sva_mx0w0) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_mx0w0)));
                vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__191__Vfuncout 
                    = ((0x0003ffffffff0000ULL & ((- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__191__vector) 
                                                                        >> 0x0fU))))) 
                                                 << 0x00000010U)) 
                       | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__191__vector)));
            }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__191__Vfuncout));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__257__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__257__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_IntShiftRightSat_50U_6U_16U_oelse_IntShiftRightSat_50U_6U_16U_if_unequal_tmp;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__257__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4) 
                    >> 1U)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__257__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__257__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__257__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__257__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_85_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__257__Vfuncout;
}

void Vsim_HLS_cdp_ocvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_1__0(Vsim_HLS_cdp_ocvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_ocvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__186__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__186__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__186__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__186__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__188__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__188__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__188__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__188__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__190__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__190__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__190__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__190__vector = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__305__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__305__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__305__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__305__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__305__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__305__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__305__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__305__sel = 0;
    // Body
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__305__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__305__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__305__input_0 
        = (0x0003ffffffffffffULL & (((QData)((IData)(
                                                     vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_data[3U])) 
                                     << 0x0000002eU) 
                                    | (((QData)((IData)(
                                                        vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_data[2U])) 
                                        << 0x0000000eU) 
                                       | ((QData)((IData)(
                                                          vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_data[1U])) 
                                          >> 0x00000012U))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__305__sel)
            ? __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__305__input_1
            : __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__305__input_0);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__305__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__305__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_33U_32U_34U_o_acc_nl 
        = (0x00000007ffffffffULL & (VL_EXTEND_QQ(35,34, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__283__vector 
                            = (0x00000001ffffffffULL 
                               & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt);
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__283__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__283__vector 
                                                            >> 0x20U))))) 
                                << 0x00000021U) | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__283__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__283__Vfuncout)) 
                                    - VL_EXTEND_QQ(35,34, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__284__vector 
                            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_offset_use;
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__284__Vfuncout 
                            = (((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__284__vector 
                                                               >> 0x1fU)))))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__284__vector)));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__284__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_25U_25U_26U_1_o_acc_itm_2 
        = (0x07ffffffU & (VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__288__vector 
                            = (0x01ffffffU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
                                                      >> 0x19U)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__288__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__288__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__288__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__288__Vfuncout)) 
                          - VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__289__vector 
                            = (0x01ffffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_offset_use);
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__289__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__289__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__289__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__289__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_25U_25U_26U_o_acc_itm_2 
        = (0x07ffffffU & (VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__290__vector 
                            = (0x01ffffffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__290__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__290__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__290__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__290__Vfuncout)) 
                          - VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__291__vector 
                            = (0x01ffffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_offset_use);
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__291__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__291__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__291__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__291__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_nl 
        = (0x0000007fU & ((IData)(0x3dU) + VL_EXTEND_II(7,6, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__187__vector 
                            = (0x0000001fU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
                                                      >> 0x0bU)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__187__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__187__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__187__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_nl 
        = (0x000000ffU & ((IData)(0x51U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__189__vector 
                            = (0x0000003fU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
                                                      >> 0x0aU)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__189__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__189__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__189__Vfuncout)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__186__vector 
        = (0x0000007fU & ((IData)(0x11U) + (0x00000040U 
                                            | (0x0000003fU 
                                               & (~ (IData)(
                                                            (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
                                                             >> 0x0000000aU)))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__186__vector), 6U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__186__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__186__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__188__vector 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__188__vector), 5U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__188__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__188__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__190__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__190__vector), 6U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__190__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__190__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_13_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
                 | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_11_nl 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_13_nl));
}

void Vsim_HLS_cdp_ocvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_1__1(Vsim_HLS_cdp_ocvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_ocvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__154__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__154__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__154__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__154__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__154__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__154__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__155__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__155__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__155__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__155__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__158__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__158__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__158__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__158__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__158__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__158__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__158__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__158__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__159__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__159__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__159__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__159__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__159__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__159__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__159__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__159__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__160__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__160__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__160__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__160__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__160__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__160__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__160__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__160__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__161__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__161__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__161__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__161__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__161__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__161__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__161__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__161__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__162__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__162__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__162__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__162__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__162__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__162__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__162__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__162__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__163__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__163__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__163__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__163__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__163__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__163__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__163__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__163__sel = 0;
    SData/*13:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__164__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__164__Vfuncout = 0;
    SData/*13:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__164__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__164__input_0 = 0;
    SData/*13:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__164__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__164__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__164__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__164__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__165__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__165__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__165__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__165__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__165__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__165__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__165__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__165__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__166__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__166__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__166__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__166__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__166__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__166__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__166__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__166__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__167__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__167__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__167__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__167__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__167__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__167__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__167__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__167__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__168__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__168__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__168__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__168__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__168__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__168__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__168__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__168__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__172__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__172__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__172__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__172__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__172__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__172__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__172__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__172__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__173__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__173__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__173__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__173__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__173__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__173__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__173__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__173__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__174__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__174__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__174__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__174__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__174__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__174__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__174__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__174__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__175__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__175__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__175__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__175__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__175__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__175__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__175__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__175__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__176__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__176__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__176__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__176__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__176__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__176__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__176__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__176__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__177__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__177__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__177__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__177__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__177__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__177__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__177__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__177__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__178__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__178__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__178__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__178__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__178__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__178__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__178__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__178__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__179__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__179__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__179__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__179__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__179__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__179__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__179__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__179__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__180__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__180__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__180__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__180__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__180__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__180__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__180__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__180__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__206__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__206__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__206__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__206__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__206__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__206__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__206__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__206__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__207__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__207__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__207__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__207__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__207__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__207__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__207__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__207__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__208__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__208__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__208__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__208__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__208__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__208__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__208__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__208__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__209__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__209__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__209__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__209__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__209__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__209__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__209__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__209__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__250__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__250__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__250__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__250__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__250__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__250__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__250__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__250__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__251__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__251__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__251__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__251__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__251__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__251__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__251__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__251__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__252__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__252__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__252__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__252__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__252__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__252__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__252__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__252__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__253__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__253__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__253__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__253__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__253__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__253__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__253__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__253__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__254__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__254__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__254__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__254__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__254__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__254__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__254__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__254__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__255__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__255__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__255__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__255__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__255__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__255__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__255__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__255__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__256__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__256__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__256__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__256__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__256__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__256__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__256__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__256__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__263__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__263__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__263__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__263__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__263__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__263__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__263__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__263__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__264__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__264__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__264__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__264__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__264__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__264__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__264__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__264__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__265__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__265__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__265__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__265__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__265__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__265__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__265__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__265__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__266__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__266__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__266__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__266__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__266__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__266__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__266__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__266__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__273__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__273__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__273__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__273__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__273__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__273__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__273__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__273__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__274__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__274__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__274__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__274__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__274__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__274__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__274__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__274__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__275__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__275__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__275__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__275__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__275__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__275__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__275__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__275__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__279__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__279__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__279__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__279__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__279__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__279__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__279__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__279__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__280__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__280__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__280__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__280__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__280__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__280__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__280__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__280__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__281__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__281__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__281__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__281__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__281__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__281__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__281__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__281__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__282__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__282__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__282__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__282__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__282__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__282__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__282__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__282__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cdp_cvtout_output_rdy) 
              & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_0.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT____VdfgRegularize_hcdf09104_0_5))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt));
    vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__281__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__281__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_94;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__281__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_94)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__281__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__281__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__281__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__281__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_63_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__281__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__279__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__279__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_29;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__279__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_29)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__279__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__279__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__279__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__279__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_61_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__279__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_25 
        = (1U & ((2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                 | ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse) 
                        & (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_11))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__209__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__209__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_26;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__209__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_26)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__209__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__209__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__209__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__209__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_50 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__209__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__208__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__208__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__208__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__208__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__208__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__208__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__208__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_41 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__208__Vfuncout;
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_15 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2) 
                     & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_25 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_25 
        = (1U & (~ ((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                    | (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_15))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_86_tmp 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_24 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_40 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_35 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__154__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_3) 
                  | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3))) 
              & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4) 
                 & ((2U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                    & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__155__vector 
        = (0x0000007fU & ((IData)(1U) + (0x00000040U 
                                         | ((0x0000003eU 
                                             & ((~ 
                                                 ((IData)(9U) 
                                                  + 
                                                  (~ 
                                                   (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                                    >> 0x0000000bU)))) 
                                                << 1U)) 
                                            | (1U & 
                                               (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                                >> 0x0aU))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__155__vector), 6U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__155__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__154__input_0 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__155__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__154__input_0) 
           & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__154__sel));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__154__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__shift_0_prb 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__154__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__273__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_135_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_69_nl));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__273__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                    | (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_13))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__273__input_0 
        = (1U & (~ ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_13) 
                    & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__273__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__273__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__273__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__273__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_56_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__273__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__264__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__264__input_1 
        = (1U & (~ ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_5) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__264__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_91_nl) 
                    | (2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__264__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__264__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__264__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__264__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_42_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__264__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__280__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__280__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_29)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__280__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_61_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__280__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__280__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__280__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__280__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_62_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__280__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__263__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__263__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_40_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__263__input_0 
        = (((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                | ((2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6)) 
                   | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_5)))) 
            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__263__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__263__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__263__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__263__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_41_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__263__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_41 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__274__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__274__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_26)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__274__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_50;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__274__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__274__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__274__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__274__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_59_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__274__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__176__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__176__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_94;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__176__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_7_cse;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__176__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__176__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__176__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__176__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_65_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__176__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_153_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__162__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__162__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__162__input_0 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42) 
                     & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__162__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__162__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__162__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__162__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_81_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__162__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_144_nl 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__251__sel 
        = (2U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__251__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                    & (~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_11)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__251__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__251__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__251__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__251__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__251__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__251__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_71 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_42 
        = ((~ ((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6)) 
               | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_28 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_117 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
                 | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4) 
                    | (0U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_70_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_69_nl) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_89_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_92_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
              | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__250__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__250__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__250__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_17_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__250__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__250__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__250__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__250__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__250__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__178__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__178__input_1 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_8_nl) 
               | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_3) 
                  | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_3) 
                     | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_3))))) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_39));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__178__input_0 
        = (1U & (~ ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_5) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4)) 
                       | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_4) 
                          | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_4) 
                             | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42) 
                                | ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_14) 
                                   | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4) 
                                      | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4))))))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__178__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__178__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__178__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__178__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_70_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__178__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__172__sel 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6) 
                 >> 1U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__172__input_1 
        = (IData)((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                    >> 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__172__input_0 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
            >> 1U) & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__172__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__172__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__172__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__172__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_83_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__172__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
            & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_35));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_FpExpoWidthDec_6U_5U_10U_1U_1U_if_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_40) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_41));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__275__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__275__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_59_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__275__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_50;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__275__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__275__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__275__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__275__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_60_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__275__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__177__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__177__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_65_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__177__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_94));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__177__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__177__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__177__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__177__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_66_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__177__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__175__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__175__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_153_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__175__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_41;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__175__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__175__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__175__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__175__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_84_tmp 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__175__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__282__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_91_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__282__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_57) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_153_nl));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__282__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_63_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__282__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__282__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__282__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__282__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_64_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__282__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__158__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__158__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_144_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__158__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__158__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__158__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__158__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__158__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_80_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__158__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__163__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__163__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_144_nl) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__163__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_81_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__163__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__163__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__163__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__163__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_82_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__163__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__252__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_146_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__252__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_19_nl)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__252__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_25;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__252__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__252__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__252__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__252__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_20_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__252__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__174__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__174__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_71;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__174__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_41;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__174__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__174__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__174__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__174__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_57_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__174__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__166__sel 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                 >> 1U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__166__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__166__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_71;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__166__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__166__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__166__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__166__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_50_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__166__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__165__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__165__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_28;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__165__input_0 
        = (1U & (~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_15)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__165__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__165__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__165__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__165__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_39_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__165__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__179__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__179__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__179__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_28;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__179__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__179__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__179__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__179__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_71_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__179__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__254__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__254__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_28;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__254__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__254__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__254__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__254__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__254__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__254__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__206__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__206__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__206__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_70_cse;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__206__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__206__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__206__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__206__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__206__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__265__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__265__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__265__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_42;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__265__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__265__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__265__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__265__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_43_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__265__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__266__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__266__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__266__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_42;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__266__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__266__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__266__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__266__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_44_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__266__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__173__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_83_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__173__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_FpExpoWidthDec_6U_5U_10U_1U_1U_else_and_2_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__173__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__173__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__173__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__173__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__173__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_mux1h_4_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__173__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__159__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_80_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__159__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_sva_mx0w0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__159__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_1_o_mul_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__159__sel)
            ? __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__159__input_1
            : __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__159__input_0);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__159__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_mux1h_1_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__159__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__164__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_82_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__164__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva_mx0w0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__164__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_14_1_sva_mx0w0;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__164__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__164__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__164__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__164__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_mux1h_2_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__164__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__253__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__253__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__253__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_20_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__253__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__253__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__253__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__253__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_21_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__253__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__167__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_69_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__167__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_41)) 
                    | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                       >> 1U))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__167__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_50_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__167__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__167__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__167__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__167__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_51_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__167__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__180__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_112_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__180__input_1 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                    | (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_15))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__180__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_71_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__180__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__180__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__180__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__180__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_72_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__180__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__255__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__255__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__255__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_25;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__255__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__255__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__255__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__255__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__255__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__207__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__207__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_28_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__207__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__207__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__207__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__207__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__207__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_22 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__207__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__168__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__168__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__168__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_51_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__168__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__168__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__168__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__168__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_52_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__168__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__256__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__256__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_23_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__256__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_25;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__256__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__256__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__256__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__256__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__256__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__160__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__160__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_22;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__160__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_70_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__160__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__160__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__160__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__160__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__160__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__161__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__161__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_22;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__161__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_32_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__161__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__161__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__161__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__161__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__161__Vfuncout;
}

void Vsim_HLS_cdp_ocvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_1__2(Vsim_HLS_cdp_ocvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_ocvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16;
    HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__156__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__156__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__156__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__156__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__181__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__181__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__181__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__181__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__181__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__181__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__181__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__181__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__182__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__182__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__182__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__182__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__182__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__182__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__182__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__182__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__183__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__183__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__183__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__183__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__183__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__183__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__183__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__183__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__184__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__184__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__184__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__184__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__185__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__185__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__185__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__185__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__210__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__210__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__210__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__210__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__210__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__210__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__210__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__210__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__211__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__211__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__211__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__211__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__211__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__211__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__211__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__211__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__212__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__212__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__212__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__212__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__212__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__212__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__212__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__212__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__242__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__242__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__242__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__242__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__242__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__242__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__242__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__242__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__243__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__243__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__243__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__243__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__243__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__243__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__243__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__243__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__244__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__244__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__244__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__244__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__244__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__244__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__244__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__244__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__245__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__245__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__245__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__245__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__245__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__245__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__245__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__245__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__246__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__246__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__246__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__246__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__246__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__246__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__246__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__246__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__247__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__247__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__247__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__247__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__247__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__247__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__247__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__247__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__267__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__267__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__267__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__267__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__267__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__267__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__267__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__267__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__268__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__268__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__268__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__268__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__268__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__268__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__268__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__268__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__269__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__269__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__269__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__269__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__269__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__269__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__269__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__269__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__270__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__270__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__270__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__270__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__270__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__270__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__270__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__270__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__285__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__285__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__285__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__285__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__285__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__285__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__285__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__285__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__286__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__286__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__286__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__286__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__286__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__286__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__286__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__286__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__287__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__287__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__287__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__287__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__287__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__287__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__287__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__287__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT____VdfgRegularize_hcdf09104_0_0) 
              & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT____VdfgRegularize_hcdf09104_0_2)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_10 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
              & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__242__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__242__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                    | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__242__input_0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_7_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__242__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__242__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__242__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__242__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__242__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_15 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__267__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__267__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_69_nl)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__267__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__267__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__267__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__267__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__267__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_45_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__267__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__210__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__210__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse) 
                        & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_7_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__210__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_117;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__210__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__210__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__210__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__210__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_73_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__210__Vfuncout;
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_9 
        = ((2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_11 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_16 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_15));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__268__sel 
        = (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__268__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__268__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_45_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__268__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__268__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__268__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__268__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_46_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__268__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__211__sel 
        = (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__211__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_117;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__211__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_73_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__211__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__211__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__211__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__211__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_66 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__211__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_tmp_6 
        = ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_9) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__156__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1) 
            & ((2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)) 
               & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_10) 
                                           & (2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__156__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__156__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__iExpoWidth_oExpoWidth_prb 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__156__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__184__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1) 
            & ((0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)) 
               & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_10) 
                                           & (0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__184__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__184__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_nvdla_int_h_ln346_assert_oWidth_ge_aWidth_p_bWidth_1_sig_mx0w1 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__184__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_17 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1)) 
                 | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__247__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__247__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_11;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__247__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__247__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__247__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__247__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__247__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__247__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__243__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_11_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__243__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__243__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__243__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__243__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__243__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__243__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__243__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__245__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_13_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__245__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__245__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__245__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__245__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__245__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__245__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__245__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__182__sel 
        = (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__182__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__182__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__182__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__182__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__182__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__182__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_77_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__182__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_52 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_187_ssc 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
           & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2) 
              & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42) 
                 & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__185__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_16) 
            & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                 ? 2U : 1U) >> 1U)) | ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
                                       & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_15)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__185__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__185__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_nvdla_int_h_ln346_assert_oWidth_ge_aWidth_p_bWidth_2_sig_mx0w1 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__185__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__285__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__285__input_1 
        = (1U & (~ ((~ ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use) 
                        & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) 
                    & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__285__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_16;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__285__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__285__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__285__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__285__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_67_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__285__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__269__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__269__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_44_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__269__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_46_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__269__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__269__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__269__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__269__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_47_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__269__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__286__sel 
        = (2U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__286__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_tmp_6;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__286__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_9)) 
                    & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__286__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__286__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__286__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__286__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_68_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__286__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__212__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__212__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_66;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__212__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_17;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__212__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__212__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__212__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__212__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_75_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__212__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__181__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__181__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_66;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__181__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_17;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__181__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__181__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__181__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__181__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_76_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__181__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__244__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_8_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__244__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_11_nl))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__244__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__244__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__244__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__244__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__244__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__244__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__246__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1) 
           & ((2U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__246__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_11_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__246__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1) 
           & ((2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__246__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__246__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__246__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__246__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__246__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__183__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_112_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__183__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1)) 
                    | (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__183__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_77_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__183__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__183__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__183__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__183__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_78_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__183__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_and_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_33_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_173_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_39_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_and_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_52_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_183_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_57_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_and_3_cse 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_66_nl)) 
           & (IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_and_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_70_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_and_1_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_72_nl));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__270__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__270__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_43_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__270__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_47_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__270__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__270__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__270__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__270__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_48_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__270__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__287__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__287__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_68_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__287__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_tmp_6;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__287__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__287__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__287__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__287__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_69_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__287__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_and_cse 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_76_nl)) 
           & (IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_and_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_78_nl));
}

void Vsim_HLS_cdp_ocvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_2__0(Vsim_HLS_cdp_ocvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_ocvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__310__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__310__Vfuncout = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__310__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__310__vector = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__322__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__322__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__322__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__322__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__322__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__322__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__322__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__322__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__323__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__323__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__323__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__323__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__323__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__323__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__366__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__366__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__366__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__366__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__366__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__366__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__366__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__366__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__366__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__366__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__367__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__367__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__367__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__367__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__367__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__367__input_1 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__367__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__367__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__367__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__367__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__368__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__368__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__368__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__368__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__368__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__368__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__368__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__368__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__368__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__368__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__369__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__369__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__369__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__369__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__369__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__369__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__369__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__369__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__369__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__369__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__370__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__370__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__370__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__370__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__370__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__370__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__370__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__370__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__370__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__370__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__371__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__371__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__371__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__371__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__371__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__371__input_1 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__371__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__371__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__371__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__371__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__372__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__372__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__372__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__372__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__372__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__372__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__372__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__372__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__372__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__372__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__373__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__373__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__373__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__373__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__373__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__373__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__373__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__373__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__373__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__373__sel = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__374__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__374__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__374__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__374__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__375__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__375__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__375__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__375__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__375__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__375__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__375__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__375__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__376__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__376__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__376__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__376__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__376__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__376__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__376__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__376__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__377__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__377__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__377__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__377__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__377__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__377__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__377__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__377__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__378__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__378__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__378__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__378__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__378__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__378__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__379__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__379__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__379__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__379__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__379__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__379__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__379__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__379__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__380__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__380__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__380__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__380__input_2 = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__380__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__380__input_1 = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__380__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__380__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__380__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__380__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__381__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__381__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__381__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__381__vector = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__382__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__382__Vfuncout = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__382__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__382__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__383__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__383__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__383__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__383__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__383__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__383__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__383__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__383__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__384__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__384__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__384__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__384__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__384__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__384__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__384__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__384__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__385__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__385__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__385__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__385__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__385__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__385__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__386__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__386__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__386__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__386__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__386__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__386__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__392__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__392__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__392__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__392__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__392__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__392__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__392__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__392__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__394__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__394__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__394__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__394__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__394__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__394__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__394__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__394__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__401__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__401__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__401__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__401__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__401__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__401__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__401__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__401__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__402__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__402__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__402__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__402__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__402__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__402__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__402__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__402__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__410__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__410__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__410__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__410__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__410__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__410__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__410__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__410__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__415__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__415__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__415__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__415__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__415__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__415__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__415__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__415__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__424__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__424__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__424__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__424__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__424__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__424__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__424__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__424__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__425__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__425__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__425__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__425__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__425__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__425__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__425__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__425__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__429__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__429__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__429__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__429__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__429__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__429__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__429__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__429__sel = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__445__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__445__Vfuncout = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__445__arg1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__445__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__445__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__445__arg2 = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__446__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__446__Vfuncout = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__446__arg1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__446__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__446__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__446__arg2 = 0;
    SData/*10:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__447__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__447__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__447__arg1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__447__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__447__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__447__arg2 = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__448__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__448__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__448__arg1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__448__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__448__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__448__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__449__arg1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__449__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__449__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__449__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__449__sbit;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__449__sbit = 0;
    VlWide<4>/*112:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__453__Vfuncout;
    VL_ZERO_W(113, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__453__Vfuncout);
    VlWide<4>/*112:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__453__arg1;
    VL_ZERO_W(113, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__453__arg1);
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__453__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__453__arg2 = 0;
    VlWide<4>/*104:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__454__Vfuncout;
    VL_ZERO_W(105, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__454__Vfuncout);
    VlWide<4>/*104:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__454__arg1;
    VL_ZERO_W(105, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__454__arg1);
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__454__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__454__arg2 = 0;
    VlWide<4>/*104:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__455__Vfuncout;
    VL_ZERO_W(105, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__455__Vfuncout);
    VlWide<4>/*104:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__455__arg1;
    VL_ZERO_W(105, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__455__arg1);
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__455__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__455__arg2 = 0;
    SData/*10:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__456__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__456__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__456__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__456__arg2 = 0;
    SData/*10:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__457__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__457__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__457__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__457__arg2 = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_acc_itm_2 
                = (0x03ffffffU & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_25U_25U_26U_1_o_acc_itm_2);
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_bits_slc_FpMantDecShiftRight_10U_6U_10U_least_mask_10_itm_2 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva) 
                         >> 0x0aU));
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_sva_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_itm;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_0_1 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_7_1 
                = (1U & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                                 >> 7U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_mx0w0;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_0_1 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_7_1 
                = (1U & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                 >> 7U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_mx0w0;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_bits_slc_FpMantDecShiftRight_10U_6U_10U_least_mask_10_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_0_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_7_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_0_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_7_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_2 = 0U;
    }
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_56_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_2_itm_2 
                = (0x0000003fU & (~ ([&]() {
                            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__378__sel 
                                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_mx0w0;
                            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__378__input_0 
                                = (0x0000003fU & (IData)(
                                                         (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                                                          >> 1U)));
                            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__378__sel)
                                    ? 0x3fU : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__378__input_0));
                            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__378__Vfuncout 
                                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                        }(), (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__378__Vfuncout))));
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_2_itm_2 = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_42_1 
                = (1U & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                 >> 0x0000002aU)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nand_itm_2 
                = (0x00000007ffffffffULL != (0x00000007ffffffffULL 
                                             & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                                >> 7U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_42_1 
                = (1U & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                                 >> 0x0000002aU)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nand_itm_2 
                = (0x00000007ffffffffULL != (0x00000007ffffffffULL 
                                             & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                                                >> 7U)));
        }
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct_mx0c0;
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_bits_9_0_sva_2 
                = (0x000003ffU & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                  & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_or_itm_2 
                = (IData)((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva_mx0w0) 
                            >> 0x0000000aU) | (0U != 
                                               (0x000003ffU 
                                                & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                                   & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva_mx0w0))))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_21_nl)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_4 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_18_nl))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__375__sel 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_35;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__375__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_IntShiftRightSat_50U_6U_16U_oelse_IntShiftRightSat_50U_6U_16U_if_unequal_tmp;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__375__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_3;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__375__sel)
                    ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__375__input_1)
                    : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__375__input_0));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__375__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_4 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__375__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_24_nl))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__376__sel 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_35;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__376__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_IntShiftRightSat_50U_6U_16U_oelse_IntShiftRightSat_50U_6U_16U_if_unequal_tmp;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__376__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__376__sel)
                    ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__376__input_1)
                    : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__376__input_0));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__376__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__376__Vfuncout;
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_85_nl) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm 
                = (0x000003ffffffffffULL & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_mux1h_1_itm);
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_24;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_FpExpoWidthDec_6U_5U_10U_1U_1U_if_or_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_41_nl))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__377__sel 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_41;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__377__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_if_IntShiftRightSat_50U_6U_16U_if_or_1_nl;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__377__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_5;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__377__sel)
                    ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__377__input_1)
                    : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__377__input_0));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__377__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_6 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__377__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_42_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4;
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_52) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_IntShiftRightSat_50U_6U_16U_oelse_IntShiftRightSat_50U_6U_16U_if_unequal_tmp)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_itm 
                = (0x000000ffU & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_mux1h_1_itm 
                                          >> 0x2aU)));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_24) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_25)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_25)));
        }
        if ((((((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_88_nl)) 
                & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen)) 
               & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5))) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_1_itm 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_mux1h_4_itm));
        }
        if ((((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
                & (0U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5))) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
              & (~ ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                             >> 0x0000002aU)) & (0x00000007ffffffffULL 
                                                 != 
                                                 (0x00000007ffffffffULL 
                                                  & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                                     >> 7U)))))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_itm 
                = (3U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_mux1h_4_itm) 
                         >> 4U));
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
               & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U))) & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6)) 
                                         | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3))))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_48_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm_mx1w0;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_42_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nand_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_42_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nand_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt = 0ULL;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_bits_9_0_sva_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm = 0ULL;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_6 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_1_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm = 0U;
    }
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__366__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__367__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__371__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__366__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_4;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__367__input_0 
                = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__371__input_0 
                = ((0x0000000cU & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_3_1) 
                                   << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_0) 
                                               << 1U) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                                                    >> 9U))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_16 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_nl) 
                            | (~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_17 
                = (1U & (~ ((((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_sva_2 
                               == ([&]() {
                                            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__374__vector 
                                                = (0x000001ffU 
                                                   & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_1_oif_1_acc_nl));
                                            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__374__Vfuncout 
                                                = (
                                                   (0x000003fffffffe00ULL 
                                                    & ((- (QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__374__vector) 
                                                                              >> 8U))))) 
                                                       << 9U)) 
                                                   | (QData)((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__374__vector)));
                                        }(), __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__374__Vfuncout)) 
                              | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_oelse_mux_1_nl)) 
                             | (~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8))) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43))));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__366__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_0_sva;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__367__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_6_1_sva;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__371__input_1 
                = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva) 
                                  >> 1U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__366__input_2 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__367__input_2 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                                  >> 1U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__371__input_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_or_3_nl;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__366__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__366__sel));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__367__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__367__sel)))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__371__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__371__sel)))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__366__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__366__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__367__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__367__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__371__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__371__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__366__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__366__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__367__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__367__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__371__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__371__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__366__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__367__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__371__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_0 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__366__Vfuncout;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_6_1 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__367__Vfuncout;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_13_10 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__371__Vfuncout;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__368__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__368__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                         >> 6U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__368__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_7_sva;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__368__input_2 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                         >> 7U));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__368__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__368__sel));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__368__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__368__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__368__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__368__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__368__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_7 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__368__Vfuncout;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__369__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__369__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                         >> 7U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__369__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_0_sva;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__369__input_2 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                         >> 8U));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__369__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__369__sel));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__369__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__369__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__369__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__369__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__369__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_8 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__369__Vfuncout;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__370__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__370__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                         >> 8U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__370__input_1 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__370__input_2 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                         >> 9U));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__370__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__370__sel));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__370__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__370__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__370__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__370__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__370__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_9 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__370__Vfuncout;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__372__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__372__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_3_1) 
                         >> 2U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__372__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva) 
                         >> 5U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__372__input_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_or_2_itm_2;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__372__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__372__sel));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__372__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__372__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__372__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__372__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__372__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_14 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__372__Vfuncout;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__373__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__373__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_4;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__373__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_7_sva;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__373__input_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_4;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__373__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__373__sel));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__373__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__373__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__373__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__373__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__373__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_15 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__373__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_6_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_7 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_8 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_9 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_13_10 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_14 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_15 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_17 = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_137_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_42_1) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nand_itm_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_135_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_42_1) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nand_itm_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_iswt0));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_iswt0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__385__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_6;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__385__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_1_itm;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__385__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__385__input_1)
            : 0x0eU);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__385__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_mux_6_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__385__Vfuncout;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3271 = (
                                                   (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_9) 
                                                     << 9U) 
                                                    | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_8) 
                                                        << 8U) 
                                                       | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_7) 
                                                          << 7U))) 
                                                   | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_6_1) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_0)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_67_nl))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__381__vector 
                = (0x0003ffffffffffffULL & VL_MULS_QQQ(50, 
                                                       (0x0003ffffffffffffULL 
                                                        & VL_EXTENDS_QQ(50,34, 
                                                                        (0x00000003ffffffffULL 
                                                                         & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_33U_32U_34U_o_acc_nl))), 
                                                       (0x0003ffffffffffffULL 
                                                        & VL_EXTENDS_QI(50,16, (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_scale_use)))));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__381__Vfuncout 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__381__vector;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__381__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_and_1_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_3;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4 = 0U;
    }
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__454__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__454__arg1[0U] = 0U;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__454__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__454__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__454__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__454__arg1[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__454__arg1[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__454__arg1[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__454__arg1[3U];
    VL_SHIFTRS_WWI(105,105,6, __Vtemp_2, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__454__arg2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x000001ffU & __Vtemp_2[3U]);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__454__Vfuncout[0U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__454__Vfuncout[1U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__454__Vfuncout[2U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__454__Vfuncout[3U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__454__Vfuncout[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__454__Vfuncout[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__454__Vfuncout[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__454__Vfuncout[3U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__445__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_and_1_cse) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__382__vector 
                = (0x000003ffffffffffULL & VL_MULS_QQQ(42, 
                                                       (0x000003ffffffffffULL 
                                                        & VL_EXTENDS_QI(42,26, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_o_acc_itm_2)), 
                                                       (0x000003ffffffffffULL 
                                                        & VL_EXTENDS_QI(42,16, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_mul_in_1_sva_3)))));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__382__Vfuncout 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__382__vector;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__382__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2 = 0ULL;
    }
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__445__arg1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__445__arg1;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x000003ffffffffffULL & VL_SHIFTRS_QQI(42,42,6, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__445__arg2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__445__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__445__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__455__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__455__arg1[0U] = 0U;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__455__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__455__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__455__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__455__arg1[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__455__arg1[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__455__arg1[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__455__arg1[3U];
    VL_SHIFTRS_WWI(105,105,6, __Vtemp_4, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__455__arg2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_4[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x000001ffU & __Vtemp_4[3U]);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__455__Vfuncout[0U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__455__Vfuncout[1U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__455__Vfuncout[2U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__455__Vfuncout[3U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__455__Vfuncout[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__455__Vfuncout[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__455__Vfuncout[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__455__Vfuncout[3U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_7_sva 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_7_1) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_137_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_2))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_0_sva 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_0_1) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_2))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_137_cse))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_183_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2 
                = (0U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_sva_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_itm;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_62_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_4 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3_mx0c1)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_FpExpoWidthDec_6U_5U_10U_1U_1U_if_or_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_60_nl))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__379__sel 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_40;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__379__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_16_1;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__379__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_3;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__379__sel)
                    ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__379__input_1)
                    : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__379__input_0));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__379__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_4 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__379__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_187_ssc) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_3_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_itm;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm) 
                         >> 0x0aU));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_64_nl)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_or_2_itm_2 
                = (1U & (((((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1) 
                                >> 0x0eU)) & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4)) 
                           & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4))) 
                          | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_5))) 
                         | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)));
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_209_cse) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__380__sel 
                = ((4U & ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_86_tmp) 
                              | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_84_tmp))) 
                          << 2U)) | ((((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_84_tmp)) 
                                       & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_86_tmp)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_84_tmp)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__380__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__380__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__380__input_2 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__380__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__380__sel)))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__380__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__380__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__380__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__380__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__380__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__380__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_69_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_3 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_shifter_use;
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_o_acc_itm_2 
                = (0x03ffffffU & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_25U_25U_26U_o_acc_itm_2);
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_mul_in_1_sva_3 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_scale_use;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_3_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_or_2_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_o_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_mul_in_1_sva_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__351__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_137_cse;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__351__input_0 
                        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_itm) 
                            << 4U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_1_itm));
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__351__sel)
                            ? 0x3fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__351__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__351__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__351__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_7_sva 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_7_1) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_135_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_2))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_0_sva 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_0_1) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_2))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_135_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_6_1_sva 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__350__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_135_cse;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__350__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_2_itm_2;
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__350__sel)
                            ? 0x3fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__350__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__350__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__350__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__386__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_5;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__386__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_mux_6_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__386__sel)
            ? 0x0fU : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__386__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__386__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_or_3_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__386__Vfuncout;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3272 = (
                                                   ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_14) 
                                                    << 0x0000000eU) 
                                                   | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_13_10) 
                                                       << 0x0000000aU) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3271)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__446__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__446__arg1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__446__arg1;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x000003ffffffffffULL & VL_SHIFTRS_QQI(42,42,6, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__446__arg2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__446__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__446__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[3U] 
                                           >> 8U)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[3U] 
                                           >> 8U)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_1_oif_1_acc_nl 
        = (0x000003ffU & ((IData)(0x01ffU) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__393__vector 
                            = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_7_sva) 
                                << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_0_sva)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__393__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__393__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__393__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__393__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_1_oif_acc_nl 
        = (0x000003ffU & ((IData)(1U) + VL_EXTEND_II(10,9, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__347__vector 
                            = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_7_sva) 
                                << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_0_sva)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__347__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__347__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__347__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__347__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_oif_1_acc_nl 
        = (0x000003ffU & ((IData)(0x01ffU) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__387__vector 
                            = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_7_sva) 
                                << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_6_1_sva) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_0_sva)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__387__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__387__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__387__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__387__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_oif_acc_nl 
        = (0x000003ffU & ((IData)(1U) + VL_EXTEND_II(10,9, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__388__vector 
                            = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_7_sva) 
                                << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_6_1_sva) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_0_sva)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__388__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__388__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__388__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__388__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_69_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3)) 
                 | (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6))));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_3 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_mx0w0;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_3 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_mx0w0;
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_and_3_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_16_1 
                = (1U & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_5 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_nor_itm_2) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_IsNaN_6U_10U_nand_itm_2))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_3;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_3;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1 
                = (0x00007fffU & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1);
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_173_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_52) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_itm 
                = (7U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_mux1h_2_itm) 
                         >> 0x0bU));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_70_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (((((~ (((((((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4) 
                            >> 1U)) | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4))) 
                       | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3)) 
                      | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_3)) 
                   | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_39)))) 
               | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_52)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm 
                = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_mux1h_2_itm));
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_16_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_5 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
        = (0x00000fffffffffffULL & (VL_EXTEND_QQ(44,43, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__352__vector 
                            = (0x000003ffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__352__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__352__vector 
                                                            >> 0x29U))))) 
                                << 0x0000002aU) | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__352__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__352__Vfuncout)) 
                                    + VL_EXTEND_QQ(44,43, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__353__vector 
                            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__353__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__353__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__353__Vfuncout))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__448__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_3;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__448__arg1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__448__arg1;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x0003ffffffffffffULL & VL_SHIFTRS_QQI(50,50,6, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__448__arg2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__448__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_sva_mx0w0 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__448__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__453__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_3;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__453__arg1[0U] = 0U;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__453__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__453__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__453__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__453__arg1[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__453__arg1[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__453__arg1[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__453__arg1[3U];
    VL_SHIFTRS_WWI(113,113,6, __Vtemp_6, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__453__arg2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_6[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x0001ffffU & __Vtemp_6[3U]);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__453__Vfuncout[0U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__453__Vfuncout[1U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__453__Vfuncout[2U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__453__Vfuncout[3U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__453__Vfuncout[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__453__Vfuncout[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__453__Vfuncout[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__453__Vfuncout[3U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
        = (0x00000fffffffffffULL & (VL_EXTEND_QQ(44,43, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__354__vector 
                            = (0x000003ffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__354__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__354__vector 
                                                            >> 0x29U))))) 
                                << 0x0000002aU) | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__354__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__354__Vfuncout)) 
                                    + VL_EXTEND_QQ(44,43, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__355__vector 
                            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__355__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__355__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__355__Vfuncout))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__310__vector 
        = (0x000003ffffffffffULL & VL_MULS_QQQ(42, 
                                               (0x000003ffffffffffULL 
                                                & VL_EXTENDS_QI(42,26, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_acc_itm_2)), 
                                               (0x000003ffffffffffULL 
                                                & VL_EXTENDS_QI(42,16, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_mul_in_1_sva_3)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__310__Vfuncout 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__310__vector;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_1_o_mul_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__310__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm_mx1w0 
        = ((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_sva_2 
            == ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__348__vector 
                        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_1_oif_acc_nl));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__348__Vfuncout 
                        = ((0x000003fffffffe00ULL & 
                            ((- (QData)((IData)((1U 
                                                 & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__348__vector) 
                                                    >> 8U))))) 
                             << 9U)) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__348__vector)));
                }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__348__Vfuncout)) 
           | (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_sva_2 
              == ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__349__vector 
                        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_7_sva) 
                            << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_0_sva)));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__349__Vfuncout 
                        = ((0x000003ffffffff00ULL & 
                            ((- (QData)((IData)((1U 
                                                 & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__349__vector) 
                                                    >> 7U))))) 
                             << 8U)) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__349__vector)));
                }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__349__Vfuncout)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_if_IntShiftRightSat_42U_6U_8U_if_or_1_nl 
        = (((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_sva_2 
             == ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__389__vector 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_oif_1_acc_nl));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__389__Vfuncout 
                            = ((0x000003fffffffe00ULL 
                                & ((- (QData)((IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__389__vector) 
                                                          >> 8U))))) 
                                   << 9U)) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__389__vector)));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__389__Vfuncout)) 
            | (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_sva_2 
               == ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__390__vector 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_oif_acc_nl));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__390__Vfuncout 
                            = ((0x000003fffffffe00ULL 
                                & ((- (QData)((IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__390__vector) 
                                                          >> 8U))))) 
                                   << 9U)) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__390__vector)));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__390__Vfuncout))) 
           | (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_sva_2 
              == ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__391__vector 
                        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_7_sva) 
                            << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_6_1_sva) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_0_sva)));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__391__Vfuncout 
                        = ((0x000003ffffffff00ULL & 
                            ((- (QData)((IData)((1U 
                                                 & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__391__vector) 
                                                    >> 7U))))) 
                             << 8U)) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__391__vector)));
                }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__391__Vfuncout)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_91_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3)) 
                 | (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_mx0w0 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                             >> 0x0000002aU)) | (0ULL 
                                                 == 
                                                 (0x00000007ffffffffULL 
                                                  & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                                     >> 7U))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp 
        = ((0x00000007ffffffffULL != (0x00000007ffffffffULL 
                                      & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                         >> 7U))) & (IData)(
                                                            (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                                             >> 0x0000002aU)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[3U] 
                                           >> 0x00000010U)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_mx0w0 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                             >> 0x0000002aU)) | (0ULL 
                                                 == 
                                                 (0x00000007ffffffffULL 
                                                  & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                                                     >> 7U))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_209_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42) 
           | (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_14 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_5)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_13 
        = (1U & (((0x00000007ffffffffULL != (0x00000007ffffffffULL 
                                             & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                                                >> 7U))) 
                  & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                             >> 0x0000002aU))) | ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                                                  | (0U 
                                                     != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)))));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_5 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                 | (2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_29 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_11 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_57 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                    & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_nor_itm_2 
                = (0U == (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_IsNaN_6U_10U_nand_itm_2 
                = (0x3fU != (0x0000003fU & (IData)(
                                                   (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
                                                    >> 0x0aU))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_8_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                = (0x0001ffffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt));
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_nor_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_IsNaN_6U_10U_nand_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_50U_6U_16U_oif_1_acc_nl 
        = (0x0003ffffU & ((IData)(0x0001ffffU) + VL_EXTEND_II(18,17, 
                                                              ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__411__vector 
                            = ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_3) 
                                 << 0x0000000fU) | 
                                ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_itm) 
                                 << 0x0000000cU)) | 
                               (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm) 
                                 << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_3)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__411__Vfuncout 
                            = ((0x00010000U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__411__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__411__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__411__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_50U_6U_16U_oif_acc_nl 
        = (0x0003ffffU & ((IData)(1U) + VL_EXTEND_II(18,17, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__412__vector 
                            = ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_3) 
                                 << 0x0000000fU) | 
                                ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_itm) 
                                 << 0x0000000cU)) | 
                               (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm) 
                                 << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_3)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__412__Vfuncout 
                            = ((0x00010000U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__412__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__412__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__412__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva 
        = (0x00000fffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm_2) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__358__vector 
                            = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_or_itm_2) 
                               & ((0U != (0x000003ffU 
                                          & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1) 
                                             & ((IData)(0x03ffU) 
                                                + (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm))))) 
                                  | ((1U & (((IData)(0x07ffU) 
                                             + (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm)) 
                                            >> 0x0000000aU)) 
                                     | ((0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_bits_9_0_sva_2)) 
                                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_bits_slc_FpMantDecShiftRight_10U_6U_10U_least_mask_10_itm_2)))));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__358__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__358__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__358__Vfuncout)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_10_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_3 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_12_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_75_itm)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_15_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_89_rgt))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_75_itm)))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__383__sel 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_89_rgt;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__383__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__383__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__383__sel)
                    ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__383__input_1)
                    : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__383__input_0));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__383__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_3 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__383__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
                   & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
                  & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1))) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_92_rgt))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_75_itm)))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__384__sel 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_92_rgt;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__384__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__384__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__384__sel)
                    ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__384__input_1)
                    : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__384__input_0));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__384__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_3 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__384__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__324__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_mx0w0;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__324__input_0 
                        = (0x0000003fU & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                                  >> 1U)));
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__324__sel)
                            ? 0x3fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__324__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__324__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__324__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_164 
        = (IData)((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                    >> 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
        = (0x000fffffffffffffULL & (VL_EXTEND_QQ(52,51, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__356__vector 
                            = (0x0003ffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__356__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__356__vector 
                                                            >> 0x31U))))) 
                                << 0x00000032U) | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__356__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__356__Vfuncout)) 
                                    + VL_EXTEND_QQ(52,51, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__357__vector 
                            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__357__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__357__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__357__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_26 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_209_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_94 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_57) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_if_IntShiftRightSat_50U_6U_16U_if_or_1_nl 
        = (1U & (((((QData)((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_itm)) 
                    << 0x0000002aU) | vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm) 
                  == ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__413__vector 
                            = (0x0001ffffU & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_50U_6U_16U_oif_1_acc_nl);
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__413__Vfuncout 
                            = ((0x0003fffffffe0000ULL 
                                & ((- (QData)((IData)(
                                                      (1U 
                                                       & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__413__vector 
                                                          >> 0x10U))))) 
                                   << 0x00000011U)) 
                               | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__413__vector)));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__413__Vfuncout)) 
                 | (~ (((((QData)((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_itm)) 
                          << 0x0000002aU) | vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm) 
                        != ([&]() {
                                vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__414__vector 
                                    = (0x0001ffffU 
                                       & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_50U_6U_16U_oif_acc_nl);
                                vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__414__Vfuncout 
                                    = ((0x0003fffffffe0000ULL 
                                        & ((- (QData)((IData)(
                                                              (1U 
                                                               & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__414__vector 
                                                                  >> 0x10U))))) 
                                           << 0x00000011U)) 
                                       | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__414__vector)));
                            }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__414__Vfuncout)) 
                       & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_4)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__429__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__429__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__429__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__429__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__429__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__429__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__429__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__429__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__322__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__322__input_1 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1) 
                          >> 0x0aU));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__322__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva) 
                 >> 0x0000000aU));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__322__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__322__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__322__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__322__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_6_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__322__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__392__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__392__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_6;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__392__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_if_IntShiftRightSat_42U_6U_8U_if_or_1_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__392__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__392__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__392__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__392__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__392__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__394__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__394__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__394__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm_mx1w0;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__394__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__394__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__394__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__394__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_oelse_mux_1_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__394__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__402__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__402__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__402__input_0 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
            >> 1U) & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4) 
                      & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_4)) 
                         & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__402__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__402__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__402__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__402__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__402__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__415__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__415__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__415__input_0 
        = (1U & (~ ((2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__415__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__415__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__415__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__415__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_40_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__415__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__424__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__424__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp)) 
                    | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                       >> 1U))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__424__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_164;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__424__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__424__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__424__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__424__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_87_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__424__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_unfl_sva 
        = ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
                    >> 0x00000032U)) & (0x00000007ffffffffULL 
                                        != (0x00000007ffffffffULL 
                                            & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
                                               >> 0x0000000fU))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
                             >> 0x00000032U)) | (0ULL 
                                                 == 
                                                 (0x00000007ffffffffULL 
                                                  & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
                                                     >> 0x0000000fU))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_39 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_IsNaN_6U_10U_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_nor_itm_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s 
        = ((0x0000003eU & (((IData)(9U) + (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                              >> 0x0000000bU))) 
                           << 1U)) | (1U & (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                               >> 0x0000000aU))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg_s 
        = (0x000000ffU & ((IData)(0x7fU) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__306__vector 
                            = ((0x0000003eU & (((IData)(9U) 
                                                + (~ 
                                                   (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                                    >> 0x0000000bU))) 
                                               << 1U)) 
                               | (1U & (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                           >> 0x0aU))));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__306__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__306__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__306__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__430__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4)));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__430__input_1 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_nl;
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__430__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__430__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__430__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__430__Vfuncout))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__323__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__323__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_6_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__323__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__323__input_1)
            : 0U);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__323__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_FpExpoWidthDec_6U_5U_10U_1U_1U_else_and_2_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__323__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_112_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)) 
                 | (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4))));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_2 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)) 
                 | (2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_146_nl 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4) 
            >> 1U) & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_7_cse 
        = (1U & ((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__425__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42) 
           | (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_14));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__425__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_164;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__425__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_87_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__425__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__425__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__425__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__425__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_88_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__425__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_mx0w0 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
                                 >> 0x0000000fU)) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_unfl_sva))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_ovfl_sva))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_mx0w0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_ovfl_sva) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_unfl_sva))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22) 
                      | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) 
                     | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1))) 
                   | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U))))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22) 
                       | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) 
                      | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))) 
                     | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1)) 
                   | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U))))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_2_nl 
        = (0x00003fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__345__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__345__input_0 
                        = (0x00003fffU & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__345__sel)
                            ? 0x3fffU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__345__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__345__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__345__Vfuncout))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__447__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__447__arg1 
        = (0x00000400U | (0x000003ffU & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = ((0x0800U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t)) 
           | (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__447__arg1));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x00000fffU & VL_SHIFTRS_III(12,12,6, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t), (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__447__arg2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__447__Vfuncout 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__447__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__456__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__457__arg2 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__456__arg2;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = (1U | (0x07fcU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000007ffU & VL_SHIFTL_III(11,11,6, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t), (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__457__arg2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__457__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__456__Vfuncout 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__457__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__456__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__449__sbit = 0U;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__449__arg2 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg_s));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__449__arg1 = 1U;
    if ((0x00000040U & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__449__arg2))) {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__449__sbit) 
                << 1U) | (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__449__arg1));
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__450__sbit 
            = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__449__sbit;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__450__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__449__arg2)));
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__450__arg1 
            = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                     >> 1U));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x000007ffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__450__sbit))));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x07feU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t)) 
               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__450__arg1));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x000007ffU & VL_SHIFTRS_III(11,11,7, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__450__arg2)));
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__450__Vfuncout 
            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__449__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__450__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__451__sbit 
            = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__449__sbit;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__451__arg2 
            = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__449__arg2;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__451__arg1 
            = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__449__arg1;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__452__sbit 
            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__451__sbit;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__452__arg2 
            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__451__arg2;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__452__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__451__sbit) 
                << 1U) | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__451__arg1));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x000007ffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__452__sbit))));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x07fcU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t)) 
               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__452__arg1));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x000007ffU & VL_SHIFTL_III(11,11,7, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__452__arg2)));
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__452__Vfuncout 
            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__451__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__452__Vfuncout;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__449__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__451__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva_mx0w0 
        = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__449__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__431__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_5;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__431__input_1 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl;
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__431__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__431__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__431__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__431__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_8_nl 
        = (1U & ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_2) 
                 | ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__401__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__401__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__401__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_146_nl) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__401__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__401__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__401__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__401__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__401__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_14_1_sva_mx0w0 
        = (0x00003fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__346__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__346__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__346__sel)
                            ? 0x3fffU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__346__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__346__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__346__Vfuncout))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var = 1U;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_IntShiftRightSat_50U_6U_16U_oelse_IntShiftRightSat_50U_6U_16U_if_unequal_tmp 
        = (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_sva_mx0w0 
           != ([&]() {
                vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__344__vector 
                    = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_mx0w0) 
                        << 0x0000000fU) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_14_1_sva_mx0w0) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_mx0w0)));
                vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__344__Vfuncout 
                    = ((0x0003ffffffff0000ULL & ((- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__344__vector) 
                                                                        >> 0x0fU))))) 
                                                 << 0x00000010U)) 
                       | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__344__vector)));
            }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__344__Vfuncout));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__410__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__410__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_IntShiftRightSat_50U_6U_16U_oelse_IntShiftRightSat_50U_6U_16U_if_unequal_tmp;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__410__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4) 
                    >> 1U)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__410__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__410__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__410__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__410__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_85_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__410__Vfuncout;
}

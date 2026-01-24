// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_HLS_cdp_icvt___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_0__0(Vsim_HLS_cdp_icvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_icvt___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.nvdla_core_clk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_slcg_core__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
}

void Vsim_HLS_cdp_icvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_0__0(Vsim_HLS_cdp_icvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_icvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*55:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__1__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__1__Vfuncout = 0;
    QData/*54:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__1__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__1__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__3__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__3__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__3__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__3__vector = 0;
    QData/*63:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__4__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__4__Vfuncout = 0;
    QData/*62:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__4__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__4__vector = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__input_1 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__17__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__17__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__17__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__17__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__17__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__17__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__21__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__21__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__21__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__21__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__21__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__21__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__40__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__40__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__40__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__40__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__40__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__40__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__40__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__40__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__40__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__40__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__41__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__41__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__41__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__41__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__41__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__41__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__41__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__41__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__41__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__41__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__42__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__42__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__42__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__42__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__42__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__42__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__42__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__42__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__42__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__42__sel = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__43__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__43__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__43__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__43__input_2 = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__43__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__43__input_1 = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__43__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__43__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__43__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__43__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__44__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__44__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__44__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__44__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__44__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__44__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__44__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__44__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__44__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__44__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__45__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__45__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__45__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__45__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__45__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__45__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__45__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__45__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__45__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__45__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__46__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__46__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__46__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__46__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__46__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__46__input_1 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__46__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__46__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__46__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__46__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__47__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__47__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__47__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__47__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__47__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__47__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__47__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__47__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__47__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__47__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__48__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__48__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__48__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__48__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__48__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__48__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__48__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__48__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__48__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__48__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__sbit;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__sbit = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__arg2 = 0;
    QData/*55:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__71__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__71__Vfuncout = 0;
    QData/*55:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__71__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__71__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__71__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__71__arg2 = 0;
    QData/*63:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__72__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__72__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__72__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__72__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__72__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__72__arg2 = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_38_nl))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_acc_itm_2 
                = (0x000001ffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_1);
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_9_nl))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mul_itm_2 
                = (0x00ffffffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_z_out));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct_mx0c0;
        }
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_18) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_19)))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_19)));
        }
        if (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_18;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_itm 
                = (0x0000007fU & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_mux1h_1_itm 
                                  >> 0x0aU));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_48_nl) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_50)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_itm 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_1_itm;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_50) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_itm 
                = (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_17U_16U_33U_o_mux1h_1_itm 
                   >> 0x18U);
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3) 
               | (0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3))) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_50)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_1_itm 
                = (0x00ffffffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_17U_16U_33U_o_mux1h_1_itm);
        }
        if (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_and_cse) {
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__46__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__46__input_0 
                = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva) 
                                  >> 9U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__46__input_1 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_if_ac_int_cctor_16_10_sva));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__46__input_2 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_2_itm;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__46__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__46__sel)))));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__46__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__46__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__46__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__46__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__46__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_13_10 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__46__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__43__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__43__input_0 
                = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__43__input_1 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_IntShiftRight_25U_5U_9U_obits_fixed_nor_nl;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__43__input_2 
                = (0x0000007fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp_1) 
                                  >> 1U));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__43__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__43__sel)))));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__43__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__43__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__43__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__43__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__43__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_7_1 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__43__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__40__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__40__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva) 
                         >> 0x0dU));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__40__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_if_ac_int_cctor_16_10_sva) 
                         >> 4U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__40__input_2 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_6_0_1;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__40__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__40__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__40__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__40__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__40__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__40__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__40__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_14 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__40__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__41__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__41__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva) 
                         >> 0x0eU));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__41__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_if_ac_int_cctor_16_10_sva) 
                         >> 5U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__41__input_2 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_6_1_1;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__41__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__41__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__41__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__41__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__41__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__41__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__41__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_15 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__41__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__42__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__42__input_0 
                = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva) 
                                | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva))) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva))));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__42__input_1 
                = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_ovfl_sva) 
                                | vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva)) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_unfl_sva))));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__42__input_2 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp_1));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__42__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__42__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__42__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__42__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__42__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__42__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__42__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_0 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__42__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__44__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__44__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva) 
                         >> 7U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__44__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                         >> 0x00000019U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__44__input_2 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp_1) 
                         >> 8U));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__44__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__44__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__44__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__44__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__44__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__44__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__44__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_8 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__44__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__45__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__45__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva) 
                         >> 8U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__45__input_1 
                = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_ovfl_sva) 
                                | vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva)) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_and_unfl_sva))));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__45__input_2 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__45__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__45__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__45__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__45__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__45__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__45__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__45__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_9 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__45__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__47__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__47__input_0 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_IntShiftRight_33U_5U_17U_obits_fixed_nor_2_seb_sva;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__47__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_if_ac_int_cctor_16_10_sva) 
                         >> 6U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__47__input_2 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_4;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__47__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__47__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__47__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__47__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__47__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__47__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__47__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_16 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__47__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__48__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__48__input_0 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_IntShiftRight_33U_5U_17U_obits_fixed_nor_2_seb_sva;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__48__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                         >> 0x00000019U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__48__input_2 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_4;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__48__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__48__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__48__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__48__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__48__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__48__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__48__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_17 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__48__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_36_nl))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_mul_in_1_sva_2 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_scale_use;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen)) 
              & (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_1_itm 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_truncate_mux1h_3_itm) 
                         >> 4U));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_50) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_2_itm 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_3_itm;
        }
        if (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp_1 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_2_itm;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_6_0_1 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_5_0_1;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_6_1_1 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_5_1_1;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_4 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_3;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_1_itm;
        }
        if (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_137_cse) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
        }
        if (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_144_cse) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_3_itm 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_truncate_mux1h_3_itm));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_2_itm 
                = (0x000001ffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_mux1h_1_itm);
        }
        if (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_and_2_cse) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_5_0_1 
                = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)) 
                   | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_5_1_1 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                         >> 0x0eU));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_3 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                         >> 0x0fU));
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen)) 
              & (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_1_itm 
                = (1U & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_mux1h_1_itm 
                         >> 9U));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_4_nl))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mul_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_1_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_13_10 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_7_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_14 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_15 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_8 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_9 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_17 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_mul_in_1_sva_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_1_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_2_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_6_0_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_6_1_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_3_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_2_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_5_0_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_5_1_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_1_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__1__vector 
        = ((QData)((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mul_itm_2)) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__1__Vfuncout 
        = (((QData)((IData)((1U & (IData)((__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__1__vector 
                                           >> 0x36U))))) 
            << 0x00000037U) | __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__1__vector);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg_a 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__1__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_iswt0));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_iswt0));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3266 = (
                                                   ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_8) 
                                                    << 8U) 
                                                   | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_7_1) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_0)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__d 
        = ((((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_17) 
               << 3U) | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_16) 
                         << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_15) 
                                     << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_14))) 
            << 0x0000000eU) | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_13_10) 
                                << 0x0000000aU) | (
                                                   ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_9) 
                                                    << 9U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3266))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__s 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_2_itm));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__sel 
        = ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
              ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_itm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__3__vector 
        = (1U & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_1_itm 
                 >> 0x17U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__3__Vfuncout 
        = (0x000000ffU & (- (IData)((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__3__vector))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__input_0 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__3__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_mux_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__71__arg2 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__71__arg1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg_a;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__71__arg1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x00ffffffffffffffULL & VL_SHIFTRS_QQI(56,56,5, vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__71__arg2)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__71__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__71__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__nan_preproc_pd0;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__4__vector 
        = ((QData)((IData)((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_mux_nl) 
                             << 0x00000018U) | vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_1_itm))) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__4__Vfuncout 
        = (((QData)((IData)((1U & (IData)((__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__4__vector 
                                           >> 0x3eU))))) 
            << 0x0000003fU) | __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__4__vector);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg_a 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__4__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_nl 
        = (IData)(((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva 
                    >> 0x0000001eU) & (0x0080000000000000ULL 
                                       != (0x008000003fffffffULL 
                                           & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntSubExt_8U_8U_9U_1_o_acc_nl 
        = (0x000003ffU & (VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__19__vector 
                            = (0x000000ffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                              >> 8U));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__19__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__19__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__19__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__19__Vfuncout))) 
                          - VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__20__vector 
                            = (0x000000ffU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_offset_use));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__20__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__20__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__20__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__20__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm 
        = (IData)(((0U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm 
        = (1U & (~ (IData)((0x7c00U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__72__arg2 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__72__arg1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg_a;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__72__arg1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result 
        = VL_SHIFTRS_QQI(64,64,5, vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__72__arg2));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__72__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__72__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__input_1 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__input_0 
        = (2U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_48_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__sel 
        = (1U & ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__input_1 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_itm) 
            << 0x0000000aU) | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_1_itm) 
                                << 9U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_2_itm)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__input_0 
        = ((0x0001fe00U & ((- (IData)((1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_acc_itm_2) 
                                             >> 8U)))) 
                           << 9U)) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_acc_itm_2));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__sel)
            ? __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__input_1
            : __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__input_0);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mux_2_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__Vfuncout;
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_5 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)));
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_2 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                 | (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3))));
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_4 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3) 
                    >> 1U)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
        = (0x07ffffffU & (VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__27__vector 
                            = (0x01ffffffU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva 
                                                      >> 0x1fU)));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__27__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__27__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__27__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__27__Vfuncout)) 
                          + VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__28__vector 
                            = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__28__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__28__vector;
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__28__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_nor_cse 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_7 
        = (IData)((0ULL != (0x000000003fffffffULL & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_z_out 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_mul_in_1_sva_2))), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mux_2_nl))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_unfl_sva 
        = ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
            >> 0x00000019U) & (0x0001ffffU != (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                                                  >> 8U))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                     >> 0x00000019U) | (0U == (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                                                  >> 8U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc 
        = ((0U == (3U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
        = (0x07ffffffU & (VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__31__vector 
                            = (0x01ffffffU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                                      >> 0x1fU)));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__31__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__31__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__31__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__31__Vfuncout)) 
                          + VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__32__vector 
                            = (1U & ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                              >> 0x0000001eU)) 
                                     & ((~ (IData)(
                                                   (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                                    >> 0x00000037U))) 
                                        | (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_7))));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__32__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__32__vector;
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__32__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
        = (0x00000007ffffffffULL & (VL_EXTEND_QQ(35,34, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__33__vector 
                            = (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                               >> 0x1fU);
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__33__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__33__vector 
                                                            >> 0x20U))))) 
                                << 0x00000021U) | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__33__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__33__Vfuncout)) 
                                    + VL_EXTEND_QQ(35,34, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__34__vector 
                            = (1U & ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                              >> 0x0000001eU)) 
                                     & ((~ (IData)(
                                                   (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                                    >> 0x0000003fU))) 
                                        | (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_7))));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__34__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__34__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__34__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_2_nl 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__49__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__49__input_0 
                        = (0x0000007fU & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                                          >> 1U));
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__49__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__49__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__49__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__49__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3) 
             << 3U) | (((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3)) 
                        & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                       << 2U)) | ((((IData)((((0U == 
                                               (0x0300U 
                                                & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                                              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3))) 
                                             & ((0U 
                                                 != 
                                                 (0x00c0U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                                                | (0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                       >> 4U)))))) 
                                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)) 
                                   << 1U) | (1U & (~ 
                                                   (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                     >> 9U) 
                                                    | ((1U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                            >> 7U))) 
                                                       | (((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                             >> 5U) 
                                                            | (1U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                                   >> 3U)))) 
                                                           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                                                          | ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                               >> 1U) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3)) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)))))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_and_unfl_sva 
        = ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
            >> 0x00000019U) & (0x0001ffffU != (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                                                  >> 8U))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                     >> 0x00000019U) | (0U == (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                                                  >> 8U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva 
        = ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                    >> 0x00000021U)) & (0x0001ffffU 
                                        != (0x0001ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                                       >> 0x00000010U)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                             >> 0x00000021U)) | (0U 
                                                 == 
                                                 (0x0001ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                                             >> 0x00000010U)))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_IntShiftRight_25U_5U_9U_obits_fixed_nor_nl 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__50__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__50__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__50__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__50__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__50__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__50__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__input_1 
        = (1U & (((IData)(0x11U) + (0x00000010U | (0x0000000fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))))) 
                 >> 4U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__input_0 
        = (1U & (~ ((~ (IData)((0U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))))) 
                    | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                       >> 0x0000000eU))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_nor_cse) 
            << 2U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm) 
                       << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__input_2 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__sel)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s 
        = (0x0000003fU & ((IData)(1U) + VL_EXTEND_II(6,5, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__0__vector 
                            = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn;
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__0__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__0__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__0__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_2_nl 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__29__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__29__input_0 
                        = (0x0000007fU & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                                          >> 1U));
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__29__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__29__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__29__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__29__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_IntShiftRight_33U_5U_17U_obits_fixed_nor_2_seb_sva 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                 >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__35__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__35__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__35__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__35__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__35__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__35__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__17__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__17__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__17__sel)
            ? 0x0fU : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__17__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__17__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_3_FpExpoWidthInc_5U_6U_10U_1U_1U_if_3_or_1_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__17__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__sbit 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                 >> 8U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__arg1 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__arg2 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__arg1 
        = (((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__sbit) 
            << 9U) | (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__arg1));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__arg1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000003ffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                          << (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__arg2)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__Vfuncout 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_if_ac_int_cctor_16_10_sva 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__30__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__30__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__30__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__30__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__30__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__30__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__36__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__36__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__36__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__36__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__36__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__36__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__21__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__21__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__21__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__21__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__21__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__21__Vfuncout;
}

void Vsim_HLS_cdp_icvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_0__1(Vsim_HLS_cdp_icvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_icvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__63__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__63__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__63__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__63__vector = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__sel = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__65__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__65__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__65__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__65__vector = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__68__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__68__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__68__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__68__vector = 0;
    // Body
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_and_tmp 
        = (1U & ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U) & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_and_tmp;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__input_1 
        = (0x0000ffffU & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_offset_use)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__65__vector 
        = (0x000000ffU & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_offset_use)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__65__Vfuncout 
        = ((0x0000ff00U & ((- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__65__vector) 
                                             >> 7U)))) 
                           << 8U)) | (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__65__vector));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__input_0 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__65__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_5_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_and_tmp;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__input_1 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                          >> 8U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__63__vector 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                 >> 7U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__63__Vfuncout 
        = (0x000000ffU & (- (IData)((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__63__vector))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__input_0 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__63__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_4_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__66__vector 
                            = (1U | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_4_nl) 
                                      << 9U) | (0x000001feU 
                                                & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                   << 1U))));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__66__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__66__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__66__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__66__Vfuncout)) 
                          + VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__67__vector 
                            = (1U | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_5_nl) 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__67__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__67__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__67__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__67__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__68__vector 
        = (0x0003ffffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_acc_nl);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__Vstatic__tmp 
        = (0x0003ffffU & VL_SHIFTR_III(18,18,32, __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__68__vector, 1U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__68__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_1 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__68__Vfuncout;
}

void Vsim_HLS_cdp_icvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_0__1(Vsim_HLS_cdp_icvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_icvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_6;
    HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_6 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__5__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__5__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__5__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__5__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__6__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__6__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__6__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__6__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__6__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__6__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__6__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__6__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__7__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__7__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__7__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__7__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__7__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__7__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__7__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__8__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__8__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__8__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__8__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__8__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__8__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__8__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__8__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__9__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__9__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__9__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__9__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__9__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__9__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__9__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__9__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__10__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__10__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__10__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__10__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__10__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__10__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__10__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__10__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__11__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__11__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__11__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__11__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__11__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__11__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__11__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__11__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__12__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__12__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__12__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__12__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__12__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__12__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__12__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__12__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__13__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__13__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__13__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__13__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__13__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__13__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__13__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__13__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__14__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__14__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__14__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__14__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__14__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__14__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__14__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__14__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__15__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__15__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__15__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__15__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__15__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__15__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__15__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__15__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__18__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__18__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__18__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__18__input_0 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__18__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__18__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__18__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__18__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__22__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__22__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__22__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__22__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__22__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__22__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__22__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__22__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__23__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__23__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__23__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__23__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__23__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__23__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__23__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__23__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__24__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__24__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__24__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__24__input_2 = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__24__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__24__input_1 = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__24__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__24__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__24__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__24__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__25__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__25__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__25__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__25__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__26__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__26__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__26__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__26__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__37__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__37__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__37__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__37__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__37__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__37__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__37__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__37__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__38__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__38__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__38__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__38__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__38__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__38__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__38__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__38__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__39__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__39__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__39__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__39__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__39__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__39__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__39__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__39__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__51__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__51__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__51__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__51__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__51__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__51__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__51__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__51__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__53__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__53__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__53__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__53__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__53__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__53__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__53__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__53__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__55__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__55__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__55__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__55__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__55__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__55__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__55__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__55__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__56__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__56__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__56__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__56__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__56__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__56__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__56__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__56__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__57__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__57__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__57__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__57__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__57__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__57__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__57__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__57__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__58__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__58__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__58__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__58__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__58__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__58__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__58__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__58__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__59__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__59__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__59__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__59__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__59__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__59__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__59__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__59__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__60__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__60__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__60__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__60__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__60__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__60__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__60__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__60__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__cdp_cvtin_output_rdy) 
              & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_1.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_5))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__cdp_cvtin_input_vld) 
              & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_1.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_2))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt));
    vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_9 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_19 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_4 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_18 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__22__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_nor_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__22__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__22__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__22__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__22__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__22__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__22__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_asn_IntSubExt_16U_16U_17U_o_conc_1_cgspt_9_mux_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__22__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__53__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__53__input_1 
        = (1U & (~ (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_2)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__53__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2)) 
                    | (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__53__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__53__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__53__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__53__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__53__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__6__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__6__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__6__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__6__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__6__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__6__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__6__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_41_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__6__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__55__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__55__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__55__input_0 
        = (1U & ((~ (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_4)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__55__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__55__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__55__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__55__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__55__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__37__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__37__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__37__input_0 
        = (1U & (~ ((IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_4) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__37__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__37__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__37__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__37__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__not_tmp_22 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__37__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_tmp_4 
        = ((0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_15 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_35 
        = ((0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_107_cse 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
           & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
              & (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__26__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
            & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_9) 
               & (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
                                           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_9)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__26__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__26__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_2_sig_mx0w1 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__26__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_18));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__7__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_41_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__7__input_1 
        = (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_z_out);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__7__input_0 
        = (0x00ffffffU & VL_MULS_III(25, (0x01ffffffU 
                                          & VL_EXTENDS_II(25,9, (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_2_itm))), 
                                     (0x01ffffffU & 
                                      VL_EXTENDS_II(25,16, (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_mul_in_1_sva_2)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__7__sel)
            ? __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__7__input_1
            : __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__7__input_0);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__7__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_17U_16U_33U_o_mux1h_1_itm 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__7__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__56__sel 
        = (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__56__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_33_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__56__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__not_tmp_22;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__56__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__56__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__56__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__56__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__56__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__8__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__8__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3) 
                    >> 1U)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__8__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_tmp_4;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__8__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__8__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__8__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__8__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__8__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__12__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__12__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__12__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_15)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__12__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__12__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__12__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__12__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__12__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__38__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__38__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__38__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_35;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__38__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__38__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__38__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__38__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_42_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__38__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__23__sel 
        = (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__23__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_35)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__23__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_107_cse;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__23__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__23__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__23__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__23__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_44_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__23__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__58__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__58__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_107_cse;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__58__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_35)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__58__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__58__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__58__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__58__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__58__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__13__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__13__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_35;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__13__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_107_cse)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__13__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__13__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__13__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__13__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__13__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__5__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1) 
            & ((2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use)) 
               & (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_4) 
                                           & (2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__5__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__5__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__iExpoWidth_oExpoWidth_prb 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__5__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__25__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1) 
            & ((0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use)) 
               & (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_4) 
                                           & (0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__25__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__25__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_1_sig_mx0w1 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__25__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__51__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__51__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__51__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__51__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__51__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__51__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__51__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__51__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__57__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__57__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_35_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__57__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__not_tmp_22;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__57__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__57__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__57__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__57__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_36_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__57__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__9__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__9__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_18_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__9__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_15)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__9__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__9__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__9__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__9__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__9__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__39__sel 
        = (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__39__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_107_cse)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__39__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_42_nl)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__39__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__39__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__39__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__39__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_43_itm 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__39__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__59__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_2)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__59__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_28_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__59__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__59__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__59__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__59__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__59__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_37_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__59__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__14__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_5)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__14__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_23_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__14__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__14__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__14__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__14__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__14__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__14__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_144_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_50 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16))) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen));
    HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_6 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__10__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__10__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_15)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__10__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__10__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__10__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__10__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__10__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_20_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__10__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__18__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_43_itm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__18__input_1 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_shifter_use;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__18__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_3_FpExpoWidthInc_5U_6U_10U_1U_1U_if_3_or_1_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__18__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__18__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__18__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__18__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_truncate_mux1h_3_itm 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__18__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__24__sel 
        = ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use)) 
            << 2U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_44_nl) 
                       << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_43_itm)))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__24__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_asn_IntSubExt_16U_16U_17U_o_conc_1_cgspt_9_mux_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__24__input_1 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntSubExt_8U_8U_9U_1_o_acc_nl));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__24__input_2 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__Vstatic__result 
        = (__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__24__input_0 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__24__sel)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__Vstatic__result 
        = (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__Vstatic__result 
           | (__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__24__input_1 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__24__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__Vstatic__result 
        = (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__Vstatic__result 
           | (__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__24__input_2 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__24__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__24__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_mux1h_1_itm 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__24__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__60__sel 
        = (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__60__input_1 
        = (1U & (~ ((IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_2) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__60__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_37_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__60__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__60__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__60__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__60__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_38_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__60__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__15__sel 
        = (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__15__input_1 
        = (1U & (~ ((IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_5) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_107_cse))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__15__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_24_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__15__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__15__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__15__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__15__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__15__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_137_cse 
        = ((IData)(HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_6) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_22_nl));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__11__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__11__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1) 
                        & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_tmp_4))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__11__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_20_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__11__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__11__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__11__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__11__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_21_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__11__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_and_2_cse 
        = ((IData)(HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_6) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_25_nl));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_and_cse 
        = ((IData)(HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_6) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_21_nl));
}

void Vsim_HLS_cdp_icvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_1__0(Vsim_HLS_cdp_icvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_icvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*55:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__75__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__75__Vfuncout = 0;
    QData/*54:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__75__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__75__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__77__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__77__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__77__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__77__vector = 0;
    QData/*63:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__78__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__78__Vfuncout = 0;
    QData/*62:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__78__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__78__vector = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__input_1 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__91__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__91__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__91__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__91__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__91__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__91__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__95__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__95__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__95__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__95__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__95__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__95__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__114__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__114__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__114__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__114__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__114__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__114__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__114__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__114__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__114__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__114__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__115__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__115__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__115__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__115__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__115__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__115__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__115__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__115__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__115__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__115__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__116__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__116__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__116__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__116__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__116__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__116__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__116__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__116__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__116__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__116__sel = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__117__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__117__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__117__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__117__input_2 = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__117__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__117__input_1 = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__117__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__117__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__117__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__117__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__118__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__118__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__118__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__118__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__118__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__118__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__118__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__118__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__118__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__118__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__119__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__119__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__119__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__119__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__119__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__119__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__119__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__119__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__119__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__119__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__120__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__120__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__120__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__120__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__120__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__120__input_1 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__120__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__120__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__120__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__120__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__121__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__121__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__121__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__121__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__121__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__121__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__121__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__121__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__121__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__121__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__122__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__122__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__122__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__122__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__122__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__122__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__122__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__122__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__122__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__122__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__sbit;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__sbit = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__144__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__144__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__144__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__144__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__144__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__144__arg2 = 0;
    QData/*55:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__145__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__145__Vfuncout = 0;
    QData/*55:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__145__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__145__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__145__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__145__arg2 = 0;
    QData/*63:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__146__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__146__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__146__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__146__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__146__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__146__arg2 = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_38_nl))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_acc_itm_2 
                = (0x000001ffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_1);
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_9_nl))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mul_itm_2 
                = (0x00ffffffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_z_out));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct_mx0c0;
        }
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_18) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_19)))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_19)));
        }
        if (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_18;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_itm 
                = (0x0000007fU & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_mux1h_1_itm 
                                  >> 0x0aU));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_48_nl) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_50)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_itm 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_1_itm;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_50) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_itm 
                = (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_17U_16U_33U_o_mux1h_1_itm 
                   >> 0x18U);
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3) 
               | (0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3))) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_50)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_1_itm 
                = (0x00ffffffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_17U_16U_33U_o_mux1h_1_itm);
        }
        if (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_and_cse) {
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__117__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__117__input_0 
                = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__117__input_1 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_IntShiftRight_25U_5U_9U_obits_fixed_nor_nl;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__117__input_2 
                = (0x0000007fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp_1) 
                                  >> 1U));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__117__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__117__sel)))));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__117__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__117__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__117__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__117__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__117__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_7_1 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__117__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__120__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__120__input_0 
                = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva) 
                                  >> 9U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__120__input_1 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_if_ac_int_cctor_16_10_sva));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__120__input_2 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_2_itm;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__120__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__120__sel)))));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__120__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__120__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__120__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__120__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__120__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_13_10 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__120__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__114__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__114__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva) 
                         >> 0x0dU));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__114__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_if_ac_int_cctor_16_10_sva) 
                         >> 4U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__114__input_2 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_6_0_1;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__114__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__114__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__114__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__114__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__114__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__114__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__114__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_14 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__114__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__115__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__115__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva) 
                         >> 0x0eU));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__115__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_if_ac_int_cctor_16_10_sva) 
                         >> 5U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__115__input_2 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_6_1_1;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__115__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__115__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__115__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__115__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__115__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__115__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__115__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_15 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__115__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__116__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__116__input_0 
                = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva) 
                                | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva))) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva))));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__116__input_1 
                = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_ovfl_sva) 
                                | vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva)) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_unfl_sva))));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__116__input_2 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp_1));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__116__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__116__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__116__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__116__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__116__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__116__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__116__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_0 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__116__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__118__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__118__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva) 
                         >> 7U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__118__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                         >> 0x00000019U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__118__input_2 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp_1) 
                         >> 8U));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__118__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__118__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__118__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__118__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__118__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__118__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__118__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_8 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__118__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__119__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__119__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva) 
                         >> 8U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__119__input_1 
                = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_ovfl_sva) 
                                | vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva)) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_and_unfl_sva))));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__119__input_2 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__119__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__119__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__119__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__119__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__119__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__119__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__119__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_9 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__119__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__121__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__121__input_0 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_IntShiftRight_33U_5U_17U_obits_fixed_nor_2_seb_sva;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__121__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_if_ac_int_cctor_16_10_sva) 
                         >> 6U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__121__input_2 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_4;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__121__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__121__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__121__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__121__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__121__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__121__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__121__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_16 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__121__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__122__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__122__input_0 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_IntShiftRight_33U_5U_17U_obits_fixed_nor_2_seb_sva;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__122__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                         >> 0x00000019U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__122__input_2 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_4;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__122__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__122__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__122__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__122__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__122__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__122__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__122__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_17 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__122__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_36_nl))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_mul_in_1_sva_2 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_scale_use;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen)) 
              & (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_1_itm 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_truncate_mux1h_3_itm) 
                         >> 4U));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_50) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_2_itm 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_3_itm;
        }
        if (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp_1 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_2_itm;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_6_0_1 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_5_0_1;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_6_1_1 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_5_1_1;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_4 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_3;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_1_itm;
        }
        if (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_137_cse) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
        }
        if (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_144_cse) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_3_itm 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_truncate_mux1h_3_itm));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_2_itm 
                = (0x000001ffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_mux1h_1_itm);
        }
        if (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_and_2_cse) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_5_0_1 
                = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)) 
                   | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_5_1_1 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                         >> 0x0eU));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_3 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                         >> 0x0fU));
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen)) 
              & (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_1_itm 
                = (1U & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_mux1h_1_itm 
                         >> 9U));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_4_nl))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mul_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_1_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_7_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_13_10 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_14 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_15 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_8 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_9 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_17 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_mul_in_1_sva_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_1_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_2_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_6_0_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_6_1_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_3_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_2_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_5_0_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_5_1_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_1_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__75__vector 
        = ((QData)((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mul_itm_2)) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__75__Vfuncout 
        = (((QData)((IData)((1U & (IData)((__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__75__vector 
                                           >> 0x36U))))) 
            << 0x00000037U) | __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__75__vector);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg_a 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__75__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_iswt0));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_iswt0));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__s 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_2_itm));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__sel 
        = ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
              ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_itm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__77__vector 
        = (1U & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_1_itm 
                 >> 0x17U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__77__Vfuncout 
        = (0x000000ffU & (- (IData)((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__77__vector))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__input_0 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__77__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_mux_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__145__arg2 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__145__arg1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg_a;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__145__arg1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x00ffffffffffffffULL & VL_SHIFTRS_QQI(56,56,5, vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__145__arg2)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__145__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__145__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__nan_preproc_pd1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__78__vector 
        = ((QData)((IData)((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_mux_nl) 
                             << 0x00000018U) | vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_1_itm))) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__78__Vfuncout 
        = (((QData)((IData)((1U & (IData)((__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__78__vector 
                                           >> 0x3eU))))) 
            << 0x0000003fU) | __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__78__vector);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg_a 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__78__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_nl 
        = (IData)(((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva 
                    >> 0x0000001eU) & (0x0080000000000000ULL 
                                       != (0x008000003fffffffULL 
                                           & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntSubExt_8U_8U_9U_1_o_acc_nl 
        = (0x000003ffU & (VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__93__vector 
                            = (0x000000ffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                              >> 8U));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__93__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__93__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__93__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__93__Vfuncout))) 
                          - VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__94__vector 
                            = (0x000000ffU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_offset_use));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__94__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__94__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__94__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__94__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm 
        = (IData)(((0U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm 
        = (1U & (~ (IData)((0x7c00U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__146__arg2 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__146__arg1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg_a;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__146__arg1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result 
        = VL_SHIFTRS_QQI(64,64,5, vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__146__arg2));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__146__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__146__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__input_1 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__input_0 
        = (2U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_48_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__sel 
        = (1U & ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__input_1 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_itm) 
            << 0x0000000aU) | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_1_itm) 
                                << 9U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_2_itm)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__input_0 
        = ((0x0001fe00U & ((- (IData)((1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_acc_itm_2) 
                                             >> 8U)))) 
                           << 9U)) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_acc_itm_2));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__sel)
            ? __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__input_1
            : __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__input_0);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mux_2_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__Vfuncout;
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_5 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)));
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_2 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                 | (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3))));
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_4 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3) 
                    >> 1U)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
        = (0x07ffffffU & (VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__101__vector 
                            = (0x01ffffffU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva 
                                                      >> 0x1fU)));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__101__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__101__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__101__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__101__Vfuncout)) 
                          + VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__102__vector 
                            = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__102__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__102__vector;
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__102__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_nor_cse 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_7 
        = (IData)((0ULL != (0x000000003fffffffULL & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_z_out 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_mul_in_1_sva_2))), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mux_2_nl))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_unfl_sva 
        = ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
            >> 0x00000019U) & (0x0001ffffU != (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                                                  >> 8U))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                     >> 0x00000019U) | (0U == (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                                                  >> 8U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc 
        = ((0U == (3U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
        = (0x07ffffffU & (VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__105__vector 
                            = (0x01ffffffU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                                      >> 0x1fU)));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__105__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__105__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__105__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__105__Vfuncout)) 
                          + VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__106__vector 
                            = (1U & ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                              >> 0x0000001eU)) 
                                     & ((~ (IData)(
                                                   (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                                    >> 0x00000037U))) 
                                        | (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_7))));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__106__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__106__vector;
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__106__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
        = (0x00000007ffffffffULL & (VL_EXTEND_QQ(35,34, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__107__vector 
                            = (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                               >> 0x1fU);
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__107__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__107__vector 
                                                            >> 0x20U))))) 
                                << 0x00000021U) | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__107__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__107__Vfuncout)) 
                                    + VL_EXTEND_QQ(35,34, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__108__vector 
                            = (1U & ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                              >> 0x0000001eU)) 
                                     & ((~ (IData)(
                                                   (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                                    >> 0x0000003fU))) 
                                        | (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_7))));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__108__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__108__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__108__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_2_nl 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__123__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__123__input_0 
                        = (0x0000007fU & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                                          >> 1U));
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__123__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__123__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__123__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__123__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3) 
             << 3U) | (((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3)) 
                        & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                       << 2U)) | ((((IData)((((0U == 
                                               (0x0300U 
                                                & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                                              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3))) 
                                             & ((0U 
                                                 != 
                                                 (0x00c0U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                                                | (0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                       >> 4U)))))) 
                                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)) 
                                   << 1U) | (1U & (~ 
                                                   (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                     >> 9U) 
                                                    | ((1U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                            >> 7U))) 
                                                       | (((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                             >> 5U) 
                                                            | (1U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                                   >> 3U)))) 
                                                           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                                                          | ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                               >> 1U) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3)) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)))))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_and_unfl_sva 
        = ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
            >> 0x00000019U) & (0x0001ffffU != (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                                                  >> 8U))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                     >> 0x00000019U) | (0U == (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                                                  >> 8U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva 
        = ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                    >> 0x00000021U)) & (0x0001ffffU 
                                        != (0x0001ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                                       >> 0x00000010U)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                             >> 0x00000021U)) | (0U 
                                                 == 
                                                 (0x0001ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                                             >> 0x00000010U)))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_IntShiftRight_25U_5U_9U_obits_fixed_nor_nl 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__124__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__124__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__124__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__124__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__124__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__124__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__input_1 
        = (1U & (((IData)(0x11U) + (0x00000010U | (0x0000000fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))))) 
                 >> 4U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__input_0 
        = (1U & (~ ((~ (IData)((0U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))))) 
                    | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                       >> 0x0000000eU))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_nor_cse) 
            << 2U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm) 
                       << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__input_2 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__sel)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s 
        = (0x0000003fU & ((IData)(1U) + VL_EXTEND_II(6,5, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__74__vector 
                            = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn;
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__74__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__74__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__74__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_2_nl 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__103__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__103__input_0 
                        = (0x0000007fU & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                                          >> 1U));
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__103__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__103__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__103__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__103__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_IntShiftRight_33U_5U_17U_obits_fixed_nor_2_seb_sva 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                 >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__109__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__109__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__109__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__109__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__109__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__109__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__91__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__91__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__91__sel)
            ? 0x0fU : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__91__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__91__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_3_FpExpoWidthInc_5U_6U_10U_1U_1U_if_3_or_1_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__91__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__sbit 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                 >> 8U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__arg1 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__144__arg2 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__144__arg1 
        = (((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__sbit) 
            << 9U) | (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__arg1));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__144__arg1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000003ffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                          << (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__144__arg2)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__144__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__Vfuncout 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__144__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_if_ac_int_cctor_16_10_sva 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__104__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__104__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__104__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__104__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__104__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__104__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__110__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__110__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__110__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__110__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__110__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__110__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__95__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__95__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__95__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__95__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__95__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__95__Vfuncout;
}

void Vsim_HLS_cdp_icvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_1__1(Vsim_HLS_cdp_icvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_icvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__137__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__137__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__137__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__137__vector = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__sel = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__139__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__139__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__139__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__139__vector = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__142__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__142__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__142__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__142__vector = 0;
    // Body
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_and_tmp 
        = (1U & ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U) & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_and_tmp;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__input_1 
        = (0x0000ffffU & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_offset_use)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__139__vector 
        = (0x000000ffU & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_offset_use)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__139__Vfuncout 
        = ((0x0000ff00U & ((- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__139__vector) 
                                             >> 7U)))) 
                           << 8U)) | (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__139__vector));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__input_0 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__139__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_5_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_and_tmp;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__input_1 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                          >> 8U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__137__vector 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                 >> 7U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__137__Vfuncout 
        = (0x000000ffU & (- (IData)((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__137__vector))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__input_0 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__137__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_4_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__140__vector 
                            = (1U | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_4_nl) 
                                      << 9U) | (0x000001feU 
                                                & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                   << 1U))));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__140__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__140__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__140__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__140__Vfuncout)) 
                          + VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__141__vector 
                            = (1U | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_5_nl) 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__141__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__141__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__141__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__141__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__142__vector 
        = (0x0003ffffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_acc_nl);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__Vstatic__tmp 
        = (0x0003ffffU & VL_SHIFTR_III(18,18,32, __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__142__vector, 1U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__142__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_1 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__142__Vfuncout;
}

void Vsim_HLS_cdp_icvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_1__0(Vsim_HLS_cdp_icvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_icvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_6;
    HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_6 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__79__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__79__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__79__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__79__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__80__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__80__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__80__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__80__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__80__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__80__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__80__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__80__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__81__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__81__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__81__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__81__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__81__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__81__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__81__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__81__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__82__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__82__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__82__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__82__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__82__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__82__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__82__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__82__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__83__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__83__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__83__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__83__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__83__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__83__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__83__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__83__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__84__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__84__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__84__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__84__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__84__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__84__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__84__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__84__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__85__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__85__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__85__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__85__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__85__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__85__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__85__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__85__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__86__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__86__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__86__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__86__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__86__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__86__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__86__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__86__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__87__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__87__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__87__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__87__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__87__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__87__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__87__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__87__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__88__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__88__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__88__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__88__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__88__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__88__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__88__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__88__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__89__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__89__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__89__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__89__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__89__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__89__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__89__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__89__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__92__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__92__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__92__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__92__input_0 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__92__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__92__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__92__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__92__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__96__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__96__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__96__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__96__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__96__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__96__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__96__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__96__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__97__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__97__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__97__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__97__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__97__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__97__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__97__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__97__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__98__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__98__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__98__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__98__input_2 = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__98__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__98__input_1 = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__98__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__98__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__98__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__98__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__99__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__99__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__99__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__99__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__100__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__100__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__100__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__100__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__111__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__111__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__111__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__111__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__111__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__111__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__111__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__111__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__112__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__112__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__112__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__112__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__112__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__112__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__112__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__112__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__113__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__113__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__113__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__113__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__113__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__113__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__113__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__113__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__125__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__125__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__125__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__125__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__125__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__125__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__125__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__125__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__127__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__127__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__127__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__127__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__127__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__127__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__127__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__127__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__129__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__129__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__129__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__129__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__129__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__129__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__129__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__129__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__130__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__130__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__130__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__130__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__130__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__130__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__130__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__130__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__131__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__131__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__131__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__131__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__131__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__131__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__131__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__131__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__132__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__132__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__132__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__132__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__132__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__132__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__132__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__132__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__133__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__133__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__133__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__133__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__133__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__133__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__133__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__133__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__134__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__134__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__134__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__134__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__134__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__134__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__134__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__134__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__cdp_cvtin_output_rdy) 
              & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_0.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_5))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_0) 
              & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_2)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt));
    vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_9 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_19 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_4 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_18 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__96__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_nor_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__96__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__96__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__96__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__96__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__96__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__96__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_asn_IntSubExt_16U_16U_17U_o_conc_1_cgspt_9_mux_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__96__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__127__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__127__input_1 
        = (1U & (~ (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_2)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__127__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2)) 
                    | (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__127__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__127__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__127__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__127__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__127__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__80__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__80__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__80__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__80__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__80__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__80__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__80__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_41_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__80__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__129__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__129__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__129__input_0 
        = (1U & ((~ (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_4)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__129__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__129__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__129__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__129__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__129__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__111__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__111__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__111__input_0 
        = (1U & (~ ((IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_4) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__111__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__111__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__111__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__111__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__not_tmp_22 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__111__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_tmp_4 
        = ((0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_15 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_35 
        = ((0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_107_cse 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
           & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
              & (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__100__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
            & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_9) 
               & (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
                                           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_9)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__100__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__100__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_2_sig_mx0w1 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__100__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_18));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__81__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_41_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__81__input_1 
        = (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_z_out);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__81__input_0 
        = (0x00ffffffU & VL_MULS_III(25, (0x01ffffffU 
                                          & VL_EXTENDS_II(25,9, (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_2_itm))), 
                                     (0x01ffffffU & 
                                      VL_EXTENDS_II(25,16, (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_mul_in_1_sva_2)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__81__sel)
            ? __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__81__input_1
            : __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__81__input_0);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__81__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_17U_16U_33U_o_mux1h_1_itm 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__81__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__130__sel 
        = (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__130__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_33_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__130__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__not_tmp_22;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__130__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__130__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__130__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__130__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__130__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__82__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__82__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3) 
                    >> 1U)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__82__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_tmp_4;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__82__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__82__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__82__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__82__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__82__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__86__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__86__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__86__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_15)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__86__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__86__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__86__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__86__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__86__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__112__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__112__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__112__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_35;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__112__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__112__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__112__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__112__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_42_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__112__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__97__sel 
        = (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__97__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_35)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__97__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_107_cse;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__97__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__97__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__97__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__97__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_44_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__97__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__132__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__132__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_107_cse;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__132__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_35)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__132__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__132__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__132__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__132__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__132__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__87__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__87__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_35;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__87__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_107_cse)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__87__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__87__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__87__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__87__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__87__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__79__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1) 
            & ((2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use)) 
               & (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_4) 
                                           & (2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__79__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__79__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__iExpoWidth_oExpoWidth_prb 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__79__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__99__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1) 
            & ((0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use)) 
               & (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_4) 
                                           & (0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__99__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__99__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_1_sig_mx0w1 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__99__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__125__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__125__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__125__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__125__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__125__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__125__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__125__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__125__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__131__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__131__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_35_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__131__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__not_tmp_22;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__131__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__131__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__131__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__131__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_36_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__131__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__83__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__83__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_18_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__83__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_15)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__83__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__83__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__83__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__83__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__83__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__113__sel 
        = (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__113__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_107_cse)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__113__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_42_nl)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__113__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__113__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__113__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__113__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_43_itm 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__113__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__133__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_2)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__133__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_28_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__133__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__133__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__133__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__133__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__133__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_37_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__133__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__88__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_5)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__88__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_23_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__88__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__88__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__88__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__88__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__88__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__88__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_144_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_50 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16))) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen));
    HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_6 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__84__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__84__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_15)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__84__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__84__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__84__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__84__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__84__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_20_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__84__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__92__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_43_itm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__92__input_1 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_shifter_use;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__92__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_3_FpExpoWidthInc_5U_6U_10U_1U_1U_if_3_or_1_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__92__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__92__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__92__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__92__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_truncate_mux1h_3_itm 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__92__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__98__sel 
        = ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use)) 
            << 2U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_44_nl) 
                       << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_43_itm)))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__98__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_asn_IntSubExt_16U_16U_17U_o_conc_1_cgspt_9_mux_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__98__input_1 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntSubExt_8U_8U_9U_1_o_acc_nl));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__98__input_2 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__Vstatic__result 
        = (__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__98__input_0 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__98__sel)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__Vstatic__result 
        = (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__Vstatic__result 
           | (__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__98__input_1 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__98__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__Vstatic__result 
        = (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__Vstatic__result 
           | (__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__98__input_2 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__98__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__98__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_mux1h_1_itm 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__98__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__134__sel 
        = (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__134__input_1 
        = (1U & (~ ((IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_2) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__134__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_37_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__134__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__134__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__134__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__134__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_38_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__134__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__89__sel 
        = (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__89__input_1 
        = (1U & (~ ((IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_5) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_107_cse))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__89__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_24_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__89__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__89__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__89__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__89__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__89__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_137_cse 
        = ((IData)(HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_6) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_22_nl));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__85__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__85__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1) 
                        & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_tmp_4))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__85__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_20_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__85__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__85__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__85__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__85__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_21_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__85__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_and_2_cse 
        = ((IData)(HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_6) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_25_nl));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_and_cse 
        = ((IData)(HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_6) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_21_nl));
}

void Vsim_HLS_cdp_icvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_2__0(Vsim_HLS_cdp_icvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_icvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*55:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__149__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__149__Vfuncout = 0;
    QData/*54:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__149__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__149__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__151__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__151__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__151__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__151__vector = 0;
    QData/*63:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__152__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__152__Vfuncout = 0;
    QData/*62:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__152__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__152__vector = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__input_1 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__165__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__165__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__165__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__165__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__165__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__165__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__169__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__169__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__169__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__169__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__169__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__169__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__188__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__188__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__188__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__188__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__188__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__188__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__188__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__188__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__188__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__188__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__189__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__189__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__189__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__189__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__189__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__189__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__189__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__189__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__189__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__189__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__190__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__190__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__190__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__190__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__190__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__190__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__190__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__190__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__190__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__190__sel = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__191__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__191__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__191__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__191__input_2 = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__191__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__191__input_1 = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__191__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__191__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__191__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__191__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__192__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__192__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__192__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__192__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__192__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__192__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__192__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__192__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__192__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__192__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__193__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__193__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__193__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__193__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__193__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__193__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__193__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__193__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__193__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__193__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_1 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__195__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__195__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__195__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__195__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__195__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__195__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__195__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__195__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__195__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__195__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__196__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__196__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__196__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__196__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__196__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__196__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__196__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__196__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__196__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__196__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__sbit;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__sbit = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__218__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__218__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__218__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__218__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__218__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__218__arg2 = 0;
    QData/*55:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__219__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__219__Vfuncout = 0;
    QData/*55:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__219__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__219__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__219__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__219__arg2 = 0;
    QData/*63:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__220__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__220__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__220__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__220__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__220__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__220__arg2 = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_38_nl))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_acc_itm_2 
                = (0x000001ffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_1);
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_9_nl))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mul_itm_2 
                = (0x00ffffffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_z_out));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct_mx0c0;
        }
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_18) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_19)))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_19)));
        }
        if (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_18;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_itm 
                = (0x0000007fU & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_mux1h_1_itm 
                                  >> 0x0aU));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_48_nl) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_50)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_itm 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_1_itm;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_50) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_itm 
                = (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_17U_16U_33U_o_mux1h_1_itm 
                   >> 0x18U);
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3) 
               | (0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3))) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_50)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_1_itm 
                = (0x00ffffffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_17U_16U_33U_o_mux1h_1_itm);
        }
        if (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_and_cse) {
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__191__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__191__input_0 
                = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__191__input_1 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_IntShiftRight_25U_5U_9U_obits_fixed_nor_nl;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__191__input_2 
                = (0x0000007fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp_1) 
                                  >> 1U));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__191__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__191__sel)))));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__191__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__191__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__191__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__191__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__191__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_7_1 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__191__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_0 
                = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva) 
                                  >> 9U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_1 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_if_ac_int_cctor_16_10_sva));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_2 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_2_itm;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__sel)))));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_13_10 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__188__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__188__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva) 
                         >> 0x0dU));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__188__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_if_ac_int_cctor_16_10_sva) 
                         >> 4U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__188__input_2 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_6_0_1;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__188__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__188__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__188__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__188__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__188__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__188__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__188__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_14 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__188__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__189__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__189__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva) 
                         >> 0x0eU));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__189__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_if_ac_int_cctor_16_10_sva) 
                         >> 5U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__189__input_2 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_6_1_1;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__189__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__189__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__189__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__189__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__189__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__189__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__189__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_15 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__189__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__190__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__190__input_0 
                = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva) 
                                | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva))) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva))));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__190__input_1 
                = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_ovfl_sva) 
                                | vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva)) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_unfl_sva))));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__190__input_2 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp_1));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__190__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__190__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__190__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__190__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__190__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__190__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__190__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_0 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__190__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__192__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__192__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva) 
                         >> 7U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__192__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                         >> 0x00000019U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__192__input_2 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp_1) 
                         >> 8U));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__192__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__192__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__192__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__192__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__192__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__192__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__192__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_8 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__192__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__193__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__193__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva) 
                         >> 8U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__193__input_1 
                = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_ovfl_sva) 
                                | vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva)) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_and_unfl_sva))));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__193__input_2 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__193__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__193__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__193__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__193__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__193__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__193__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__193__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_9 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__193__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__195__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__195__input_0 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_IntShiftRight_33U_5U_17U_obits_fixed_nor_2_seb_sva;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__195__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_if_ac_int_cctor_16_10_sva) 
                         >> 6U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__195__input_2 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_4;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__195__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__195__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__195__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__195__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__195__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__195__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__195__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_16 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__195__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__196__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__196__input_0 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_IntShiftRight_33U_5U_17U_obits_fixed_nor_2_seb_sva;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__196__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                         >> 0x00000019U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__196__input_2 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_4;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__196__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__196__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__196__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__196__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__196__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__196__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__196__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_17 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__196__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_36_nl))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_mul_in_1_sva_2 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_scale_use;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen)) 
              & (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_1_itm 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_truncate_mux1h_3_itm) 
                         >> 4U));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_50) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_2_itm 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_3_itm;
        }
        if (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp_1 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_2_itm;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_6_0_1 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_5_0_1;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_6_1_1 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_5_1_1;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_4 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_3;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_1_itm;
        }
        if (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_137_cse) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
        }
        if (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_144_cse) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_3_itm 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_truncate_mux1h_3_itm));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_2_itm 
                = (0x000001ffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_mux1h_1_itm);
        }
        if (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_and_2_cse) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_5_0_1 
                = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)) 
                   | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_5_1_1 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                         >> 0x0eU));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_3 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                         >> 0x0fU));
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen)) 
              & (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_1_itm 
                = (1U & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_mux1h_1_itm 
                         >> 9U));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_4_nl))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mul_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_1_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_7_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_13_10 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_14 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_15 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_8 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_9 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_17 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_mul_in_1_sva_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_1_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_2_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_6_0_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_6_1_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_3_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_2_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_5_0_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_5_1_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_1_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__149__vector 
        = ((QData)((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mul_itm_2)) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__149__Vfuncout 
        = (((QData)((IData)((1U & (IData)((__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__149__vector 
                                           >> 0x36U))))) 
            << 0x00000037U) | __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__149__vector);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg_a 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__149__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_iswt0));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_iswt0));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__s 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_2_itm));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__sel 
        = ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
              ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_itm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__151__vector 
        = (1U & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_1_itm 
                 >> 0x17U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__151__Vfuncout 
        = (0x000000ffU & (- (IData)((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__151__vector))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__input_0 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__151__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_mux_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__219__arg2 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__219__arg1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg_a;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__219__arg1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x00ffffffffffffffULL & VL_SHIFTRS_QQI(56,56,5, vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__219__arg2)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__219__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__219__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__nan_preproc_pd2;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__152__vector 
        = ((QData)((IData)((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_mux_nl) 
                             << 0x00000018U) | vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_1_itm))) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__152__Vfuncout 
        = (((QData)((IData)((1U & (IData)((__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__152__vector 
                                           >> 0x3eU))))) 
            << 0x0000003fU) | __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__152__vector);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg_a 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__152__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_nl 
        = (IData)(((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva 
                    >> 0x0000001eU) & (0x0080000000000000ULL 
                                       != (0x008000003fffffffULL 
                                           & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntSubExt_8U_8U_9U_1_o_acc_nl 
        = (0x000003ffU & (VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__167__vector 
                            = (0x000000ffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                              >> 8U));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__167__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__167__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__167__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__167__Vfuncout))) 
                          - VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__168__vector 
                            = (0x000000ffU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_offset_use));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__168__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__168__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__168__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__168__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm 
        = (IData)(((0U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm 
        = (1U & (~ (IData)((0x7c00U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__220__arg2 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__220__arg1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg_a;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__220__arg1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result 
        = VL_SHIFTRS_QQI(64,64,5, vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__220__arg2));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__220__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__220__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__input_1 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__input_0 
        = (2U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_48_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__sel 
        = (1U & ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__input_1 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_itm) 
            << 0x0000000aU) | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_1_itm) 
                                << 9U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_2_itm)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__input_0 
        = ((0x0001fe00U & ((- (IData)((1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_acc_itm_2) 
                                             >> 8U)))) 
                           << 9U)) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_acc_itm_2));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__sel)
            ? __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__input_1
            : __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__input_0);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mux_2_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__Vfuncout;
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_5 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)));
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_2 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                 | (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3))));
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_4 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3) 
                    >> 1U)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
        = (0x07ffffffU & (VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__175__vector 
                            = (0x01ffffffU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva 
                                                      >> 0x1fU)));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__175__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__175__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__175__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__175__Vfuncout)) 
                          + VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__176__vector 
                            = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__176__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__176__vector;
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__176__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_nor_cse 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_7 
        = (IData)((0ULL != (0x000000003fffffffULL & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_z_out 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_mul_in_1_sva_2))), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mux_2_nl))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_unfl_sva 
        = ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
            >> 0x00000019U) & (0x0001ffffU != (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                                                  >> 8U))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                     >> 0x00000019U) | (0U == (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                                                  >> 8U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc 
        = ((0U == (3U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
        = (0x07ffffffU & (VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__179__vector 
                            = (0x01ffffffU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                                      >> 0x1fU)));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__179__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__179__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__179__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__179__Vfuncout)) 
                          + VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__180__vector 
                            = (1U & ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                              >> 0x0000001eU)) 
                                     & ((~ (IData)(
                                                   (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                                    >> 0x00000037U))) 
                                        | (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_7))));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__180__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__180__vector;
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__180__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
        = (0x00000007ffffffffULL & (VL_EXTEND_QQ(35,34, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__181__vector 
                            = (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                               >> 0x1fU);
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__181__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__181__vector 
                                                            >> 0x20U))))) 
                                << 0x00000021U) | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__181__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__181__Vfuncout)) 
                                    + VL_EXTEND_QQ(35,34, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__182__vector 
                            = (1U & ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                              >> 0x0000001eU)) 
                                     & ((~ (IData)(
                                                   (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                                    >> 0x0000003fU))) 
                                        | (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_7))));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__182__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__182__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__182__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_2_nl 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__197__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__197__input_0 
                        = (0x0000007fU & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                                          >> 1U));
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__197__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__197__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__197__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__197__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3) 
             << 3U) | (((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3)) 
                        & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                       << 2U)) | ((((IData)((((0U == 
                                               (0x0300U 
                                                & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                                              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3))) 
                                             & ((0U 
                                                 != 
                                                 (0x00c0U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                                                | (0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                       >> 4U)))))) 
                                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)) 
                                   << 1U) | (1U & (~ 
                                                   (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                     >> 9U) 
                                                    | ((1U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                            >> 7U))) 
                                                       | (((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                             >> 5U) 
                                                            | (1U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                                   >> 3U)))) 
                                                           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                                                          | ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                               >> 1U) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3)) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)))))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_and_unfl_sva 
        = ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
            >> 0x00000019U) & (0x0001ffffU != (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                                                  >> 8U))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                     >> 0x00000019U) | (0U == (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                                                  >> 8U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva 
        = ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                    >> 0x00000021U)) & (0x0001ffffU 
                                        != (0x0001ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                                       >> 0x00000010U)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                             >> 0x00000021U)) | (0U 
                                                 == 
                                                 (0x0001ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                                             >> 0x00000010U)))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_IntShiftRight_25U_5U_9U_obits_fixed_nor_nl 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__198__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__198__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__198__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__198__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__198__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__198__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__input_1 
        = (1U & (((IData)(0x11U) + (0x00000010U | (0x0000000fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))))) 
                 >> 4U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__input_0 
        = (1U & (~ ((~ (IData)((0U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))))) 
                    | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                       >> 0x0000000eU))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_nor_cse) 
            << 2U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm) 
                       << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__input_2 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__sel)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s 
        = (0x0000003fU & ((IData)(1U) + VL_EXTEND_II(6,5, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__148__vector 
                            = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn;
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__148__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__148__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__148__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_2_nl 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__177__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__177__input_0 
                        = (0x0000007fU & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                                          >> 1U));
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__177__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__177__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__177__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__177__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_IntShiftRight_33U_5U_17U_obits_fixed_nor_2_seb_sva 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                 >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__183__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__183__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__183__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__183__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__183__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__183__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__165__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__165__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__165__sel)
            ? 0x0fU : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__165__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__165__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_3_FpExpoWidthInc_5U_6U_10U_1U_1U_if_3_or_1_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__165__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__sbit 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                 >> 8U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__arg1 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__218__arg2 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__218__arg1 
        = (((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__sbit) 
            << 9U) | (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__arg1));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__218__arg1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000003ffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                          << (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__218__arg2)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__218__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__Vfuncout 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__218__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_if_ac_int_cctor_16_10_sva 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__178__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__178__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__178__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__178__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__178__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__178__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__184__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__184__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__184__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__184__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__184__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__184__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__169__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__169__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__169__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__169__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__169__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__169__Vfuncout;
}

void Vsim_HLS_cdp_icvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_2__1(Vsim_HLS_cdp_icvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_icvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__211__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__211__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__211__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__211__vector = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__sel = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__213__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__213__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__213__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__213__vector = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__216__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__216__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__216__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__216__vector = 0;
    // Body
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_and_tmp 
        = (1U & ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U) & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_and_tmp;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__input_1 
        = (0x0000ffffU & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_offset_use)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__213__vector 
        = (0x000000ffU & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_offset_use)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__213__Vfuncout 
        = ((0x0000ff00U & ((- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__213__vector) 
                                             >> 7U)))) 
                           << 8U)) | (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__213__vector));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__input_0 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__213__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_5_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_and_tmp;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__input_1 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                          >> 8U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__211__vector 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                 >> 7U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__211__Vfuncout 
        = (0x000000ffU & (- (IData)((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__211__vector))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__input_0 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__211__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_4_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__214__vector 
                            = (1U | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_4_nl) 
                                      << 9U) | (0x000001feU 
                                                & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                   << 1U))));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__214__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__214__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__214__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__214__Vfuncout)) 
                          + VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__215__vector 
                            = (1U | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_5_nl) 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__215__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__215__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__215__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__215__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__216__vector 
        = (0x0003ffffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_acc_nl);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__Vstatic__tmp 
        = (0x0003ffffU & VL_SHIFTR_III(18,18,32, __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__216__vector, 1U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__216__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_1 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__216__Vfuncout;
}

void Vsim_HLS_cdp_icvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_2__0(Vsim_HLS_cdp_icvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_icvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_6;
    HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_6 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__153__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__153__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__153__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__153__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__154__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__154__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__154__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__154__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__154__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__154__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__154__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__154__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__155__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__155__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__155__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__155__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__155__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__155__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__155__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__155__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__156__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__156__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__156__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__156__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__156__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__156__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__156__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__156__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__157__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__157__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__157__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__157__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__157__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__157__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__157__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__157__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__158__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__158__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__158__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__158__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__158__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__158__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__158__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__158__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__159__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__159__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__159__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__159__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__159__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__159__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__159__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__159__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__160__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__160__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__160__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__160__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__160__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__160__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__160__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__160__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__161__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__161__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__161__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__161__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__161__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__161__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__161__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__161__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__162__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__162__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__162__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__162__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__162__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__162__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__162__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__162__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__163__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__163__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__163__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__163__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__163__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__163__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__163__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__163__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__166__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__166__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__166__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__166__input_0 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__166__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__166__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__166__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__166__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__170__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__170__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__170__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__170__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__170__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__170__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__170__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__170__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__171__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__171__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__171__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__171__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__171__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__171__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__171__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__171__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__172__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__172__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__172__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__172__input_2 = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__172__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__172__input_1 = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__172__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__172__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__172__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__172__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__173__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__173__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__173__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__173__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__174__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__174__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__174__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__174__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__185__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__185__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__185__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__185__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__185__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__185__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__185__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__185__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__186__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__186__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__186__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__186__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__186__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__186__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__186__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__186__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__187__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__187__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__187__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__187__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__187__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__187__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__187__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__187__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__199__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__199__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__199__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__199__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__199__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__199__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__199__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__199__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__201__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__201__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__201__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__201__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__201__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__201__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__201__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__201__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__203__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__203__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__203__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__203__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__203__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__203__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__203__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__203__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__204__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__204__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__204__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__204__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__204__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__204__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__204__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__204__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__205__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__205__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__205__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__205__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__205__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__205__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__205__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__205__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__206__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__206__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__206__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__206__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__206__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__206__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__206__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__206__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__207__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__207__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__207__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__207__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__207__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__207__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__207__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__207__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__208__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__208__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__208__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__208__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__208__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__208__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__208__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__208__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__cdp_cvtin_output_rdy) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_3) 
                 & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_3.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_1) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_3.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt));
    vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_9 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_19 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_4 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_18 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__170__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_nor_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__170__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__170__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__170__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__170__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__170__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__170__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_asn_IntSubExt_16U_16U_17U_o_conc_1_cgspt_9_mux_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__170__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__201__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__201__input_1 
        = (1U & (~ (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_2)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__201__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2)) 
                    | (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__201__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__201__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__201__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__201__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__201__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__154__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__154__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__154__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__154__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__154__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__154__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__154__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_41_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__154__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__203__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__203__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__203__input_0 
        = (1U & ((~ (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_4)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__203__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__203__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__203__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__203__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__203__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__185__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__185__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__185__input_0 
        = (1U & (~ ((IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_4) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__185__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__185__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__185__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__185__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__not_tmp_22 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__185__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_tmp_4 
        = ((0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_15 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_35 
        = ((0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_107_cse 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
           & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
              & (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__174__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
            & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_9) 
               & (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
                                           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_9)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__174__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__174__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_2_sig_mx0w1 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__174__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_18));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__155__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_41_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__155__input_1 
        = (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_z_out);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__155__input_0 
        = (0x00ffffffU & VL_MULS_III(25, (0x01ffffffU 
                                          & VL_EXTENDS_II(25,9, (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_2_itm))), 
                                     (0x01ffffffU & 
                                      VL_EXTENDS_II(25,16, (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_mul_in_1_sva_2)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__155__sel)
            ? __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__155__input_1
            : __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__155__input_0);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__155__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_17U_16U_33U_o_mux1h_1_itm 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__155__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__204__sel 
        = (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__204__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_33_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__204__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__not_tmp_22;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__204__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__204__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__204__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__204__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__204__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__156__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__156__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3) 
                    >> 1U)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__156__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_tmp_4;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__156__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__156__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__156__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__156__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__156__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__160__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__160__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__160__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_15)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__160__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__160__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__160__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__160__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__160__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__186__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__186__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__186__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_35;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__186__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__186__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__186__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__186__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_42_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__186__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__171__sel 
        = (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__171__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_35)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__171__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_107_cse;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__171__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__171__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__171__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__171__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_44_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__171__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__206__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__206__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_107_cse;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__206__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_35)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__206__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__206__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__206__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__206__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__206__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__161__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__161__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_35;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__161__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_107_cse)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__161__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__161__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__161__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__161__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__161__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__153__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1) 
            & ((2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use)) 
               & (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_4) 
                                           & (2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__153__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__153__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__iExpoWidth_oExpoWidth_prb 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__153__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__173__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1) 
            & ((0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use)) 
               & (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_4) 
                                           & (0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__173__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__173__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_1_sig_mx0w1 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__173__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__199__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__199__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__199__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__199__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__199__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__199__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__199__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__199__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__205__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__205__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_35_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__205__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__not_tmp_22;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__205__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__205__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__205__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__205__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_36_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__205__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__157__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__157__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_18_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__157__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_15)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__157__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__157__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__157__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__157__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__157__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__187__sel 
        = (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__187__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_107_cse)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__187__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_42_nl)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__187__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__187__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__187__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__187__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_43_itm 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__187__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__207__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_2)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__207__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_28_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__207__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__207__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__207__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__207__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__207__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_37_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__207__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__162__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_5)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__162__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_23_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__162__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__162__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__162__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__162__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__162__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__162__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_144_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_50 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16))) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen));
    HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_6 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__158__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__158__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_15)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__158__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__158__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__158__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__158__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__158__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_20_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__158__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__166__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_43_itm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__166__input_1 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_shifter_use;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__166__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_3_FpExpoWidthInc_5U_6U_10U_1U_1U_if_3_or_1_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__166__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__166__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__166__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__166__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_truncate_mux1h_3_itm 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__166__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__172__sel 
        = ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use)) 
            << 2U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_44_nl) 
                       << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_43_itm)))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__172__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_asn_IntSubExt_16U_16U_17U_o_conc_1_cgspt_9_mux_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__172__input_1 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntSubExt_8U_8U_9U_1_o_acc_nl));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__172__input_2 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__Vstatic__result 
        = (__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__172__input_0 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__172__sel)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__Vstatic__result 
        = (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__Vstatic__result 
           | (__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__172__input_1 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__172__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__Vstatic__result 
        = (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__Vstatic__result 
           | (__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__172__input_2 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__172__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__172__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_mux1h_1_itm 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__172__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__208__sel 
        = (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__208__input_1 
        = (1U & (~ ((IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_2) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__208__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_37_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__208__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__208__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__208__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__208__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_38_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__208__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__163__sel 
        = (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__163__input_1 
        = (1U & (~ ((IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_5) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_107_cse))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__163__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_24_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__163__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__163__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__163__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__163__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__163__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_137_cse 
        = ((IData)(HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_6) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_22_nl));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__159__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__159__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1) 
                        & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_tmp_4))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__159__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_20_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__159__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__159__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__159__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__159__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_21_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__159__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_and_2_cse 
        = ((IData)(HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_6) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_25_nl));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_and_cse 
        = ((IData)(HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_6) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_21_nl));
}

void Vsim_HLS_cdp_icvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_3__0(Vsim_HLS_cdp_icvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_icvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*55:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__223__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__223__Vfuncout = 0;
    QData/*54:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__223__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__223__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__225__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__225__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__225__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__225__vector = 0;
    QData/*63:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__226__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__226__Vfuncout = 0;
    QData/*62:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__226__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__226__vector = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__input_1 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__239__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__239__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__239__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__239__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__239__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__239__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__243__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__243__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__243__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__243__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__243__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__243__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__262__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__262__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__262__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__262__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__262__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__262__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__262__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__262__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__262__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__262__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__263__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__263__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__263__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__263__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__263__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__263__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__263__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__263__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__263__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__263__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__264__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__264__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__264__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__264__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__264__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__264__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__264__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__264__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__264__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__264__sel = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__265__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__265__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__265__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__265__input_2 = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__265__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__265__input_1 = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__265__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__265__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__265__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__265__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__266__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__266__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__266__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__266__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__266__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__266__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__266__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__266__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__266__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__266__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__267__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__267__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__267__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__267__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__267__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__267__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__267__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__267__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__267__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__267__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__268__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__268__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__268__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__268__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__268__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__268__input_1 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__268__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__268__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__268__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__268__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__269__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__269__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__269__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__269__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__269__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__269__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__269__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__269__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__269__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__269__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__270__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__270__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__270__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__270__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__270__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__270__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__270__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__270__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__270__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__270__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__sbit;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__sbit = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__292__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__292__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__292__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__292__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__292__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__292__arg2 = 0;
    QData/*55:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__293__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__293__Vfuncout = 0;
    QData/*55:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__293__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__293__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__293__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__293__arg2 = 0;
    QData/*63:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__294__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__294__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__294__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__294__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__294__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__294__arg2 = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_38_nl))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_acc_itm_2 
                = (0x000001ffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_1);
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_9_nl))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mul_itm_2 
                = (0x00ffffffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_z_out));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct_mx0c0;
        }
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_18) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_19)))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_19)));
        }
        if (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_18;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_itm 
                = (0x0000007fU & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_mux1h_1_itm 
                                  >> 0x0aU));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_48_nl) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_50)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_itm 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_1_itm;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_50) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_itm 
                = (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_17U_16U_33U_o_mux1h_1_itm 
                   >> 0x18U);
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3) 
               | (0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3))) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_50)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_1_itm 
                = (0x00ffffffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_17U_16U_33U_o_mux1h_1_itm);
        }
        if (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_and_cse) {
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__265__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__265__input_0 
                = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__265__input_1 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_IntShiftRight_25U_5U_9U_obits_fixed_nor_nl;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__265__input_2 
                = (0x0000007fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp_1) 
                                  >> 1U));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__265__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__265__sel)))));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__265__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__265__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__265__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__265__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__265__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_7_1 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__265__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__268__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__268__input_0 
                = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva) 
                                  >> 9U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__268__input_1 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_if_ac_int_cctor_16_10_sva));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__268__input_2 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_2_itm;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__268__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__268__sel)))));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__268__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__268__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__268__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__268__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__268__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_13_10 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__268__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__262__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__262__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva) 
                         >> 0x0dU));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__262__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_if_ac_int_cctor_16_10_sva) 
                         >> 4U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__262__input_2 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_6_0_1;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__262__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__262__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__262__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__262__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__262__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__262__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__262__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_14 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__262__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__263__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__263__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva) 
                         >> 0x0eU));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__263__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_if_ac_int_cctor_16_10_sva) 
                         >> 5U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__263__input_2 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_6_1_1;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__263__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__263__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__263__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__263__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__263__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__263__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__263__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_15 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__263__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__264__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__264__input_0 
                = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva) 
                                | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva))) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva))));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__264__input_1 
                = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_ovfl_sva) 
                                | vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva)) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_unfl_sva))));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__264__input_2 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp_1));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__264__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__264__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__264__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__264__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__264__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__264__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__264__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_0 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__264__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__266__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__266__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva) 
                         >> 7U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__266__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                         >> 0x00000019U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__266__input_2 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp_1) 
                         >> 8U));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__266__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__266__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__266__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__266__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__266__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__266__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__266__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_8 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__266__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__267__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__267__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva) 
                         >> 8U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__267__input_1 
                = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_ovfl_sva) 
                                | vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva)) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_and_unfl_sva))));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__267__input_2 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__267__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__267__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__267__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__267__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__267__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__267__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__267__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_9 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__267__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__269__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__269__input_0 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_IntShiftRight_33U_5U_17U_obits_fixed_nor_2_seb_sva;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__269__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_if_ac_int_cctor_16_10_sva) 
                         >> 6U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__269__input_2 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_4;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__269__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__269__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__269__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__269__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__269__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__269__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__269__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_16 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__269__Vfuncout;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__270__sel 
                = ((4U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl)) 
                          << 2U)) | (((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__270__input_0 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_IntShiftRight_33U_5U_17U_obits_fixed_nor_2_seb_sva;
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__270__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                         >> 0x00000019U));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__270__input_2 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_4;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__270__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__270__sel));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__270__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__270__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__270__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__270__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__270__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_17 
                = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__270__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_36_nl))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_mul_in_1_sva_2 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_scale_use;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen)) 
              & (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_1_itm 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_truncate_mux1h_3_itm) 
                         >> 4U));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_50) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_2_itm 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_3_itm;
        }
        if (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp_1 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_2_itm;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_6_0_1 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_5_0_1;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_6_1_1 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_5_1_1;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_4 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_3;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_1_itm;
        }
        if (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_137_cse) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4 
                = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3;
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
        }
        if (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_144_cse) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_3_itm 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_truncate_mux1h_3_itm));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_2_itm 
                = (0x000001ffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_mux1h_1_itm);
        }
        if (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_and_2_cse) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_5_0_1 
                = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)) 
                   | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_5_1_1 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                         >> 0x0eU));
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_3 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                         >> 0x0fU));
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen)) 
              & (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_1_itm 
                = (1U & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_mux1h_1_itm 
                         >> 9U));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_4_nl))) {
            vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mul_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_1_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_7_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_13_10 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_14 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_15 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_8 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_9 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_17 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_mul_in_1_sva_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_1_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_2_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_6_0_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_6_1_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_3_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_2_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_5_0_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_5_1_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_1_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__223__vector 
        = ((QData)((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mul_itm_2)) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__223__Vfuncout 
        = (((QData)((IData)((1U & (IData)((__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__223__vector 
                                           >> 0x36U))))) 
            << 0x00000037U) | __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__223__vector);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg_a 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__223__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_iswt0));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_iswt0));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__s 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_2_itm));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__sel 
        = ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
              ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_itm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__225__vector 
        = (1U & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_1_itm 
                 >> 0x17U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__225__Vfuncout 
        = (0x000000ffU & (- (IData)((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__225__vector))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__input_0 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__225__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_mux_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__293__arg2 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__293__arg1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg_a;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__293__arg1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x00ffffffffffffffULL & VL_SHIFTRS_QQI(56,56,5, vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__293__arg2)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__293__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__293__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__nan_preproc_pd3;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__226__vector 
        = ((QData)((IData)((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_mux_nl) 
                             << 0x00000018U) | vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_1_itm))) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__226__Vfuncout 
        = (((QData)((IData)((1U & (IData)((__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__226__vector 
                                           >> 0x3eU))))) 
            << 0x0000003fU) | __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__226__vector);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg_a 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__226__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_nl 
        = (IData)(((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva 
                    >> 0x0000001eU) & (0x0080000000000000ULL 
                                       != (0x008000003fffffffULL 
                                           & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntSubExt_8U_8U_9U_1_o_acc_nl 
        = (0x000003ffU & (VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__241__vector 
                            = (0x000000ffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                              >> 8U));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__241__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__241__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__241__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__241__Vfuncout))) 
                          - VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__242__vector 
                            = (0x000000ffU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_offset_use));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__242__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__242__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__242__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__242__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm 
        = (IData)(((0U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm 
        = (1U & (~ (IData)((0x7c00U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__294__arg2 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__294__arg1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg_a;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__294__arg1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result 
        = VL_SHIFTRS_QQI(64,64,5, vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__294__arg2));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__294__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__294__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__input_1 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__input_0 
        = (2U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_48_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__sel 
        = (1U & ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__input_1 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_itm) 
            << 0x0000000aU) | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_1_itm) 
                                << 9U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_2_itm)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__input_0 
        = ((0x0001fe00U & ((- (IData)((1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_acc_itm_2) 
                                             >> 8U)))) 
                           << 9U)) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_acc_itm_2));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__sel)
            ? __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__input_1
            : __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__input_0);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mux_2_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__Vfuncout;
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_5 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)));
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_2 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                 | (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3))));
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_4 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3) 
                    >> 1U)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
        = (0x07ffffffU & (VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__249__vector 
                            = (0x01ffffffU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva 
                                                      >> 0x1fU)));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__249__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__249__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__249__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__249__Vfuncout)) 
                          + VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__250__vector 
                            = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__250__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__250__vector;
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__250__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_nor_cse 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_7 
        = (IData)((0ULL != (0x000000003fffffffULL & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_z_out 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_mul_in_1_sva_2))), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mux_2_nl))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_unfl_sva 
        = ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
            >> 0x00000019U) & (0x0001ffffU != (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                                                  >> 8U))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                     >> 0x00000019U) | (0U == (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                                                  >> 8U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc 
        = ((0U == (3U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
        = (0x07ffffffU & (VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__253__vector 
                            = (0x01ffffffU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                                      >> 0x1fU)));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__253__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__253__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__253__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__253__Vfuncout)) 
                          + VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__254__vector 
                            = (1U & ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                              >> 0x0000001eU)) 
                                     & ((~ (IData)(
                                                   (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                                    >> 0x00000037U))) 
                                        | (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_7))));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__254__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__254__vector;
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__254__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
        = (0x00000007ffffffffULL & (VL_EXTEND_QQ(35,34, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__255__vector 
                            = (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                               >> 0x1fU);
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__255__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__255__vector 
                                                            >> 0x20U))))) 
                                << 0x00000021U) | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__255__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__255__Vfuncout)) 
                                    + VL_EXTEND_QQ(35,34, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__256__vector 
                            = (1U & ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                              >> 0x0000001eU)) 
                                     & ((~ (IData)(
                                                   (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                                    >> 0x0000003fU))) 
                                        | (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_7))));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__256__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__256__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__256__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_2_nl 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__271__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__271__input_0 
                        = (0x0000007fU & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                                          >> 1U));
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__271__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__271__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__271__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__271__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3) 
             << 3U) | (((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3)) 
                        & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                       << 2U)) | ((((IData)((((0U == 
                                               (0x0300U 
                                                & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                                              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3))) 
                                             & ((0U 
                                                 != 
                                                 (0x00c0U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                                                | (0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                       >> 4U)))))) 
                                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)) 
                                   << 1U) | (1U & (~ 
                                                   (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                     >> 9U) 
                                                    | ((1U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                            >> 7U))) 
                                                       | (((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                             >> 5U) 
                                                            | (1U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                                   >> 3U)))) 
                                                           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                                                          | ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                               >> 1U) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3)) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)))))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_and_unfl_sva 
        = ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
            >> 0x00000019U) & (0x0001ffffU != (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                                                  >> 8U))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                     >> 0x00000019U) | (0U == (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                                                  >> 8U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva 
        = ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                    >> 0x00000021U)) & (0x0001ffffU 
                                        != (0x0001ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                                       >> 0x00000010U)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                             >> 0x00000021U)) | (0U 
                                                 == 
                                                 (0x0001ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                                             >> 0x00000010U)))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_IntShiftRight_25U_5U_9U_obits_fixed_nor_nl 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__272__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__272__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__272__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__272__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__272__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__272__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__input_1 
        = (1U & (((IData)(0x11U) + (0x00000010U | (0x0000000fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))))) 
                 >> 4U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__input_0 
        = (1U & (~ ((~ (IData)((0U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))))) 
                    | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                       >> 0x0000000eU))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_nor_cse) 
            << 2U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm) 
                       << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__input_2 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__sel)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s 
        = (0x0000003fU & ((IData)(1U) + VL_EXTEND_II(6,5, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__222__vector 
                            = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn;
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__222__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__222__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__222__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_2_nl 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__251__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__251__input_0 
                        = (0x0000007fU & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                                          >> 1U));
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__251__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__251__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__251__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__251__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_IntShiftRight_33U_5U_17U_obits_fixed_nor_2_seb_sva 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                 >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__257__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__257__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__257__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__257__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__257__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__257__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__239__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__239__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__239__sel)
            ? 0x0fU : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__239__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__239__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_3_FpExpoWidthInc_5U_6U_10U_1U_1U_if_3_or_1_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__239__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__sbit 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                 >> 8U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__arg1 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__292__arg2 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__292__arg1 
        = (((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__sbit) 
            << 9U) | (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__arg1));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__292__arg1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000003ffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                          << (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__292__arg2)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__292__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__Vfuncout 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__292__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_if_ac_int_cctor_16_10_sva 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__252__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__252__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__252__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__252__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__252__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__252__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__258__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__258__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__258__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__258__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__258__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__258__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__243__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__243__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__243__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__243__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__243__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__243__Vfuncout;
}

void Vsim_HLS_cdp_icvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_3__1(Vsim_HLS_cdp_icvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_icvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__285__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__285__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__285__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__285__vector = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__sel = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__287__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__287__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__287__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__287__vector = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__290__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__290__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__290__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__290__vector = 0;
    // Body
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_and_tmp 
        = (1U & ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U) & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_and_tmp;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__input_1 
        = (0x0000ffffU & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_offset_use)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__287__vector 
        = (0x000000ffU & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_offset_use)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__287__Vfuncout 
        = ((0x0000ff00U & ((- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__287__vector) 
                                             >> 7U)))) 
                           << 8U)) | (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__287__vector));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__input_0 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__287__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_5_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_and_tmp;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__input_1 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                          >> 8U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__285__vector 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                 >> 7U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__285__Vfuncout 
        = (0x000000ffU & (- (IData)((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__285__vector))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__input_0 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__285__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_4_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__288__vector 
                            = (1U | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_4_nl) 
                                      << 9U) | (0x000001feU 
                                                & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                   << 1U))));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__288__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__288__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__288__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__288__Vfuncout)) 
                          + VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__289__vector 
                            = (1U | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_5_nl) 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__289__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__289__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__289__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__289__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__290__vector 
        = (0x0003ffffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_acc_nl);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__Vstatic__tmp 
        = (0x0003ffffU & VL_SHIFTR_III(18,18,32, __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__290__vector, 1U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__290__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_1 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__290__Vfuncout;
}

void Vsim_HLS_cdp_icvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_3__0(Vsim_HLS_cdp_icvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_icvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_6;
    HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_6 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__227__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__227__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__227__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__227__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__228__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__228__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__228__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__228__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__228__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__228__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__228__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__228__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__229__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__229__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__229__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__229__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__229__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__229__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__229__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__229__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__230__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__230__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__230__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__230__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__230__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__230__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__230__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__230__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__231__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__231__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__231__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__231__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__231__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__231__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__231__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__231__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__232__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__232__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__232__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__232__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__232__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__232__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__232__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__232__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__233__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__233__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__233__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__233__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__233__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__233__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__233__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__233__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__234__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__234__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__234__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__234__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__234__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__234__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__234__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__234__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__235__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__235__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__235__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__235__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__235__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__235__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__235__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__235__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__236__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__236__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__236__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__236__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__236__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__236__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__236__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__236__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__237__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__237__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__237__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__237__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__237__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__237__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__237__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__237__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__240__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__240__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__240__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__240__input_0 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__240__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__240__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__240__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__240__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__244__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__244__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__244__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__244__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__244__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__244__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__244__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__244__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__245__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__245__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__245__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__245__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__245__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__245__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__245__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__245__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__246__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__246__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__246__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__246__input_2 = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__246__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__246__input_1 = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__246__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__246__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__246__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__246__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__247__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__247__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__247__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__247__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__248__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__248__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__248__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__248__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__259__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__259__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__259__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__259__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__259__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__259__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__259__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__259__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__260__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__260__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__260__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__260__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__260__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__260__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__260__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__260__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__261__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__261__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__261__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__261__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__261__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__261__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__261__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__261__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__273__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__273__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__273__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__273__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__273__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__273__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__273__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__273__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__275__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__275__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__275__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__275__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__275__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__275__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__275__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__275__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__277__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__277__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__277__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__277__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__277__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__277__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__277__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__277__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__278__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__278__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__278__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__278__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__278__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__278__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__278__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__278__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__279__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__279__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__279__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__279__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__279__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__279__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__279__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__279__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__280__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__280__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__280__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__280__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__280__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__280__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__280__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__280__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__281__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__281__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__281__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__281__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__281__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__281__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__281__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__281__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__282__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__282__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__282__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__282__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__282__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__282__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__282__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__282__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__cdp_cvtin_output_rdy) 
              & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_4)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_1) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_2.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt));
    vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_9 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_19 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_4 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_18 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__244__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_nor_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__244__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__244__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__244__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__244__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__244__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__244__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_asn_IntSubExt_16U_16U_17U_o_conc_1_cgspt_9_mux_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__244__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__275__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__275__input_1 
        = (1U & (~ (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_2)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__275__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2)) 
                    | (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__275__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__275__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__275__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__275__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__275__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__228__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__228__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__228__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__228__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__228__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__228__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__228__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_41_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__228__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__277__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__277__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__277__input_0 
        = (1U & ((~ (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_4)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__277__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__277__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__277__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__277__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__277__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__259__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__259__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__259__input_0 
        = (1U & (~ ((IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_4) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__259__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__259__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__259__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__259__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__not_tmp_22 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__259__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_tmp_4 
        = ((0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_15 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_35 
        = ((0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_107_cse 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
           & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
              & (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__248__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
            & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_9) 
               & (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
                                           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_9)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__248__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__248__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_2_sig_mx0w1 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__248__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_18));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__229__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_41_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__229__input_1 
        = (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_z_out);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__229__input_0 
        = (0x00ffffffU & VL_MULS_III(25, (0x01ffffffU 
                                          & VL_EXTENDS_II(25,9, (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_2_itm))), 
                                     (0x01ffffffU & 
                                      VL_EXTENDS_II(25,16, (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_mul_in_1_sva_2)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__229__sel)
            ? __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__229__input_1
            : __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__229__input_0);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__229__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_17U_16U_33U_o_mux1h_1_itm 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__229__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__278__sel 
        = (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__278__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_33_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__278__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__not_tmp_22;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__278__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__278__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__278__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__278__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__278__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__230__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__230__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3) 
                    >> 1U)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__230__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_tmp_4;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__230__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__230__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__230__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__230__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__230__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__234__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__234__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__234__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_15)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__234__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__234__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__234__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__234__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__234__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__260__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__260__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__260__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_35;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__260__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__260__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__260__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__260__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_42_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__260__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__245__sel 
        = (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__245__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_35)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__245__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_107_cse;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__245__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__245__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__245__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__245__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_44_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__245__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__280__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__280__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_107_cse;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__280__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_35)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__280__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__280__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__280__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__280__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__280__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__235__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__235__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_35;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__235__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_107_cse)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__235__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__235__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__235__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__235__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__235__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__227__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1) 
            & ((2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use)) 
               & (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_4) 
                                           & (2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__227__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__227__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__iExpoWidth_oExpoWidth_prb 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__227__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__247__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1) 
            & ((0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use)) 
               & (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_4) 
                                           & (0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__247__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__247__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_1_sig_mx0w1 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__247__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__273__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__273__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__273__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__273__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__273__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__273__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__273__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__273__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__279__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__279__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_35_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__279__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__not_tmp_22;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__279__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__279__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__279__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__279__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_36_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__279__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__231__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__231__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_18_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__231__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_15)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__231__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__231__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__231__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__231__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__231__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__261__sel 
        = (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__261__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_107_cse)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__261__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_42_nl)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__261__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__261__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__261__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__261__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_43_itm 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__261__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__281__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_2)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__281__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_28_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__281__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__281__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__281__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__281__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__281__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_37_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__281__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__236__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_5)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__236__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_23_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__236__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__236__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__236__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__236__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__236__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__236__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_144_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_50 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16))) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen));
    HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_6 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__232__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__232__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_15)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__232__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__232__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__232__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__232__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__232__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_20_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__232__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__240__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_43_itm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__240__input_1 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_shifter_use;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__240__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_3_FpExpoWidthInc_5U_6U_10U_1U_1U_if_3_or_1_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__240__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__240__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__240__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__240__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_truncate_mux1h_3_itm 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__240__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__246__sel 
        = ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse) 
             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use)) 
            << 2U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_44_nl) 
                       << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_43_itm)))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__246__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_asn_IntSubExt_16U_16U_17U_o_conc_1_cgspt_9_mux_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__246__input_1 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntSubExt_8U_8U_9U_1_o_acc_nl));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__246__input_2 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__Vstatic__result 
        = (__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__246__input_0 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__246__sel)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__Vstatic__result 
        = (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__Vstatic__result 
           | (__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__246__input_1 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__246__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__Vstatic__result 
        = (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__Vstatic__result 
           | (__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__246__input_2 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__246__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__246__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_mux1h_1_itm 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__246__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__282__sel 
        = (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__282__input_1 
        = (1U & (~ ((IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_2) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__282__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_37_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__282__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__282__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__282__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__282__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_38_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__282__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__237__sel 
        = (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__237__input_1 
        = (1U & (~ ((IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_5) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_107_cse))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__237__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_24_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__237__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__237__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__237__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__237__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__237__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_137_cse 
        = ((IData)(HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_6) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_22_nl));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__233__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__233__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1) 
                        & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__and_tmp_4))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__233__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_20_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__233__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__233__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__233__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__233__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_21_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__233__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_and_2_cse 
        = ((IData)(HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_6) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_25_nl));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_and_cse 
        = ((IData)(HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_6) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_21_nl));
}

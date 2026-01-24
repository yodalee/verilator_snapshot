// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_SDP_CORE_Y_cvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_cvt__0(Vsim_NV_NVDLA_SDP_CORE_Y_cvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_SDP_CORE_Y_cvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_cvt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__sel = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__48__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__48__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__48__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__48__input_2 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__48__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__48__input_1 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__48__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__48__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__48__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__48__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__49__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__49__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__49__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__49__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__49__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__49__input_1 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__49__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__49__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__49__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__49__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__50__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__50__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__50__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__50__input_2 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__50__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__50__input_1 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__50__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__50__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__50__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__50__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__51__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__51__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__51__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__51__vector = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__52__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__52__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__52__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__52__input_2 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__52__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__52__input_1 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__52__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__52__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__52__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__52__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__53__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__53__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__53__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__53__vector = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__54__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__54__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__54__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__54__input_2 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__54__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__54__input_1 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__54__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__54__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__54__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__54__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__55__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__55__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__55__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__55__vector = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__56__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__56__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__56__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__56__input_2 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__56__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__56__input_1 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__56__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__56__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__56__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__56__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__57__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__57__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__57__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__57__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__57__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__57__input_1 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__57__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__57__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__57__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__57__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__58__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__58__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__58__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__58__input_2 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__58__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__58__input_1 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__58__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__58__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__58__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__58__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__59__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__59__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__59__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__59__vector = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__60__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__60__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__60__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__60__input_2 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__60__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__60__input_1 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__60__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__60__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__60__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__60__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__61__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__61__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__61__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__61__vector = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__62__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__62__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__62__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__62__input_2 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__62__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__62__input_1 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__62__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__62__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__62__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__62__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__63__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__63__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__63__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__63__vector = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__64__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__64__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__64__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__64__input_2 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__64__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__64__input_1 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__64__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__64__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__64__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__64__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__65__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__65__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__65__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__65__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__65__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__65__input_1 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__65__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__65__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__65__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__65__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__66__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__66__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__66__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__66__input_2 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__66__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__66__input_1 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__66__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__66__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__66__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__66__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__67__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__67__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__67__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__67__vector = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__68__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__68__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__68__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__68__input_2 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__68__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__68__input_1 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__68__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__68__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__68__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__68__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__69__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__69__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__69__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__69__vector = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__70__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__70__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__70__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__70__input_2 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__70__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__70__input_1 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__70__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__70__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__70__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__70__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__71__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__71__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__71__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__71__vector = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__72__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__72__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__72__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__72__input_2 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__72__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__72__input_1 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__72__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__72__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__72__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__72__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__73__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__73__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__73__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__73__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__73__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__73__input_1 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__73__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__73__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__73__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__73__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__input_2 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__input_1 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__75__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__75__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__75__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__75__vector = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__76__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__76__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__76__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__76__input_2 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__76__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__76__input_1 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__76__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__76__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__76__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__76__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__77__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__77__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__77__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__77__vector = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__78__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__78__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__78__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__78__input_2 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__78__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__78__input_1 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__78__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__78__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__78__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__78__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__79__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__79__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__79__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__79__vector = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__80__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__80__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__80__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__80__input_2 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__80__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__80__input_1 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__80__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__80__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__80__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__80__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__81__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__81__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__81__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__81__vector = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__82__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__82__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__82__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__82__input_2 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__82__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__82__input_1 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__82__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__82__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__82__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__82__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__83__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__83__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__83__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__83__vector = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__84__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__84__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__84__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__84__input_2 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__84__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__84__input_1 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__84__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__84__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__84__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__84__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__85__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__85__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__85__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__85__vector = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__86__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__86__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__86__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__86__input_2 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__86__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__86__input_1 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__86__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__86__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__86__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__86__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__87__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__87__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__87__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__87__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__88__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__88__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__88__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__88__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__88__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__88__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__88__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__88__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__89__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__89__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__89__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__89__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__89__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__89__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__89__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__89__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__90__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__90__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__90__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__90__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__90__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__90__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__90__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__90__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__91__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__91__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__91__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__91__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__91__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__91__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__91__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__91__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__92__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__92__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__92__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__92__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__92__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__92__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__92__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__92__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__93__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__93__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__93__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__93__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__93__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__93__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__93__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__93__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__94__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__94__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__94__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__94__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__94__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__94__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__94__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__94__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__95__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__95__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__95__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__95__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__95__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__95__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__95__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__95__sel = 0;
    QData/*48:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__96__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__96__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__96__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__96__vector = 0;
    QData/*48:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__97__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__97__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__97__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__97__vector = 0;
    QData/*48:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__98__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__98__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__98__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__98__vector = 0;
    QData/*48:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__99__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__99__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__99__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__99__vector = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__100__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__100__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__100__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__100__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__100__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__100__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__100__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__100__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__101__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__101__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__101__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__101__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__101__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__101__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__101__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__101__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__102__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__102__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__102__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__102__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__102__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__102__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__103__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__103__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__103__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__103__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__103__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__103__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__104__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__104__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__104__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__104__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__104__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__104__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__104__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__104__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__105__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__105__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__105__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__105__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__105__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__105__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__105__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__105__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__106__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__106__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__106__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__106__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__106__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__106__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__107__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__107__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__107__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__107__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__107__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__107__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__107__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__107__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__108__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__108__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__108__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__108__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__108__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__108__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__108__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__108__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__109__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__109__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__109__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__109__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__109__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__109__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__110__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__110__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__110__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__110__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__110__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__110__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__111__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__111__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__111__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__111__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__111__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__111__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__112__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__112__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__112__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__112__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__112__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__112__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__112__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__112__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__113__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__113__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__113__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__113__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__113__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__113__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__113__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__113__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__114__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__114__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__114__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__114__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__114__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__114__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__sel = 0;
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__Vfuncout;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__Vfuncout);
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg1;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg2 = 0;
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__Vfuncout;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__Vfuncout);
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg1;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg2 = 0;
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__Vfuncout;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__Vfuncout);
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg1;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg2 = 0;
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__Vfuncout;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__Vfuncout);
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg1;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg2 = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_8;
    // Body
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_biwt)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_out_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_in_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_biwt)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_ld_core_psct 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_ld_core_psct_mx0c0;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_in_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_6_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
    } else {
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_iswt0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_19;
        }
    } else {
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_d_bfwt 
            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt;
        if (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_and_cse) {
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_8 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_st_10 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_bypass;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_and_cse) {
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__49__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__49__input_0 
                = (7U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x0aU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__49__input_1 
                = (7U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_1_sva 
                         >> 9U));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__49__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_5_12_10_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__49__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__49__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__49__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__49__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__49__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__49__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__49__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_12_10 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__49__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__57__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__57__input_0 
                = (7U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x1aU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__57__input_1 
                = (7U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_2_sva 
                         >> 9U));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__57__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_5_12_10_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__57__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__57__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__57__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__57__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__57__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__57__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__57__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_44_42 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__57__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__65__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__65__input_0 
                = (7U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x2aU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__65__input_1 
                = (7U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_3_sva 
                         >> 9U));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__65__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_5_12_10_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__65__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__65__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__65__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__65__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__65__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__65__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__65__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_76_74 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__65__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__73__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__73__input_0 
                = (7U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x3aU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__73__input_1 
                = (7U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_sva 
                         >> 9U));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__73__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_5_12_10_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__73__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__73__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__73__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__73__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__73__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__73__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__73__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_108_106 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__73__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__48__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__48__input_0 
                = (0x000001ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                          >> 1U)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__48__input_1 
                = (0x000001ffU & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_1_sva);
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__48__input_2 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_5_9_0_1) 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__48__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__48__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__48__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__48__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__48__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__48__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__48__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_9_1 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__48__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__56__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__56__input_0 
                = (0x000001ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                          >> 0x11U)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__56__input_1 
                = (0x000001ffU & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_2_sva);
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__56__input_2 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_5_9_0_1) 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__56__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__56__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__56__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__56__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__56__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__56__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__56__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_41_33 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__56__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__64__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__64__input_0 
                = (0x000001ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                          >> 0x21U)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__64__input_1 
                = (0x000001ffU & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_3_sva);
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__64__input_2 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_5_9_0_1) 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__64__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__64__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__64__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__64__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__64__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__64__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__64__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_73_65 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__64__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__72__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__72__input_0 
                = (0x000001ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                          >> 0x31U)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__72__input_1 
                = (0x000001ffU & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_sva);
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__72__input_2 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_5_9_0_1) 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__72__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__72__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__72__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__72__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__72__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__72__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__72__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_105_97 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__72__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__50__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__51__vector 
                = (7U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x0dU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__51__Vfuncout 
                = ((0x000003f8U & ((- (IData)((1U & 
                                               ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__51__vector) 
                                                >> 2U)))) 
                                   << 3U)) | (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__51__vector));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__50__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__51__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__50__input_1 
                = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_1_sva 
                                  >> 0x0cU));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__50__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_5_22_13_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__50__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__50__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__50__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__50__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__50__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__50__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__50__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_22_13 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__50__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__58__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__59__vector 
                = (7U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x1dU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__59__Vfuncout 
                = ((0x000003f8U & ((- (IData)((1U & 
                                               ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__59__vector) 
                                                >> 2U)))) 
                                   << 3U)) | (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__59__vector));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__58__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__59__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__58__input_1 
                = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_2_sva 
                                  >> 0x0cU));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__58__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_5_22_13_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__58__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__58__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__58__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__58__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__58__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__58__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__58__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_54_45 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__58__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__66__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__67__vector 
                = (7U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x2dU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__67__Vfuncout 
                = ((0x000003f8U & ((- (IData)((1U & 
                                               ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__67__vector) 
                                                >> 2U)))) 
                                   << 3U)) | (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__67__vector));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__66__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__67__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__66__input_1 
                = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_3_sva 
                                  >> 0x0cU));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__66__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_5_22_13_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__66__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__66__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__66__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__66__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__66__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__66__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__66__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_86_77 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__66__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__75__vector 
                = (7U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x3dU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__75__Vfuncout 
                = ((0x000003f8U & ((- (IData)((1U & 
                                               ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__75__vector) 
                                                >> 2U)))) 
                                   << 3U)) | (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__75__vector));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__75__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__input_1 
                = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_sva 
                                  >> 0x0cU));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_5_22_13_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_118_109 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__74__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__52__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__53__vector 
                = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x0fU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__53__Vfuncout 
                = (3U & (- (IData)((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__53__vector))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__52__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__53__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__52__input_1 
                = (3U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_1_sva 
                         >> 0x1aU));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__52__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_1_lpi_1_dfm_5_1_0_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__52__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__52__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__52__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__52__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__52__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__52__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__52__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_28_27 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__52__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__54__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__55__vector 
                = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x0fU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__55__Vfuncout 
                = (3U & (- (IData)((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__55__vector))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__54__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__55__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__54__input_1 
                = (3U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_1_sva 
                         >> 0x1cU));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__54__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_1_lpi_1_dfm_5_3_2_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__54__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__54__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__54__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__54__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__54__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__54__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__54__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_30_29 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__54__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__60__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__61__vector 
                = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x1fU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__61__Vfuncout 
                = (3U & (- (IData)((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__61__vector))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__60__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__61__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__60__input_1 
                = (3U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_2_sva 
                         >> 0x1aU));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__60__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_2_lpi_1_dfm_5_1_0_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__60__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__60__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__60__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__60__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__60__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__60__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__60__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_60_59 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__60__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__62__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__63__vector 
                = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x1fU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__63__Vfuncout 
                = (3U & (- (IData)((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__63__vector))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__62__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__63__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__62__input_1 
                = (3U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_2_sva 
                         >> 0x1cU));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__62__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_2_lpi_1_dfm_5_3_2_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__62__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__62__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__62__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__62__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__62__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__62__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__62__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_62_61 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__62__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__68__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__69__vector 
                = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x2fU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__69__Vfuncout 
                = (3U & (- (IData)((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__69__vector))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__68__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__69__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__68__input_1 
                = (3U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_3_sva 
                         >> 0x1aU));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__68__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_3_lpi_1_dfm_5_1_0_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__68__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__68__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__68__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__68__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__68__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__68__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__68__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_92_91 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__68__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__70__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__71__vector 
                = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x2fU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__71__Vfuncout 
                = (3U & (- (IData)((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__71__vector))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__70__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__71__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__70__input_1 
                = (3U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_3_sva 
                         >> 0x1cU));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__70__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_3_lpi_1_dfm_5_3_2_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__70__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__70__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__70__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__70__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__70__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__70__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__70__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_94_93 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__70__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__76__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__77__vector 
                = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x3fU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__77__Vfuncout 
                = (3U & (- (IData)((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__77__vector))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__76__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__77__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__76__input_1 
                = (3U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_sva 
                         >> 0x1aU));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__76__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_lpi_1_dfm_5_1_0_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__76__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__76__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__76__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__76__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__76__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__76__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__76__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_124_123 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__76__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__78__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__79__vector 
                = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x3fU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__79__Vfuncout 
                = (3U & (- (IData)((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__79__vector))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__78__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__79__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__78__input_1 
                = (3U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_sva 
                         >> 0x1cU));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__78__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_lpi_1_dfm_5_3_2_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__78__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__78__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__78__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__78__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__78__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__78__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__78__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_126_125 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__78__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_19) 
                 & (2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6))) 
                | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_22)))) {
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__88__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_22;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__88__input_1 
                = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_5_9_0_1));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__88__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_39_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__88__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__88__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__88__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__88__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__88__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__89__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_22;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__89__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_itm_2;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__89__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_40_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__89__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__89__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__89__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__89__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_31 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__89__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__90__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_22;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__90__input_1 
                = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_5_9_0_1));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__90__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_41_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__90__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__90__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__90__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__90__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_32 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__90__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__91__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_22;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__91__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_3_itm_2;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__91__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_42_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__91__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__91__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__91__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__91__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_63 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__91__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__92__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_22;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__92__input_1 
                = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_5_9_0_1));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__92__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_43_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__92__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__92__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__92__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__92__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_64 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__92__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__93__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_22;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__93__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_6_itm_2;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__93__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_44_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__93__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__93__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__93__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__93__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_95 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__93__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__94__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_22;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__94__input_1 
                = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_5_9_0_1));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__94__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_45_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__94__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__94__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__94__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__94__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_96 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__94__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__95__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_22;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__95__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_9_itm_2;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__95__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_46_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__95__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__95__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__95__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__95__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_127 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__95__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntMulExt_33U_16U_49U_o_and_cse) {
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__97__vector 
                = (0x0001ffffffffffffULL & VL_MULS_QQQ(49, 
                                                       (0x0001ffffffffffffULL 
                                                        & VL_EXTENDS_QQ(49,33, 
                                                                        (0x00000001ffffffffULL 
                                                                         & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_3_IntSubExt_16U_32U_33U_o_acc_nl))), 
                                                       (0x0001ffffffffffffULL 
                                                        & VL_EXTENDS_QI(49,16, (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_scale)))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__97__Vfuncout 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__97__vector;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntMulExt_33U_16U_49U_o_mul_itm_2 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__97__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__96__vector 
                = (0x0001ffffffffffffULL & VL_MULS_QQQ(49, 
                                                       (0x0001ffffffffffffULL 
                                                        & VL_EXTENDS_QQ(49,33, 
                                                                        (0x00000001ffffffffULL 
                                                                         & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_1_IntSubExt_16U_32U_33U_o_acc_nl))), 
                                                       (0x0001ffffffffffffULL 
                                                        & VL_EXTENDS_QI(49,16, (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_scale)))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__96__Vfuncout 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__96__vector;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntMulExt_33U_16U_49U_o_mul_itm_2 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__96__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntMulExt_33U_16U_49U_o_and_1_cse) {
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__99__vector 
                = (0x0001ffffffffffffULL & VL_MULS_QQQ(49, 
                                                       (0x0001ffffffffffffULL 
                                                        & VL_EXTENDS_QQ(49,33, 
                                                                        (0x00000001ffffffffULL 
                                                                         & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_4_IntSubExt_16U_32U_33U_o_acc_1_nl))), 
                                                       (0x0001ffffffffffffULL 
                                                        & VL_EXTENDS_QI(49,16, (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_scale)))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__99__Vfuncout 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__99__vector;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntMulExt_33U_16U_49U_o_mul_1_itm_2 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__99__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__98__vector 
                = (0x0001ffffffffffffULL & VL_MULS_QQQ(49, 
                                                       (0x0001ffffffffffffULL 
                                                        & VL_EXTENDS_QQ(49,33, 
                                                                        (0x00000001ffffffffULL 
                                                                         & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_2_IntSubExt_16U_32U_33U_o_acc_1_nl))), 
                                                       (0x0001ffffffffffffULL 
                                                        & VL_EXTENDS_QI(49,16, (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_scale)))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__98__Vfuncout 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__98__vector;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntMulExt_33U_16U_49U_o_mul_1_itm_2 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__98__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_and_4_cse) {
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_bypass;
        }
    } else {
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_d_bfwt = 0ULL;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_8 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_12_10 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_44_42 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_76_74 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_108_106 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_9_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_41_33 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_73_65 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_105_97 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_22_13 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_54_45 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_86_77 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_118_109 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_0 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_31 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_32 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_63 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_64 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_95 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_96 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_127 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_28_27 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_30_29 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_60_59 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_62_61 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_92_91 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_94_93 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_124_123 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_126_125 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntMulExt_33U_16U_49U_o_mul_itm_2 = 0ULL;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntMulExt_33U_16U_49U_o_mul_itm_2 = 0ULL;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntMulExt_33U_16U_49U_o_mul_1_itm_2 = 0ULL;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntMulExt_33U_16U_49U_o_mul_1_itm_2 = 0ULL;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_st_10 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2 = 0U;
    }
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_3_nl 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_st_10));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen) 
               & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt)) 
              & (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision))) 
             & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bawt) 
                       | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_chn_out_rsci_ld_core_psct_cse)))) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_bypass))))) {
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_cfg_truncate_1_itm 
                = (3U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_truncate_mux1h_1_itm) 
                         >> 4U));
        }
        if (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_and_cse) {
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__80__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__81__vector 
                = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x0fU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__81__Vfuncout 
                = (0x0000000fU & (- (IData)((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__81__vector))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__80__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__81__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__80__input_1 
                = (0x0000000fU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_1_sva 
                                  >> 0x16U));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__80__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_cfg_truncate_1_1_itm;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__80__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__80__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__80__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__80__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__80__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__80__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__80__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_26_23 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__80__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__82__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__83__vector 
                = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x1fU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__83__Vfuncout 
                = (0x0000000fU & (- (IData)((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__83__vector))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__82__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__83__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__82__input_1 
                = (0x0000000fU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_2_sva 
                                  >> 0x16U));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__82__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_2_lpi_1_dfm_6;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__82__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__82__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__82__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__82__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__82__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__82__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__82__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_58_55 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__82__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__84__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__85__vector 
                = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x2fU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__85__Vfuncout 
                = (0x0000000fU & (- (IData)((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__85__vector))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__84__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__85__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__84__input_1 
                = (0x0000000fU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_3_sva 
                                  >> 0x16U));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__84__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_3_lpi_1_dfm_6;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__84__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__84__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__84__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__84__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__84__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__84__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__84__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_90_87 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__84__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__86__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__87__vector 
                = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x3fU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__87__Vfuncout 
                = (0x0000000fU & (- (IData)((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__87__vector))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__86__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__87__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__86__input_1 
                = (0x0000000fU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_sva 
                                  >> 0x16U));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__86__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_lpi_1_dfm_6;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__86__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__86__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__86__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__86__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__86__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__86__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__86__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_122_119 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__86__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_19) 
                | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_23)))) {
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_chn_out_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_23)));
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_17))) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_28_nl))) {
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt;
        }
    } else {
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_cfg_truncate_1_itm = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_26_23 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_58_55 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_90_87 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_122_119 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_chn_out_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 = 0ULL;
    }
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_14) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_25_nl))) {
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__100__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__103__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_3_tmp;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__100__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_1_lpi_1_dfm;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__103__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_3_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_9_itm_2 
                = (IData)(((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                            >> 0x0000003fU) & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_lpi_1_dfm))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__100__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_27_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_lpi_1_dfm_5_3_2_1 
                = (3U & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_58_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm)))) 
                         | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_3_tmp)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_lpi_1_dfm_5_1_0_1 
                = (3U & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_42_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm)))) 
                         | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_3_tmp)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_5_12_10_1 
                = (7U & (~ ([&]() {
                            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__102__sel 
                                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_tmp;
                            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__102__input_0 
                                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_nl;
                            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__102__sel)
                                    ? 7U : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__102__input_0));
                            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__102__Vfuncout 
                                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
                        }(), (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__102__Vfuncout))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__103__sel)
                    ? 0x0fU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__103__input_0));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_1_lpi_1_dfm_5_3_2_1 
                = (3U & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_46_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm)))) 
                         | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_tmp)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_1_lpi_1_dfm_5_1_0_1 
                = (3U & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_36_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm)))) 
                         | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_tmp)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_itm_2 
                = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x0fU)) & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_1_lpi_1_dfm))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_6_itm_2 
                = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x2fU)) & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_3_lpi_1_dfm))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_3_lpi_1_dfm_5_3_2_1 
                = (3U & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_54_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm)))) 
                         | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_2_tmp)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_3_lpi_1_dfm_5_1_0_1 
                = (3U & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_40_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm)))) 
                         | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_2_tmp)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_2_lpi_1_dfm_5_3_2_1 
                = (3U & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_50_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm)))) 
                         | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_1_tmp)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_2_lpi_1_dfm_5_1_0_1 
                = (3U & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_38_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm)))) 
                         | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_1_tmp)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_3_itm_2 
                = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x1fU)) & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_2_lpi_1_dfm))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__100__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__100__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__100__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__103__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__100__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_lpi_1_dfm_6 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__103__Vfuncout;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_5_9_0_1 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__100__Vfuncout;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_5_12_10_1 
                = (7U & (~ ([&]() {
                            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__106__sel 
                                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_3_tmp;
                            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__106__input_0 
                                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_3_nl;
                            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__106__sel)
                                    ? 7U : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__106__input_0));
                            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__106__Vfuncout 
                                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
                        }(), (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__106__Vfuncout))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__110__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_2_tmp;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__101__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_5_12_10_1 
                = (7U & (~ ([&]() {
                            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__109__sel 
                                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_1_tmp;
                            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__109__input_0 
                                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_1_nl;
                            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__109__sel)
                                    ? 7U : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__109__input_0));
                            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__109__Vfuncout 
                                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
                        }(), (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__109__Vfuncout))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__110__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_2_nl;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__101__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_1_lpi_1_dfm;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__110__sel)
                    ? 0x0fU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__110__input_0));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_5_12_10_1 
                = (7U & (~ ([&]() {
                            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__114__sel 
                                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_2_tmp;
                            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__114__input_0 
                                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_2_nl;
                            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__114__sel)
                                    ? 7U : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__114__input_0));
                            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__114__Vfuncout 
                                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
                        }(), (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__114__Vfuncout))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__101__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_29_nl;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__110__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__101__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__101__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__101__input_0));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_3_lpi_1_dfm_6 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__110__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__101__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__111__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_1_tmp;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_5_22_13_1 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__101__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__111__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_1_nl;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__104__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl_10;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__111__sel)
                    ? 0x0fU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__111__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__104__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_lpi_1_dfm;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__111__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__104__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_30_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_2_lpi_1_dfm_6 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__111__Vfuncout;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__104__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__104__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__104__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__104__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_5_22_13_1 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__104__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__105__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl_10;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__105__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_lpi_1_dfm;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__105__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_31_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__105__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__105__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__105__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__105__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_5_9_0_1 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__105__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__107__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl_11;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__107__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_2_lpi_1_dfm;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__107__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_32_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__107__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__107__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__107__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__107__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_5_9_0_1 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__107__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__108__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl_11;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__108__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_2_lpi_1_dfm;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__108__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_33_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__108__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__108__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__108__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__108__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_5_22_13_1 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__108__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__112__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl_12;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__112__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_3_lpi_1_dfm;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__112__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_34_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__112__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__112__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__112__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__112__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_5_22_13_1 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__112__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__113__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl_12;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__113__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_3_lpi_1_dfm;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__113__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_35_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__113__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__113__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__113__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__113__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_5_9_0_1 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__113__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_9_itm_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_5_9_0_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_lpi_1_dfm_5_3_2_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_lpi_1_dfm_5_1_0_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_5_22_13_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_5_12_10_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_lpi_1_dfm_6 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_5_22_13_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_5_9_0_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_5_12_10_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_1_lpi_1_dfm_5_3_2_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_1_lpi_1_dfm_5_1_0_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_itm_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_6_itm_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_5_9_0_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_3_lpi_1_dfm_5_3_2_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_3_lpi_1_dfm_5_1_0_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_5_22_13_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_5_12_10_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_3_lpi_1_dfm_6 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_2_lpi_1_dfm_6 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_5_22_13_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_5_9_0_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_5_12_10_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_2_lpi_1_dfm_5_3_2_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_2_lpi_1_dfm_5_1_0_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_3_itm_2 = 0U;
    }
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_and_4_cse) {
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision;
        }
        if (((((~ ((2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)) 
                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_bypass))) 
               & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse)) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt))) {
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_cfg_truncate_1_1_itm 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_truncate_mux1h_1_itm));
        }
    } else {
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_cfg_truncate_1_1_itm = 0U;
    }
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__chn_in_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_ld_core_psct) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_ogwt));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_ogwt) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_dmapack__DOT__pack_pvld));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_core__DOT__Y_alu_inst__DOT__Y_alu_core_inst__DOT__chn_alu_op_rsci_ld_core_psct) 
              & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_core__DOT__Y_alu_inst__DOT__Y_alu_core_inst__DOT__Y_alu_core_chn_alu_op_rsci_inst__DOT__Y_alu_core_chn_alu_op_rsci_chn_alu_op_wait_ctrl_inst__DOT__chn_alu_op_rsci_ogwt)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2)) 
           & (2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2) 
           & (2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__s 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_cfg_truncate_1_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_cfg_truncate_1_1_itm));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_biwt));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg1[0U] = 0U;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntMulExt_33U_16U_49U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntMulExt_33U_16U_49U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntMulExt_33U_16U_49U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntMulExt_33U_16U_49U_o_mul_itm_2 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg1[3U];
    VL_SHIFTRS_WWI(112,112,6, __Vtemp_2, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg2));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x0000ffffU & __Vtemp_2[3U]);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__Vfuncout[3U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg1[0U] = 0U;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntMulExt_33U_16U_49U_o_mul_1_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntMulExt_33U_16U_49U_o_mul_1_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntMulExt_33U_16U_49U_o_mul_1_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntMulExt_33U_16U_49U_o_mul_1_itm_2 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg1[3U];
    VL_SHIFTRS_WWI(112,112,6, __Vtemp_4, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg2));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_4[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x0000ffffU & __Vtemp_4[3U]);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__Vfuncout[3U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg1[0U] = 0U;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntMulExt_33U_16U_49U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntMulExt_33U_16U_49U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntMulExt_33U_16U_49U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntMulExt_33U_16U_49U_o_mul_itm_2 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg1[3U];
    VL_SHIFTRS_WWI(112,112,6, __Vtemp_6, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg2));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_6[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x0000ffffU & __Vtemp_6[3U]);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__Vfuncout[3U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg1[0U] = 0U;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntMulExt_33U_16U_49U_o_mul_1_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntMulExt_33U_16U_49U_o_mul_1_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntMulExt_33U_16U_49U_o_mul_1_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntMulExt_33U_16U_49U_o_mul_1_itm_2 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg1[3U];
    VL_SHIFTRS_WWI(112,112,6, __Vtemp_8, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg2));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_8[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_8[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_8[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x0000ffffU & __Vtemp_8[3U]);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__Vfuncout[3U];
    vlSelfRef.__PVT__chn_out_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_chn_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_17 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_chn_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_chn_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bawt)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[3U] 
                                           >> 0x0000000fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_obits_fixed_and_2_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[3U] 
                                           >> 0x0000000fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[3U] 
                                           >> 0x0000000fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_obits_fixed_and_2_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[3U] 
                                           >> 0x0000000fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_23 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__chn_out_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_19 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__chn_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_6_mdf 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_5 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__28__vector 
                            = (0x0001ffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__28__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__28__vector 
                                                            >> 0x30U))))) 
                                << 0x00000031U) | vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__28__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__28__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__29__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__29__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__29__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__29__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__32__vector 
                            = (0x0001ffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__32__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__32__vector 
                                                            >> 0x30U))))) 
                                << 0x00000031U) | vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__32__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__32__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__33__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_obits_fixed_and_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__33__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__33__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__33__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__36__vector 
                            = (0x0001ffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__36__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__36__vector 
                                                            >> 0x30U))))) 
                                << 0x00000031U) | vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__36__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__36__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__37__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__37__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__37__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__37__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__40__vector 
                            = (0x0001ffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__40__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__40__vector 
                                                            >> 0x30U))))) 
                                << 0x00000031U) | vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__40__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__40__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__41__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_obits_fixed_and_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__41__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__41__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__41__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_22 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_19) 
           & (2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_out_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bawt))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_6_mdf) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_6_mdf;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_9_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_1_sva 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
                    >> 0x00000031U)) & (0x0003ffffU 
                                        != (0x0003ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
                                                       >> 0x0000001fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_1_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
                             >> 0x00000031U)) | (0U 
                                                 == 
                                                 (0x0003ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
                                                             >> 0x0000001fU)))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_2_sva 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
                    >> 0x00000031U)) & (0x0003ffffU 
                                        != (0x0003ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
                                                       >> 0x0000001fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_2_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
                             >> 0x00000031U)) | (0U 
                                                 == 
                                                 (0x0003ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
                                                             >> 0x0000001fU)))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_3_sva 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
                    >> 0x00000031U)) & (0x0003ffffU 
                                        != (0x0003ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
                                                       >> 0x0000001fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_3_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
                             >> 0x00000031U)) | (0U 
                                                 == 
                                                 (0x0003ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
                                                             >> 0x0000001fU)))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_sva 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
                    >> 0x00000031U)) & (0x0003ffffU 
                                        != (0x0003ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
                                                       >> 0x0000001fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
                             >> 0x00000031U)) | (0U 
                                                 == 
                                                 (0x0003ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
                                                             >> 0x0000001fU)))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1)) 
               | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_17))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_14 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_17)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_obits_fixed_nor_2_nl 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__26__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_1_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__26__input_0 
                        = (0x3fffffffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__26__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__26__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__26__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__26__Vfuncout)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__input_1 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_1_sva) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_1_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_39_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x0fU)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__input_0 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
                                 >> 0x0000001fU)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_1_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_1_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_40_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_obits_fixed_nor_7_nl 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__30__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_2_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__30__input_0 
                        = (0x3fffffffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__30__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__30__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__30__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__30__Vfuncout)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x10U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_2_sva) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_2_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_41_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x1fU)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__input_0 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
                                 >> 0x0000001fU)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_2_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_2_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_42_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_obits_fixed_nor_2_nl 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__34__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_3_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__34__input_0 
                        = (0x3fffffffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__34__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__34__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__34__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__34__Vfuncout)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x20U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_3_sva) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_3_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_43_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x2fU)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__input_0 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
                                 >> 0x0000001fU)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_3_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_3_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_44_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_obits_fixed_nor_7_nl 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__38__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__38__input_0 
                        = (0x3fffffffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__38__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__38__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__38__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__38__Vfuncout)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x30U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_sva) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_45_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x3fU)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__input_0 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
                                 >> 0x0000001fU)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_46_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_and_4_cse 
        = ((IData)(vlSelfRef.NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_14) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_9_nl));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_1_sva 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__27__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_1_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__27__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__27__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__27__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__27__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__27__Vfuncout)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_2_sva 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__31__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_2_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__31__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_obits_fixed_nor_7_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__31__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__31__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__31__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__31__Vfuncout)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_3_sva 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__35__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_3_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__35__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__35__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__35__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__35__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__35__Vfuncout)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_sva 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__39__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__39__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_obits_fixed_nor_7_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__39__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__39__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__39__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__39__Vfuncout)));
}

void Vsim_NV_NVDLA_SDP_CORE_Y_cvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_cvt__1(Vsim_NV_NVDLA_SDP_CORE_Y_cvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_SDP_CORE_Y_cvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_cvt__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__12__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__12__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__12__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__12__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__13__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__13__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__13__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__13__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__sel = 0;
    // Body
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl 
        = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision) 
            >> 1U) & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1)) 
                    | (2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__input_1 
        = (1U & (~ (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt)) 
                     | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision))) 
                    & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__input_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt) 
           & ((2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_25_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__input_1 
        = (1U & (~ ((2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)) 
                    | ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt)) 
                       | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_bypass)))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__input_0 
        = (1U & (~ ((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_8)) 
                    | ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1)) 
                       | ((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                          | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_3_nl))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_19_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse)) 
                 | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_tmp 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__12__sel 
        = (((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
               & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl) 
                  & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)))) | ((IData)(vlSelfRef.__PVT__chn_out_rsci_unreg_inst__DOT__in_0) 
                                               & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)) 
                                                  & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__12__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__12__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_NV_NVDLA_SDP_CORE_Y_cvt_core_nvdla_float_h_ln433_assert_iExpoWidth_le_oExpoWidth_1_sig_mx0w1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__12__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntMulExt_33U_16U_49U_o_and_1_cse 
        = ((IData)(vlSelfRef.NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_14) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_19_nl));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__13__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_7) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt) 
               & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_bypass)) 
                  & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)))) | ((2U 
                                                != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)) 
                                               & ((IData)(vlSelfRef.__PVT__chn_out_rsci_unreg_inst__DOT__in_0) 
                                                  & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_bypass)) 
                                                     & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__13__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__13__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_NV_NVDLA_SDP_CORE_Y_cvt_core_nvdla_int_h_ln346_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__13__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__sel 
        = (2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__input_1 
        = ((2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_17));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_7;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_30_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_7));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__sel 
        = ((2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_tmp;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_47_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp_3 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_bypass) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_2 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp)) 
                 | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_bypass)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_tmp;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_tmp_1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_and_cse 
        = ((IData)(vlSelfRef.NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_14) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_47_nl));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__sel 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_bypass;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_tmp_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_5)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_26_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__sel 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_bypass;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_5;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_tmp_1)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_3_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__sel 
        = (2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_26_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp_3;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_27_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__sel 
        = (2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_3_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_2;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_4_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_27_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp_3;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_28_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__sel 
        = (2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_46_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_3_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_46_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_6_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntMulExt_33U_16U_49U_o_and_cse 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_6_nl)) 
           & (IData)(vlSelfRef.NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_14));
}

void Vsim_NV_NVDLA_SDP_CORE_Y_cvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_cvt__0(Vsim_NV_NVDLA_SDP_CORE_Y_cvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_SDP_CORE_Y_cvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_cvt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_6;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_6 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_7;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_7 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_8;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_8 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_9;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_9 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_10;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_10 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_11;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_11 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_12;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_12 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_13;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_13 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__input_2 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__input_1 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__5__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__5__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__5__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__5__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__5__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__5__sel = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__input_0 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__14__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__14__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__14__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__14__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__14__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__14__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__15__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__15__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__15__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__15__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__15__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__15__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__16__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__16__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__16__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__16__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__16__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__16__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__17__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__17__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__17__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__17__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__17__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__17__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__18__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__18__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__18__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__18__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__18__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__18__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__19__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__19__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__19__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__19__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__19__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__19__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__20__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__20__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__20__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__20__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__20__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__20__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__21__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__21__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__21__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__21__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__21__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__21__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__22__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__22__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__22__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__22__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__22__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__22__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__23__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__23__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__23__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__23__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__23__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__23__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__24__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__24__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__24__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__24__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__24__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__24__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__25__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__25__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__25__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__25__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__25__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__25__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__42__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__42__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__42__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__42__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__42__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__42__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__43__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__43__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__43__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__43__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__43__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__43__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__44__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__44__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__44__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__44__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__44__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__44__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__45__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__45__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__45__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__45__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__45__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__45__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__131__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__131__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__131__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__131__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__131__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__131__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__132__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__132__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__132__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__132__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__132__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__132__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__133__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__133__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__133__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__133__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__133__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__133__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__134__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__134__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__134__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__134__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__134__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__134__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__input_0 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__136__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__136__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__136__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__136__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__136__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__136__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__137__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__137__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__137__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__137__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__137__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__137__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__input_2 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__input_1 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__140__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__140__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__140__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__140__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__140__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__140__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__141__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__141__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__141__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__141__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__141__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__141__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__142__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__142__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__142__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__142__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__142__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__142__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__144__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__144__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__144__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__144__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__144__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__144__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__145__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__145__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__145__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__145__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__145__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__145__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__146__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__146__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__146__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__146__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__146__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__146__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__input_0 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__148__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__148__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__148__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__148__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__148__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__148__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__149__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__149__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__149__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__149__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__149__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__149__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__150__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__150__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__150__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__150__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__150__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__150__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__151__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__151__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__151__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__151__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__151__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__151__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__input_0 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__153__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__153__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__153__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__153__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__153__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__153__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__154__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__154__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__154__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__154__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__154__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__154__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__input_2 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__input_1 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__input_2 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__input_1 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__158__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__158__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__158__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__158__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__158__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__158__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__159__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__159__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__159__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__159__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__159__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__159__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__160__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__160__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__160__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__160__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__160__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__160__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__162__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__162__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__162__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__162__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__162__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__162__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__163__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__163__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__163__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__163__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__163__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__163__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__164__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__164__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__164__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__164__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__164__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__164__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__input_0 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__sel = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__181__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__181__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__181__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__181__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__181__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__181__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__182__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__182__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__182__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__182__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__182__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__182__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__183__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__183__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__183__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__183__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__183__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__183__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__184__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__184__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__184__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__184__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__184__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__184__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__185__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__185__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__185__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__185__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__185__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__185__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__186__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__186__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__186__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__186__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__186__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__186__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__187__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__187__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__187__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__187__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__187__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__187__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__188__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__188__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__188__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__188__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__188__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__188__arg2 = 0;
    QData/*63:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__input_0 = 0;
    QData/*63:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__sel = 0;
    // Body
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__input_0 
        = ((0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_dmapack__DOT__pack_cnt))
            ? (((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_dmapack__DOT__pack_data[1U])) 
                << 0x00000020U) | (QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_dmapack__DOT__pack_data[0U])))
            : ((1U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_dmapack__DOT__pack_cnt))
                ? (((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_dmapack__DOT__pack_data[3U])) 
                    << 0x00000020U) | (QData)((IData)(
                                                      vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_dmapack__DOT__pack_data[2U])))
                : ((2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_dmapack__DOT__pack_cnt))
                    ? (((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_dmapack__DOT__pack_data[5U])) 
                        << 0x00000020U) | (QData)((IData)(
                                                          vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_dmapack__DOT__pack_data[4U])))
                    : ((3U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_dmapack__DOT__pack_cnt))
                        ? (((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_dmapack__DOT__pack_data[7U])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_dmapack__DOT__pack_data[6U])))
                        : 0ULL))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__sel)
            ? __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__input_1
            : __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__input_0);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_1_IntSubExt_16U_32U_33U_o_acc_nl 
        = (0x00000003ffffffffULL & (VL_EXTEND_QQ(34,33, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__123__vector 
                            = (0x0000ffffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__123__Vfuncout 
                            = (((QData)((IData)((0x0001ffffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__123__vector) 
                                                                  >> 0x0fU))))))) 
                                << 0x00000010U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__123__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__123__Vfuncout)) 
                                    - VL_EXTEND_QQ(34,33, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__124__vector 
                            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_offset;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__124__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__124__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__124__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__124__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_3_IntSubExt_16U_32U_33U_o_acc_nl 
        = (0x00000003ffffffffULL & (VL_EXTEND_QQ(34,33, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__125__vector 
                            = (0x0000ffffU & (IData)(
                                                     (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                                      >> 0x20U)));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__125__Vfuncout 
                            = (((QData)((IData)((0x0001ffffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__125__vector) 
                                                                  >> 0x0fU))))))) 
                                << 0x00000010U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__125__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__125__Vfuncout)) 
                                    - VL_EXTEND_QQ(34,33, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__126__vector 
                            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_offset;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__126__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__126__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__126__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__126__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_2_IntSubExt_16U_32U_33U_o_acc_1_nl 
        = (0x00000003ffffffffULL & (VL_EXTEND_QQ(34,33, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__127__vector 
                            = (0x0000ffffU & (IData)(
                                                     (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                                      >> 0x10U)));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__127__Vfuncout 
                            = (((QData)((IData)((0x0001ffffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__127__vector) 
                                                                  >> 0x0fU))))))) 
                                << 0x00000010U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__127__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__127__Vfuncout)) 
                                    - VL_EXTEND_QQ(34,33, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__128__vector 
                            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_offset;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__128__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__128__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__128__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__128__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_4_IntSubExt_16U_32U_33U_o_acc_1_nl 
        = (0x00000003ffffffffULL & (VL_EXTEND_QQ(34,33, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__129__vector 
                            = (0x0000ffffU & (IData)(
                                                     (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                                      >> 0x30U)));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__129__Vfuncout 
                            = (((QData)((IData)((0x0001ffffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__129__vector) 
                                                                  >> 0x0fU))))))) 
                                << 0x00000010U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__129__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__129__Vfuncout)) 
                                    - VL_EXTEND_QQ(34,33, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__130__vector 
                            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_offset;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__130__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__130__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__130__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__130__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_lpi_1_dfm 
        = ((~ (IData)(((0x7c00000000000000ULL != (0x7c00000000000000ULL 
                                                  & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                       | (0U == (0x000003ffU & (IData)(
                                                       (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                                        >> 0x00000030U))))))) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_nan_to_zero));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_3_lpi_1_dfm 
        = ((~ (IData)(((0x00007c0000000000ULL != (0x00007c0000000000ULL 
                                                  & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                       | (0U == (0x000003ffU & (IData)(
                                                       (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                                        >> 0x00000020U))))))) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_nan_to_zero));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_2_lpi_1_dfm 
        = ((~ (IData)(((0x000000007c000000ULL != (0x000000007c000000ULL 
                                                  & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                       | (0U == (0x000003ffU & (IData)(
                                                       (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                                        >> 0x00000010U))))))) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_nan_to_zero));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_1_lpi_1_dfm 
        = ((~ (IData)(((0x0000000000007c00ULL != (0x0000000000007c00ULL 
                                                  & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                       | (0U == (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)))))) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_nan_to_zero));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__16__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__16__input_1 
        = (0x0000001fU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x3aU)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__16__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__16__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__16__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__16__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__14__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__14__input_1 
        = (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x30U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__14__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__14__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__14__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__14__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__19__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_3_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__19__input_1 
        = (0x0000001fU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x2aU)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__19__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__19__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__19__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__19__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__17__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_3_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__17__input_1 
        = (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x20U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__17__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__17__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__17__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__17__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__22__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_2_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__22__input_1 
        = (0x0000001fU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x1aU)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__22__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__22__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__22__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__22__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__20__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_2_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__20__input_1 
        = (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x10U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__20__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__20__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__20__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__20__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__25__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_1_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__25__input_1 
        = (0x0000001fU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x0aU)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__25__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__25__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__25__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__25__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__23__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_1_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__23__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__23__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__23__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__23__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__23__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_11_nl 
        = ((0U == (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                          >> 0x00000030U)))) 
           | (0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_10_nl 
        = ((0U == (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                          >> 0x00000020U)))) 
           | (0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_9_nl 
        = ((0U == (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                          >> 0x00000010U)))) 
           | (0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_8_nl 
        = ((0U == (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt))) 
           | (0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__42__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_11_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__42__input_1 
        = (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x30U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__42__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__42__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__42__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__42__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__15__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_11_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__15__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__15__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__15__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__15__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__15__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__43__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_10_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__43__input_1 
        = (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x20U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__43__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__43__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__43__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_3_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__43__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__18__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_10_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__18__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__18__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__18__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__18__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_3_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__18__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__44__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_9_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__44__input_1 
        = (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x10U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__44__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__44__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__44__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_2_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__44__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__21__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_9_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__21__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__21__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__21__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__21__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_2_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__21__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__45__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_8_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__45__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__45__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__45__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__45__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_1_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__45__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__24__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_8_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__24__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__24__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__24__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__24__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_1_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__24__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_10 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_lpi_1_dfm)) 
           | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_lpi_1_dfm)));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_6 
        = (IData)((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                    >> 9U) | (0U != (0x01ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_lpi_1_dfm)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_6) 
           & (0U == (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl 
        = ((0U != (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_6));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_11 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_3_lpi_1_dfm)) 
           | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_3_lpi_1_dfm)));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_7 
        = (IData)((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                    >> 9U) | (0U != (0x01ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_3_lpi_1_dfm)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_6) 
           & (0U == (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl 
        = ((0U != (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_6));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_12 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_2_lpi_1_dfm)) 
           | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_2_lpi_1_dfm)));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_8 
        = (IData)((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                    >> 9U) | (0U != (0x01ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_2_lpi_1_dfm)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_6) 
           & (0U == (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl 
        = ((0U != (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_6));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_9 
        = (IData)((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                    >> 9U) | (0U != (0x01ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_1_lpi_1_dfm)))));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_13 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_1_lpi_1_dfm)) 
           | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_1_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_6) 
           & (0U == (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl 
        = ((0U != (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_6));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_3_tmp 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_10) 
           & (0x1fU == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm 
        = (1U & (~ ((0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm)) 
                    | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_10))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_71_0 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm)) 
           | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_6));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_lpi_1_dfm 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_6) 
           & (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_10) 
             << 4U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl) 
                        << 3U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_2) 
                                   & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3)) 
                                      | (0U == (3U 
                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))))) 
                                  << 2U))) | (((IData)(
                                                       (((0U 
                                                          == 
                                                          (0x0300U 
                                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))) 
                                                         & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl))) 
                                                        & ((0U 
                                                            != 
                                                            (0x00c0U 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))) 
                                                           | (0U 
                                                              == 
                                                              (3U 
                                                               & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                                  >> 4U)))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                       >> 9U) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                              >> 7U))) 
                                                         | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                               >> 5U) 
                                                              | (1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                                     >> 3U)))) 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_2)) 
                                                            | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                                  >> 1U) 
                                                                 | (1U 
                                                                    == 
                                                                    (2U 
                                                                     & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                                        << 1U)))) 
                                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_6)) 
                                                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_10)))))) 
                                                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_10)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_2_tmp 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_11) 
           & (0x1fU == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm 
        = (1U & (~ ((0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm)) 
                    | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_11))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_79_0 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm)) 
           | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_7));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_3_lpi_1_dfm 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_7) 
           & (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_10) 
             << 4U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl) 
                        << 3U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_2) 
                                   & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3)) 
                                      | (0U == (3U 
                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))))) 
                                  << 2U))) | (((IData)(
                                                       (((0U 
                                                          == 
                                                          (0x0300U 
                                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))) 
                                                         & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl))) 
                                                        & ((0U 
                                                            != 
                                                            (0x00c0U 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))) 
                                                           | (0U 
                                                              == 
                                                              (3U 
                                                               & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                                  >> 4U)))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                       >> 9U) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                              >> 7U))) 
                                                         | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                               >> 5U) 
                                                              | (1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                                     >> 3U)))) 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_2)) 
                                                            | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                                  >> 1U) 
                                                                 | (1U 
                                                                    == 
                                                                    (2U 
                                                                     & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                                        << 1U)))) 
                                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_10)))))) 
                                                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_10)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_1_tmp 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_12) 
           & (0x1fU == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm 
        = (1U & (~ ((0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm)) 
                    | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_12))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_87_0 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm)) 
           | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_8));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_2_lpi_1_dfm 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_8) 
           & (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_10) 
             << 4U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl) 
                        << 3U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_2) 
                                   & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3)) 
                                      | (0U == (3U 
                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))))) 
                                  << 2U))) | (((IData)(
                                                       (((0U 
                                                          == 
                                                          (0x0300U 
                                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))) 
                                                         & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl))) 
                                                        & ((0U 
                                                            != 
                                                            (0x00c0U 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))) 
                                                           | (0U 
                                                              == 
                                                              (3U 
                                                               & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                                  >> 4U)))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                       >> 9U) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                              >> 7U))) 
                                                         | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                               >> 5U) 
                                                              | (1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                                     >> 3U)))) 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_2)) 
                                                            | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                                  >> 1U) 
                                                                 | (1U 
                                                                    == 
                                                                    (2U 
                                                                     & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                                        << 1U)))) 
                                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_6)) 
                                                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_10)))))) 
                                                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_10)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_95_0 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm)) 
           | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_9));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_1_lpi_1_dfm 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_9) 
           & (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_tmp 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_13) 
           & (0x1fU == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm 
        = (1U & (~ ((0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm)) 
                    | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_13))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_10) 
             << 4U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl) 
                        << 3U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_2) 
                                   & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3)) 
                                      | (0U == (3U 
                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))))) 
                                  << 2U))) | (((IData)(
                                                       (((0U 
                                                          == 
                                                          (0x0300U 
                                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))) 
                                                         & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl))) 
                                                        & ((0U 
                                                            != 
                                                            (0x00c0U 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))) 
                                                           | (0U 
                                                              == 
                                                              (3U 
                                                               & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                                  >> 4U)))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                       >> 9U) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                              >> 7U))) 
                                                         | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                               >> 5U) 
                                                              | (1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                                     >> 3U)))) 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_2)) 
                                                            | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                                  >> 1U) 
                                                                 | (1U 
                                                                    == 
                                                                    (2U 
                                                                     & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                                        << 1U)))) 
                                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_10)))))) 
                                                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_10)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_3_nl 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_lpi_1_dfm));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__sel 
        = (IData)(((0ULL == (0x7c00000000000000ULL 
                             & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                   & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                        ? 2U : 1U) >> 1U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__rtn;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__input_0 
        = (6U | (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm) 
                       >> 4U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_7_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_2_nl 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_3_lpi_1_dfm));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__sel 
        = (IData)(((0ULL == (0x00007c0000000000ULL 
                             & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                   & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                        ? 2U : 1U) >> 1U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__input_0 
        = (6U | (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm) 
                       >> 4U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_6_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_1_nl 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_2_lpi_1_dfm));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__sel 
        = (IData)(((0ULL == (0x000000007c000000ULL 
                             & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                   & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                        ? 2U : 1U) >> 1U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__rtn;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__input_0 
        = (6U | (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm) 
                       >> 4U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_5_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_nl 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_1_lpi_1_dfm));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__sel 
        = (IData)(((0ULL == (0x0000000000007c00ULL 
                             & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                   & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                        ? 2U : 1U) >> 1U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__input_0 
        = (6U | (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm) 
                       >> 4U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_4_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl_10 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_3_nl)) 
              | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_3_tmp)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_3_nl)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__rtn))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__input_2 
        = (0x0000000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_3_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_3 
        = (0x0000007fU & ((IData)(1U) + VL_EXTEND_II(7,6, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__176__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_7_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__176__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__176__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__176__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl_12 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_2_nl)) 
              | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_2_tmp)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_2_nl)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_3_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__rtn))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__input_2 
        = (0x0000000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_2_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_2 
        = (0x0000007fU & ((IData)(1U) + VL_EXTEND_II(7,6, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__174__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_6_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__174__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__174__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__174__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl_11 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_1_nl)) 
              | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_1_tmp)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_1_nl)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_2_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__rtn))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__input_2 
        = (0x0000000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_1_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_1 
        = (0x0000007fU & ((IData)(1U) + VL_EXTEND_II(7,6, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__172__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_5_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__172__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__172__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__172__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_nl)) 
              | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_tmp)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_nl)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_1_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__rtn))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__input_2 
        = (0x0000000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out 
        = (0x0000007fU & ((IData)(1U) + VL_EXTEND_II(7,6, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__170__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_4_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__170__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__170__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__170__Vfuncout)))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__132__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_71_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__132__input_1 
        = (3U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_3) 
                 >> 2U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__132__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__132__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__132__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_23_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__132__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__134__sel 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_3));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__134__input_1 
        = (3U & (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_71_0))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__134__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__134__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__134__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_14_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__134__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__187__arg2 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_3));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__187__arg1 
        = (0x003fe000U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_lpi_1_dfm) 
                          << 0x0000000dU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__188__arg2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__187__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__188__arg1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__187__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__188__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x007fffffU & VL_SHIFTL_III(23,23,6, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__188__arg2)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__188__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__187__Vfuncout 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__188__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_sva_2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__187__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__149__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_79_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__149__input_1 
        = (3U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_2) 
                 >> 2U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__149__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__149__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__149__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_21_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__149__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__151__sel 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_2));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__151__input_1 
        = (3U & (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_79_0))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__151__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__151__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__151__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_10_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__151__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__185__arg2 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_2));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__185__arg1 
        = (0x003fe000U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_3_lpi_1_dfm) 
                          << 0x0000000dU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__186__arg2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__185__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__186__arg1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__185__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__186__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x007fffffU & VL_SHIFTL_III(23,23,6, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__186__arg2)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__186__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__185__Vfuncout 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__186__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_sva_2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__185__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__162__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_87_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__162__input_1 
        = (3U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_1) 
                 >> 2U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__162__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__162__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__162__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_19_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__162__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__164__sel 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_1));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__164__input_1 
        = (3U & (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_87_0))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__164__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__164__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__164__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_6_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__164__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__183__arg2 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_1));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__183__arg1 
        = (0x003fe000U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_2_lpi_1_dfm) 
                          << 0x0000000dU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__184__arg2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__183__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__184__arg1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__183__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__184__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x007fffffU & VL_SHIFTL_III(23,23,6, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__184__arg2)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__184__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__183__Vfuncout 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__184__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_sva_2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__183__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__5__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_tmp;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__5__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__5__sel)
            ? 0x0fU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__5__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__5__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_3_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__5__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__144__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_95_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__144__input_1 
        = (3U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out) 
                 >> 2U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__144__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__144__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__144__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_17_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__144__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__146__sel 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__146__input_1 
        = (3U & (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_95_0))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__146__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__146__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__146__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_2_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__146__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__181__arg2 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__181__arg1 
        = (0x003fe000U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_1_lpi_1_dfm) 
                          << 0x0000000dU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__182__arg2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__181__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__182__arg1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__181__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__182__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x007fffffU & VL_SHIFTL_III(23,23,6, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__182__arg2)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__182__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__181__Vfuncout 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__182__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_sva_2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__181__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__133__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_3_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__133__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_23_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__133__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__133__input_1)
            : 1U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__133__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_58_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__133__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_3_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_14_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__input_0 
        = (3U & (((IData)(0x31U) + (0x00000020U | (0x0000001fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__rtn))))) 
                 >> 4U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_42_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__140__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__140__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_sva_2 
                          >> 0x0dU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__140__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__140__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__140__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_30_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__140__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__141__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__141__input_0 
        = (0x000003ffU & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_sva_2);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__141__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__141__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__141__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_31_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__141__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__142__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_3_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__142__input_1 
        = (7U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_sva_2 
                 >> 0x0aU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__142__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__142__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__142__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_22_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__142__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__150__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_2_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__150__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_21_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__150__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__150__input_1)
            : 1U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__150__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_54_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__150__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_2_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_10_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__input_0 
        = (3U & (((IData)(0x31U) + (0x00000020U | (0x0000001fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__rtn))))) 
                 >> 4U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_40_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__158__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__158__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_sva_2 
                          >> 0x0dU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__158__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__158__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__158__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_34_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__158__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__159__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__159__input_0 
        = (0x000003ffU & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_sva_2);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__159__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__159__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__159__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_35_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__159__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__160__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_2_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__160__input_1 
        = (7U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_sva_2 
                 >> 0x0aU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__160__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__160__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__160__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_20_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__160__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__163__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_1_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__163__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_19_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__163__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__163__input_1)
            : 1U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__163__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_50_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__163__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_1_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_6_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__input_0 
        = (3U & (((IData)(0x31U) + (0x00000020U | (0x0000001fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__rtn))))) 
                 >> 4U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_38_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__148__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__148__input_0 
        = (0x000003ffU & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_sva_2);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__148__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__148__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__148__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_32_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__148__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__153__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__153__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_sva_2 
                          >> 0x0dU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__153__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__153__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__153__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_33_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__153__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__154__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_1_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__154__input_1 
        = (7U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_sva_2 
                 >> 0x0aU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__154__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__154__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__154__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_18_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__154__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_30_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__input_1 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_truncate;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_3_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_truncate_mux1h_1_itm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__145__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__145__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_17_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__145__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__145__input_1)
            : 1U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__145__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_46_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__145__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_2_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__input_0 
        = (3U & (((IData)(0x31U) + (0x00000020U | (0x0000001fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__rtn))))) 
                 >> 4U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_36_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__131__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__131__input_0 
        = (0x000003ffU & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_sva_2);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__131__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__131__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__131__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_27_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__131__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__136__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__136__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_sva_2 
                          >> 0x0dU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__136__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__136__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__136__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_29_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__136__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__137__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__137__input_1 
        = (7U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_sva_2 
                 >> 0x0aU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__137__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__137__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__137__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__137__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_3_nl 
        = (7U & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__143__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__143__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_22_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__143__sel)
                            ? 7U : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__143__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__143__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__143__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_2_nl 
        = (7U & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__161__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__161__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_20_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__161__sel)
                            ? 7U : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__161__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__161__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__161__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_1_nl 
        = (7U & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__155__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__155__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_18_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__155__sel)
                            ? 7U : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__155__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__155__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__155__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_nl 
        = (7U & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__138__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__138__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__138__sel)
                            ? 7U : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__138__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__138__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__138__Vfuncout))));
}

void Vsim_NV_NVDLA_SDP_CORE_Y_cvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_cvt__0(Vsim_NV_NVDLA_SDP_CORE_Y_cvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_SDP_CORE_Y_cvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_cvt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__sel = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__238__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__238__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__238__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__238__input_2 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__238__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__238__input_1 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__238__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__238__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__238__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__238__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__239__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__239__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__239__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__239__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__239__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__239__input_1 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__239__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__239__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__239__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__239__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__240__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__240__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__240__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__240__input_2 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__240__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__240__input_1 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__240__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__240__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__240__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__240__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__241__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__241__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__241__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__241__vector = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__242__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__242__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__242__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__242__input_2 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__242__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__242__input_1 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__242__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__242__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__242__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__242__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__243__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__243__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__243__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__243__vector = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__244__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__244__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__244__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__244__input_2 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__244__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__244__input_1 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__244__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__244__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__244__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__244__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__245__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__245__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__245__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__245__vector = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__246__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__246__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__246__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__246__input_2 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__246__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__246__input_1 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__246__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__246__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__246__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__246__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__247__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__247__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__247__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__247__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__247__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__247__input_1 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__247__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__247__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__247__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__247__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__248__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__248__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__248__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__248__input_2 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__248__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__248__input_1 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__248__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__248__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__248__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__248__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__249__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__249__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__249__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__249__vector = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__250__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__250__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__250__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__250__input_2 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__250__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__250__input_1 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__250__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__250__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__250__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__250__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__251__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__251__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__251__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__251__vector = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__252__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__252__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__252__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__252__input_2 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__252__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__252__input_1 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__252__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__252__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__252__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__252__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__253__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__253__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__253__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__253__vector = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__254__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__254__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__254__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__254__input_2 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__254__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__254__input_1 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__254__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__254__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__254__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__254__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__255__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__255__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__255__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__255__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__255__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__255__input_1 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__255__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__255__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__255__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__255__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__256__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__256__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__256__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__256__input_2 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__256__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__256__input_1 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__256__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__256__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__256__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__256__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__257__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__257__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__257__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__257__vector = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__258__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__258__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__258__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__258__input_2 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__258__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__258__input_1 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__258__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__258__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__258__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__258__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__259__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__259__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__259__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__259__vector = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__260__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__260__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__260__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__260__input_2 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__260__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__260__input_1 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__260__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__260__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__260__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__260__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__261__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__261__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__261__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__261__vector = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__262__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__262__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__262__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__262__input_2 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__262__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__262__input_1 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__262__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__262__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__262__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__262__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__263__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__263__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__263__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__263__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__263__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__263__input_1 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__263__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__263__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__263__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__263__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__264__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__264__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__264__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__264__input_2 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__264__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__264__input_1 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__264__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__264__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__264__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__264__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__265__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__265__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__265__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__265__vector = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__266__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__266__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__266__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__266__input_2 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__266__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__266__input_1 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__266__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__266__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__266__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__266__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__267__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__267__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__267__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__267__vector = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__268__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__268__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__268__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__268__input_2 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__268__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__268__input_1 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__268__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__268__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__268__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__268__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__269__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__269__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__269__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__269__vector = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__270__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__270__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__270__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__270__input_2 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__270__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__270__input_1 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__270__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__270__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__270__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__270__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__271__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__271__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__271__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__271__vector = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__272__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__272__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__272__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__272__input_2 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__272__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__272__input_1 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__272__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__272__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__272__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__272__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__273__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__273__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__273__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__273__vector = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__274__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__274__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__274__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__274__input_2 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__274__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__274__input_1 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__274__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__274__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__274__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__274__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__275__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__275__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__275__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__275__vector = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__276__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__276__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__276__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__276__input_2 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__276__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__276__input_1 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__276__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__276__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__276__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__276__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__277__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__277__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__277__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__277__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__278__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__278__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__278__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__278__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__278__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__278__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__278__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__278__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__279__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__279__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__279__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__279__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__279__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__279__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__279__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__279__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__280__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__280__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__280__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__280__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__280__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__280__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__280__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__280__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__281__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__281__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__281__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__281__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__281__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__281__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__281__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__281__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__282__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__282__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__282__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__282__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__282__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__282__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__282__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__282__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__283__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__283__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__283__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__283__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__283__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__283__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__283__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__283__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__284__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__284__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__284__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__284__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__284__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__284__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__284__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__284__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__285__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__285__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__285__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__285__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__285__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__285__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__285__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__285__sel = 0;
    QData/*48:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__286__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__286__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__286__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__286__vector = 0;
    QData/*48:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__287__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__287__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__287__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__287__vector = 0;
    QData/*48:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__288__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__288__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__288__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__288__vector = 0;
    QData/*48:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__289__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__289__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__289__vector;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__289__vector = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__290__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__290__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__290__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__290__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__290__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__290__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__290__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__290__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__291__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__291__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__291__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__291__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__291__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__291__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__291__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__291__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__292__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__292__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__292__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__292__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__292__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__292__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__293__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__293__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__293__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__293__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__293__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__293__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__294__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__294__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__294__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__294__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__294__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__294__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__294__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__294__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__295__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__295__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__295__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__295__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__295__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__295__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__295__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__295__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__296__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__296__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__296__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__296__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__296__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__296__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__297__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__297__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__297__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__297__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__297__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__297__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__297__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__297__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__298__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__298__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__298__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__298__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__298__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__298__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__298__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__298__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__299__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__299__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__299__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__299__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__299__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__299__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__300__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__300__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__300__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__300__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__300__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__300__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__301__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__301__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__301__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__301__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__301__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__301__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__302__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__302__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__302__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__302__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__302__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__302__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__302__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__302__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__303__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__303__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__303__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__303__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__303__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__303__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__303__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__303__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__304__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__304__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__304__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__304__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__304__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__304__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__sel = 0;
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__Vfuncout;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__Vfuncout);
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg1;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg2 = 0;
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__Vfuncout;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__Vfuncout);
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg1;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg2 = 0;
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__Vfuncout;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__Vfuncout);
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg1;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg2 = 0;
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__Vfuncout;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__Vfuncout);
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg1;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg2 = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_8;
    // Body
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_biwt)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_out_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_biwt)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_in_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_ld_core_psct 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_ld_core_psct_mx0c0;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_in_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_iswt0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_19;
        }
    } else {
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_6_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
    } else {
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_d_bfwt 
            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt;
        if (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_and_cse) {
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_8 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_st_10 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_bypass;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_and_cse) {
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__239__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__239__input_0 
                = (7U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x0aU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__239__input_1 
                = (7U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_1_sva 
                         >> 9U));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__239__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_5_12_10_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__239__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__239__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__239__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__239__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__239__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__239__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__239__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_12_10 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__239__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__247__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__247__input_0 
                = (7U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x1aU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__247__input_1 
                = (7U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_2_sva 
                         >> 9U));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__247__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_5_12_10_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__247__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__247__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__247__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__247__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__247__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__247__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__247__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_44_42 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__247__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__255__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__255__input_0 
                = (7U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x2aU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__255__input_1 
                = (7U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_3_sva 
                         >> 9U));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__255__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_5_12_10_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__255__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__255__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__255__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__255__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__255__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__255__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__255__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_76_74 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__255__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__263__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__263__input_0 
                = (7U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x3aU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__263__input_1 
                = (7U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_sva 
                         >> 9U));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__263__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_5_12_10_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__263__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__263__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__263__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__263__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__263__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__263__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__263__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_108_106 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__263__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__238__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__238__input_0 
                = (0x000001ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                          >> 1U)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__238__input_1 
                = (0x000001ffU & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_1_sva);
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__238__input_2 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_5_9_0_1) 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__238__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__238__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__238__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__238__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__238__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__238__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__238__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_9_1 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__238__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__246__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__246__input_0 
                = (0x000001ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                          >> 0x11U)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__246__input_1 
                = (0x000001ffU & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_2_sva);
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__246__input_2 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_5_9_0_1) 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__246__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__246__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__246__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__246__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__246__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__246__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__246__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_41_33 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__246__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__254__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__254__input_0 
                = (0x000001ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                          >> 0x21U)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__254__input_1 
                = (0x000001ffU & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_3_sva);
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__254__input_2 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_5_9_0_1) 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__254__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__254__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__254__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__254__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__254__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__254__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__254__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_73_65 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__254__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__262__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__262__input_0 
                = (0x000001ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                          >> 0x31U)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__262__input_1 
                = (0x000001ffU & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_sva);
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__262__input_2 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_5_9_0_1) 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__262__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__262__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__262__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__262__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__262__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__262__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__262__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_105_97 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__262__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__240__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__241__vector 
                = (7U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x0dU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__241__Vfuncout 
                = ((0x000003f8U & ((- (IData)((1U & 
                                               ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__241__vector) 
                                                >> 2U)))) 
                                   << 3U)) | (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__241__vector));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__240__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__241__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__240__input_1 
                = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_1_sva 
                                  >> 0x0cU));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__240__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_5_22_13_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__240__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__240__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__240__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__240__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__240__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__240__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__240__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_22_13 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__240__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__248__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__249__vector 
                = (7U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x1dU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__249__Vfuncout 
                = ((0x000003f8U & ((- (IData)((1U & 
                                               ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__249__vector) 
                                                >> 2U)))) 
                                   << 3U)) | (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__249__vector));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__248__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__249__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__248__input_1 
                = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_2_sva 
                                  >> 0x0cU));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__248__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_5_22_13_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__248__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__248__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__248__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__248__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__248__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__248__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__248__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_54_45 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__248__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__256__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__257__vector 
                = (7U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x2dU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__257__Vfuncout 
                = ((0x000003f8U & ((- (IData)((1U & 
                                               ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__257__vector) 
                                                >> 2U)))) 
                                   << 3U)) | (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__257__vector));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__256__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__257__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__256__input_1 
                = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_3_sva 
                                  >> 0x0cU));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__256__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_5_22_13_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__256__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__256__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__256__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__256__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__256__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__256__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__256__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_86_77 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__256__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__264__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__265__vector 
                = (7U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x3dU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__265__Vfuncout 
                = ((0x000003f8U & ((- (IData)((1U & 
                                               ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__265__vector) 
                                                >> 2U)))) 
                                   << 3U)) | (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__265__vector));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__264__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_10_3__265__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__264__input_1 
                = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_sva 
                                  >> 0x0cU));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__264__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_5_22_13_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__264__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__264__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__264__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__264__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__264__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__264__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__264__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_118_109 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__264__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__242__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__243__vector 
                = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x0fU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__243__Vfuncout 
                = (3U & (- (IData)((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__243__vector))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__242__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__243__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__242__input_1 
                = (3U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_1_sva 
                         >> 0x1aU));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__242__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_1_lpi_1_dfm_5_1_0_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__242__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__242__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__242__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__242__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__242__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__242__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__242__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_28_27 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__242__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__244__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__245__vector 
                = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x0fU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__245__Vfuncout 
                = (3U & (- (IData)((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__245__vector))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__244__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__245__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__244__input_1 
                = (3U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_1_sva 
                         >> 0x1cU));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__244__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_1_lpi_1_dfm_5_3_2_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__244__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__244__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__244__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__244__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__244__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__244__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__244__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_30_29 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__244__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__250__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__251__vector 
                = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x1fU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__251__Vfuncout 
                = (3U & (- (IData)((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__251__vector))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__250__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__251__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__250__input_1 
                = (3U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_2_sva 
                         >> 0x1aU));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__250__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_2_lpi_1_dfm_5_1_0_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__250__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__250__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__250__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__250__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__250__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__250__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__250__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_60_59 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__250__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__252__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__253__vector 
                = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x1fU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__253__Vfuncout 
                = (3U & (- (IData)((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__253__vector))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__252__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__253__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__252__input_1 
                = (3U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_2_sva 
                         >> 0x1cU));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__252__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_2_lpi_1_dfm_5_3_2_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__252__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__252__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__252__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__252__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__252__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__252__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__252__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_62_61 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__252__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__258__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__259__vector 
                = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x2fU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__259__Vfuncout 
                = (3U & (- (IData)((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__259__vector))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__258__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__259__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__258__input_1 
                = (3U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_3_sva 
                         >> 0x1aU));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__258__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_3_lpi_1_dfm_5_1_0_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__258__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__258__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__258__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__258__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__258__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__258__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__258__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_92_91 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__258__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__260__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__261__vector 
                = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x2fU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__261__Vfuncout 
                = (3U & (- (IData)((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__261__vector))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__260__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__261__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__260__input_1 
                = (3U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_3_sva 
                         >> 0x1cU));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__260__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_3_lpi_1_dfm_5_3_2_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__260__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__260__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__260__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__260__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__260__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__260__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__260__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_94_93 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__260__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__266__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__267__vector 
                = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x3fU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__267__Vfuncout 
                = (3U & (- (IData)((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__267__vector))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__266__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__267__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__266__input_1 
                = (3U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_sva 
                         >> 0x1aU));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__266__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_lpi_1_dfm_5_1_0_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__266__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__266__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__266__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__266__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__266__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__266__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__266__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_124_123 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__266__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__268__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__269__vector 
                = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x3fU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__269__Vfuncout 
                = (3U & (- (IData)((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__269__vector))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__268__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_2_1__269__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__268__input_1 
                = (3U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_sva 
                         >> 0x1cU));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__268__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_lpi_1_dfm_5_3_2_1;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__268__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__268__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__268__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__268__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__268__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__268__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__268__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_126_125 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__268__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_19) 
                 & (2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6))) 
                | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_22)))) {
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__278__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_22;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__278__input_1 
                = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_5_9_0_1));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__278__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_39_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__278__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__278__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__278__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__278__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__278__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__279__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_22;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__279__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_itm_2;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__279__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_40_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__279__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__279__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__279__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__279__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_31 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__279__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__280__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_22;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__280__input_1 
                = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_5_9_0_1));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__280__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_41_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__280__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__280__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__280__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__280__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_32 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__280__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__281__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_22;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__281__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_3_itm_2;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__281__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_42_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__281__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__281__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__281__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__281__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_63 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__281__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__282__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_22;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__282__input_1 
                = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_5_9_0_1));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__282__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_43_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__282__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__282__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__282__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__282__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_64 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__282__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__283__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_22;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__283__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_6_itm_2;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__283__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_44_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__283__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__283__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__283__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__283__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_95 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__283__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__284__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_22;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__284__input_1 
                = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_5_9_0_1));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__284__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_45_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__284__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__284__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__284__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__284__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_96 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__284__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__285__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_22;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__285__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_9_itm_2;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__285__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_46_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__285__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__285__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__285__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__285__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_127 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__285__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntMulExt_33U_16U_49U_o_and_cse) {
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__287__vector 
                = (0x0001ffffffffffffULL & VL_MULS_QQQ(49, 
                                                       (0x0001ffffffffffffULL 
                                                        & VL_EXTENDS_QQ(49,33, 
                                                                        (0x00000001ffffffffULL 
                                                                         & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_3_IntSubExt_16U_32U_33U_o_acc_nl))), 
                                                       (0x0001ffffffffffffULL 
                                                        & VL_EXTENDS_QI(49,16, (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_scale)))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__287__Vfuncout 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__287__vector;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntMulExt_33U_16U_49U_o_mul_itm_2 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__287__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__286__vector 
                = (0x0001ffffffffffffULL & VL_MULS_QQQ(49, 
                                                       (0x0001ffffffffffffULL 
                                                        & VL_EXTENDS_QQ(49,33, 
                                                                        (0x00000001ffffffffULL 
                                                                         & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_1_IntSubExt_16U_32U_33U_o_acc_nl))), 
                                                       (0x0001ffffffffffffULL 
                                                        & VL_EXTENDS_QI(49,16, (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_scale)))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__286__Vfuncout 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__286__vector;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntMulExt_33U_16U_49U_o_mul_itm_2 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__286__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntMulExt_33U_16U_49U_o_and_1_cse) {
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__289__vector 
                = (0x0001ffffffffffffULL & VL_MULS_QQQ(49, 
                                                       (0x0001ffffffffffffULL 
                                                        & VL_EXTENDS_QQ(49,33, 
                                                                        (0x00000001ffffffffULL 
                                                                         & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_4_IntSubExt_16U_32U_33U_o_acc_1_nl))), 
                                                       (0x0001ffffffffffffULL 
                                                        & VL_EXTENDS_QI(49,16, (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_scale)))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__289__Vfuncout 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__289__vector;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntMulExt_33U_16U_49U_o_mul_1_itm_2 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__289__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__288__vector 
                = (0x0001ffffffffffffULL & VL_MULS_QQQ(49, 
                                                       (0x0001ffffffffffffULL 
                                                        & VL_EXTENDS_QQ(49,33, 
                                                                        (0x00000001ffffffffULL 
                                                                         & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_2_IntSubExt_16U_32U_33U_o_acc_1_nl))), 
                                                       (0x0001ffffffffffffULL 
                                                        & VL_EXTENDS_QI(49,16, (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_scale)))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__288__Vfuncout 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__288__vector;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntMulExt_33U_16U_49U_o_mul_1_itm_2 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2u_49_49__288__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_and_4_cse) {
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_bypass;
        }
    } else {
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_d_bfwt = 0ULL;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_8 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_12_10 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_44_42 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_76_74 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_108_106 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_9_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_41_33 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_73_65 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_105_97 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_22_13 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_54_45 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_86_77 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_118_109 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_0 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_31 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_32 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_63 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_64 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_95 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_96 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_127 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_28_27 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_30_29 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_60_59 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_62_61 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_92_91 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_94_93 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_124_123 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_126_125 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntMulExt_33U_16U_49U_o_mul_itm_2 = 0ULL;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntMulExt_33U_16U_49U_o_mul_itm_2 = 0ULL;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntMulExt_33U_16U_49U_o_mul_1_itm_2 = 0ULL;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntMulExt_33U_16U_49U_o_mul_1_itm_2 = 0ULL;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_st_10 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2 = 0U;
    }
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_3_nl 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_st_10));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen) 
               & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt)) 
              & (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision))) 
             & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bawt) 
                       | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_chn_out_rsci_ld_core_psct_cse)))) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_bypass))))) {
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_cfg_truncate_1_itm 
                = (3U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_truncate_mux1h_1_itm) 
                         >> 4U));
        }
        if (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_and_cse) {
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__270__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__271__vector 
                = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x0fU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__271__Vfuncout 
                = (0x0000000fU & (- (IData)((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__271__vector))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__270__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__271__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__270__input_1 
                = (0x0000000fU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_1_sva 
                                  >> 0x16U));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__270__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_cfg_truncate_1_1_itm;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__270__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__270__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__270__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__270__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__270__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__270__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__270__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_26_23 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__270__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__272__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__273__vector 
                = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x1fU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__273__Vfuncout 
                = (0x0000000fU & (- (IData)((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__273__vector))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__272__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__273__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__272__input_1 
                = (0x0000000fU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_2_sva 
                                  >> 0x16U));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__272__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_2_lpi_1_dfm_6;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__272__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__272__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__272__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__272__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__272__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__272__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__272__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_58_55 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__272__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__274__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__275__vector 
                = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x2fU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__275__Vfuncout 
                = (0x0000000fU & (- (IData)((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__275__vector))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__274__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__275__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__274__input_1 
                = (0x0000000fU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_3_sva 
                                  >> 0x16U));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__274__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_3_lpi_1_dfm_6;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__274__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__274__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__274__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__274__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__274__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__274__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__274__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_90_87 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__274__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__276__sel 
                = (((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__277__vector 
                = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                                 >> 0x3fU)));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__277__Vfuncout 
                = (0x0000000fU & (- (IData)((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__277__vector))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__276__input_0 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__signext_4_1__277__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__276__input_1 
                = (0x0000000fU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_sva 
                                  >> 0x16U));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__276__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_lpi_1_dfm_6;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__276__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__276__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__276__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__276__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__276__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__276__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__276__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_122_119 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__276__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_19) 
                | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_23)))) {
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_chn_out_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_23)));
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_17))) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_28_nl))) {
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt;
        }
    } else {
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_cfg_truncate_1_itm = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_26_23 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_58_55 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_90_87 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_122_119 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_chn_out_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 = 0ULL;
    }
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_14) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_25_nl))) {
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__290__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__293__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_3_tmp;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__290__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_1_lpi_1_dfm;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__293__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_3_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_9_itm_2 
                = (IData)(((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                            >> 0x0000003fU) & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_lpi_1_dfm))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__290__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_27_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_lpi_1_dfm_5_3_2_1 
                = (3U & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_58_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm)))) 
                         | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_3_tmp)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_lpi_1_dfm_5_1_0_1 
                = (3U & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_42_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm)))) 
                         | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_3_tmp)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_5_12_10_1 
                = (7U & (~ ([&]() {
                            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__292__sel 
                                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_tmp;
                            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__292__input_0 
                                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_nl;
                            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__292__sel)
                                    ? 7U : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__292__input_0));
                            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__292__Vfuncout 
                                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
                        }(), (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__292__Vfuncout))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__293__sel)
                    ? 0x0fU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__293__input_0));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_1_lpi_1_dfm_5_3_2_1 
                = (3U & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_46_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm)))) 
                         | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_tmp)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_1_lpi_1_dfm_5_1_0_1 
                = (3U & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_36_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm)))) 
                         | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_tmp)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_itm_2 
                = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x0fU)) & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_1_lpi_1_dfm))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_6_itm_2 
                = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x2fU)) & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_3_lpi_1_dfm))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_3_lpi_1_dfm_5_3_2_1 
                = (3U & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_54_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm)))) 
                         | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_2_tmp)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_3_lpi_1_dfm_5_1_0_1 
                = (3U & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_40_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm)))) 
                         | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_2_tmp)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_2_lpi_1_dfm_5_3_2_1 
                = (3U & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_50_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm)))) 
                         | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_1_tmp)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_2_lpi_1_dfm_5_1_0_1 
                = (3U & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_38_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm)))) 
                         | (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_1_tmp)))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_3_itm_2 
                = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x1fU)) & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_2_lpi_1_dfm))));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__290__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__290__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__290__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__293__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__290__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_lpi_1_dfm_6 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__293__Vfuncout;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_5_9_0_1 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__290__Vfuncout;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_5_12_10_1 
                = (7U & (~ ([&]() {
                            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__296__sel 
                                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_3_tmp;
                            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__296__input_0 
                                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_3_nl;
                            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__296__sel)
                                    ? 7U : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__296__input_0));
                            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__296__Vfuncout 
                                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
                        }(), (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__296__Vfuncout))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__300__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_2_tmp;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__291__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_5_12_10_1 
                = (7U & (~ ([&]() {
                            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__299__sel 
                                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_1_tmp;
                            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__299__input_0 
                                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_1_nl;
                            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__299__sel)
                                    ? 7U : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__299__input_0));
                            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__299__Vfuncout 
                                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
                        }(), (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__299__Vfuncout))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__300__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_2_nl;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__291__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_1_lpi_1_dfm;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__300__sel)
                    ? 0x0fU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__300__input_0));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_5_12_10_1 
                = (7U & (~ ([&]() {
                            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__304__sel 
                                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_2_tmp;
                            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__304__input_0 
                                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_2_nl;
                            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__304__sel)
                                    ? 7U : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__304__input_0));
                            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__304__Vfuncout 
                                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
                        }(), (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__304__Vfuncout))));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__291__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_29_nl;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__300__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__291__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__291__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__291__input_0));
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_3_lpi_1_dfm_6 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__300__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__291__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__301__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_1_tmp;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_5_22_13_1 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__291__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__301__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_1_nl;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__294__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl_10;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__301__sel)
                    ? 0x0fU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__301__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__294__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_lpi_1_dfm;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__301__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__294__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_30_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_2_lpi_1_dfm_6 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__301__Vfuncout;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__294__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__294__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__294__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__294__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_5_22_13_1 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__294__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__295__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl_10;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__295__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_lpi_1_dfm;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__295__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_31_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__295__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__295__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__295__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__295__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_5_9_0_1 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__295__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__297__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl_11;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__297__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_2_lpi_1_dfm;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__297__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_32_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__297__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__297__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__297__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__297__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_5_9_0_1 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__297__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__298__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl_11;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__298__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_2_lpi_1_dfm;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__298__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_33_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__298__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__298__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__298__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__298__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_5_22_13_1 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__298__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__302__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl_12;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__302__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_3_lpi_1_dfm;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__302__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_34_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__302__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__302__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__302__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__302__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_5_22_13_1 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__302__Vfuncout;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__303__sel 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl_12;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__303__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_3_lpi_1_dfm;
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__303__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_35_nl;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__303__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__303__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__303__input_0));
            __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__303__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_5_9_0_1 
                = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__303__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_9_itm_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_5_9_0_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_lpi_1_dfm_5_3_2_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_lpi_1_dfm_5_1_0_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_5_22_13_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_5_12_10_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_lpi_1_dfm_6 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_5_22_13_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_5_9_0_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_5_12_10_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_1_lpi_1_dfm_5_3_2_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_1_lpi_1_dfm_5_1_0_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_itm_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_6_itm_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_5_9_0_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_3_lpi_1_dfm_5_3_2_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_3_lpi_1_dfm_5_1_0_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_5_22_13_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_5_12_10_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_3_lpi_1_dfm_6 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_2_lpi_1_dfm_6 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_5_22_13_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_5_9_0_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_5_12_10_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_2_lpi_1_dfm_5_3_2_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_2_lpi_1_dfm_5_1_0_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_3_itm_2 = 0U;
    }
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_and_4_cse) {
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision;
        }
        if (((((~ ((2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)) 
                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_bypass))) 
               & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse)) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt))) {
            vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_cfg_truncate_1_1_itm 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_truncate_mux1h_1_itm));
        }
    } else {
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_cfg_truncate_1_1_itm = 0U;
    }
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_core__DOT__Y_mul_inst__DOT__Y_mul_core_inst__DOT__chn_mul_op_rsci_ld_core_psct) 
              & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_core__DOT__Y_mul_inst__DOT__Y_mul_core_inst__DOT__Y_mul_core_chn_mul_op_rsci_inst__DOT__Y_mul_core_chn_mul_op_rsci_chn_mul_op_wait_ctrl_inst__DOT__chn_mul_op_rsci_ogwt)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__chn_in_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_ld_core_psct) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_ogwt));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_ogwt) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_dmapack__DOT__pack_pvld));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2)) 
           & (2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2) 
           & (2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__s 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_cfg_truncate_1_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_cfg_truncate_1_1_itm));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_biwt));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg1[0U] = 0U;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntMulExt_33U_16U_49U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntMulExt_33U_16U_49U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntMulExt_33U_16U_49U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntMulExt_33U_16U_49U_o_mul_itm_2 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg1[3U];
    VL_SHIFTRS_WWI(112,112,6, __Vtemp_2, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg2));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x0000ffffU & __Vtemp_2[3U]);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__Vfuncout[3U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg1[0U] = 0U;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntMulExt_33U_16U_49U_o_mul_1_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntMulExt_33U_16U_49U_o_mul_1_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntMulExt_33U_16U_49U_o_mul_1_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntMulExt_33U_16U_49U_o_mul_1_itm_2 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg1[3U];
    VL_SHIFTRS_WWI(112,112,6, __Vtemp_4, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg2));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_4[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x0000ffffU & __Vtemp_4[3U]);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__Vfuncout[3U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg1[0U] = 0U;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntMulExt_33U_16U_49U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntMulExt_33U_16U_49U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntMulExt_33U_16U_49U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntMulExt_33U_16U_49U_o_mul_itm_2 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg1[3U];
    VL_SHIFTRS_WWI(112,112,6, __Vtemp_6, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg2));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_6[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x0000ffffU & __Vtemp_6[3U]);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__Vfuncout[3U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg1[0U] = 0U;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntMulExt_33U_16U_49U_o_mul_1_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntMulExt_33U_16U_49U_o_mul_1_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntMulExt_33U_16U_49U_o_mul_1_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntMulExt_33U_16U_49U_o_mul_1_itm_2 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg1[3U];
    VL_SHIFTRS_WWI(112,112,6, __Vtemp_8, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg2));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_8[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_8[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_8[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x0000ffffU & __Vtemp_8[3U]);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__Vfuncout[3U];
    vlSelfRef.__PVT__chn_out_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_chn_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_17 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_chn_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_chn_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bawt)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[3U] 
                                           >> 0x0000000fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_obits_fixed_and_2_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[3U] 
                                           >> 0x0000000fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[3U] 
                                           >> 0x0000000fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_obits_fixed_and_2_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[3U] 
                                           >> 0x0000000fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_23 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__chn_out_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_19 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__chn_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_6_mdf 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_5 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__218__vector 
                            = (0x0001ffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__218__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__218__vector 
                                                            >> 0x30U))))) 
                                << 0x00000031U) | vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__218__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__218__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__219__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__219__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__219__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__219__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__222__vector 
                            = (0x0001ffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__222__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__222__vector 
                                                            >> 0x30U))))) 
                                << 0x00000031U) | vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__222__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__222__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__223__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_obits_fixed_and_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__223__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__223__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__223__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__226__vector 
                            = (0x0001ffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__226__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__226__vector 
                                                            >> 0x30U))))) 
                                << 0x00000031U) | vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__226__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__226__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__227__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__227__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__227__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__227__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__230__vector 
                            = (0x0001ffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__230__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__230__vector 
                                                            >> 0x30U))))) 
                                << 0x00000031U) | vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__230__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__230__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__231__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_obits_fixed_and_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__231__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__231__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__231__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_22 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_19) 
           & (2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_out_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bawt))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_6_mdf) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_6_mdf;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_9_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_1_sva 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
                    >> 0x00000031U)) & (0x0003ffffU 
                                        != (0x0003ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
                                                       >> 0x0000001fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_1_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
                             >> 0x00000031U)) | (0U 
                                                 == 
                                                 (0x0003ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
                                                             >> 0x0000001fU)))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_2_sva 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
                    >> 0x00000031U)) & (0x0003ffffU 
                                        != (0x0003ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
                                                       >> 0x0000001fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_2_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
                             >> 0x00000031U)) | (0U 
                                                 == 
                                                 (0x0003ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
                                                             >> 0x0000001fU)))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_3_sva 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
                    >> 0x00000031U)) & (0x0003ffffU 
                                        != (0x0003ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
                                                       >> 0x0000001fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_3_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
                             >> 0x00000031U)) | (0U 
                                                 == 
                                                 (0x0003ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
                                                             >> 0x0000001fU)))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_sva 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
                    >> 0x00000031U)) & (0x0003ffffU 
                                        != (0x0003ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
                                                       >> 0x0000001fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
                             >> 0x00000031U)) | (0U 
                                                 == 
                                                 (0x0003ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
                                                             >> 0x0000001fU)))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1)) 
               | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_17))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_14 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_17)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_obits_fixed_nor_2_nl 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__216__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_1_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__216__input_0 
                        = (0x3fffffffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__216__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__216__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__216__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__216__Vfuncout)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__input_1 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_1_sva) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_1_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_39_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x0fU)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__input_0 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
                                 >> 0x0000001fU)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_1_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_1_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_40_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_obits_fixed_nor_7_nl 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__220__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_2_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__220__input_0 
                        = (0x3fffffffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__220__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__220__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__220__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__220__Vfuncout)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x10U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_2_sva) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_2_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_41_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x1fU)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__input_0 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
                                 >> 0x0000001fU)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_2_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_2_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_42_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_obits_fixed_nor_2_nl 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__224__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_3_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__224__input_0 
                        = (0x3fffffffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__224__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__224__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__224__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__224__Vfuncout)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x20U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_3_sva) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_3_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_43_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x2fU)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__input_0 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
                                 >> 0x0000001fU)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_3_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_3_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_44_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_obits_fixed_nor_7_nl 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__228__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__228__input_0 
                        = (0x3fffffffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__228__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__228__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__228__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__228__Vfuncout)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x30U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_sva) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_45_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x3fU)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__input_0 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
                                 >> 0x0000001fU)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_46_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_and_4_cse 
        = ((IData)(vlSelfRef.NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_14) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_9_nl));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_1_sva 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__217__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_1_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__217__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__217__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__217__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__217__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__217__Vfuncout)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_2_sva 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__221__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_2_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__221__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_obits_fixed_nor_7_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__221__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__221__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__221__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__221__Vfuncout)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_3_sva 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__225__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_3_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__225__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__225__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__225__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__225__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__225__Vfuncout)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_sva 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__229__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__229__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_obits_fixed_nor_7_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__229__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__229__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__229__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__229__Vfuncout)));
}

void Vsim_NV_NVDLA_SDP_CORE_Y_cvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_cvt__1(Vsim_NV_NVDLA_SDP_CORE_Y_cvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_SDP_CORE_Y_cvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_cvt__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__202__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__202__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__202__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__202__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__203__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__203__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__203__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__203__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__sel = 0;
    // Body
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl 
        = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision) 
            >> 1U) & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1)) 
                    | (2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__input_1 
        = (1U & (~ (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt)) 
                     | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision))) 
                    & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__input_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt) 
           & ((2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_25_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__input_1 
        = (1U & (~ ((2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)) 
                    | ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt)) 
                       | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_bypass)))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__input_0 
        = (1U & (~ ((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_8)) 
                    | ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1)) 
                       | ((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                          | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_3_nl))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_19_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse)) 
                 | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_tmp 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__202__sel 
        = (((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
               & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl) 
                  & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)))) | ((IData)(vlSelfRef.__PVT__chn_out_rsci_unreg_inst__DOT__in_0) 
                                               & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)) 
                                                  & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__202__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__202__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_NV_NVDLA_SDP_CORE_Y_cvt_core_nvdla_float_h_ln433_assert_iExpoWidth_le_oExpoWidth_1_sig_mx0w1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__202__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntMulExt_33U_16U_49U_o_and_1_cse 
        = ((IData)(vlSelfRef.NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_14) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_19_nl));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__203__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_7) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt) 
               & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_bypass)) 
                  & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)))) | ((2U 
                                                != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)) 
                                               & ((IData)(vlSelfRef.__PVT__chn_out_rsci_unreg_inst__DOT__in_0) 
                                                  & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_bypass)) 
                                                     & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__203__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__203__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_NV_NVDLA_SDP_CORE_Y_cvt_core_nvdla_int_h_ln346_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__203__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__sel 
        = (2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__input_1 
        = ((2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_17));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_7;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_30_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_7));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__sel 
        = ((2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_tmp;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_47_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp_3 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_bypass) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_2 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp)) 
                 | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_bypass)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_tmp;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_tmp_1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_and_cse 
        = ((IData)(vlSelfRef.NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_14) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_47_nl));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__sel 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_bypass;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_tmp_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_5)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_26_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__sel 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_bypass;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_5;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_tmp_1)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_3_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__sel 
        = (2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_26_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp_3;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_27_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__sel 
        = (2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_3_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_2;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_4_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_27_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp_3;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_28_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__sel 
        = (2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_46_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_3_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_46_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_6_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntMulExt_33U_16U_49U_o_and_cse 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_6_nl)) 
           & (IData)(vlSelfRef.NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_14));
}

void Vsim_NV_NVDLA_SDP_CORE_Y_cvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_cvt__0(Vsim_NV_NVDLA_SDP_CORE_Y_cvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_SDP_CORE_Y_cvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_cvt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_6;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_6 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_7;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_7 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_8;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_8 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_9;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_9 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_10;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_10 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_11;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_11 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_12;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_12 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_13;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_13 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_2 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_1 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__195__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__195__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__195__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__195__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__195__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__195__sel = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__input_0 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__204__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__204__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__204__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__204__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__204__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__204__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__205__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__205__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__205__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__205__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__205__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__205__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__206__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__206__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__206__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__206__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__206__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__206__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__207__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__207__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__207__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__207__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__207__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__207__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__208__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__208__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__208__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__208__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__208__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__208__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__209__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__209__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__209__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__209__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__209__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__209__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__210__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__210__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__210__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__210__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__210__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__210__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__211__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__211__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__211__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__211__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__211__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__211__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__212__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__212__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__212__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__212__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__212__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__212__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__213__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__213__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__213__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__213__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__213__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__213__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__214__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__214__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__214__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__214__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__214__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__214__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__215__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__215__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__215__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__215__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__215__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__215__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__232__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__232__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__232__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__232__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__232__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__232__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__233__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__233__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__233__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__233__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__233__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__233__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__234__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__234__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__234__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__234__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__234__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__234__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__235__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__235__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__235__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__235__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__235__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__235__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__321__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__321__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__321__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__321__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__321__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__321__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__322__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__322__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__322__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__322__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__322__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__322__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__323__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__323__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__323__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__323__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__323__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__323__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__324__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__324__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__324__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__324__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__324__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__324__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__input_0 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__326__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__326__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__326__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__326__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__326__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__326__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__327__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__327__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__327__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__327__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__327__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__327__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__input_2 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__input_1 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__330__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__330__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__330__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__330__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__330__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__330__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__331__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__331__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__331__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__331__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__331__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__331__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__332__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__332__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__332__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__332__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__332__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__332__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__334__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__334__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__334__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__334__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__334__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__334__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__335__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__335__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__335__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__335__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__335__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__335__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__336__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__336__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__336__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__336__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__336__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__336__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__input_0 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__338__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__338__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__338__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__338__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__338__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__338__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__339__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__339__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__339__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__339__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__339__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__339__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__340__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__340__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__340__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__340__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__340__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__340__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__341__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__341__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__341__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__341__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__341__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__341__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__input_0 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__343__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__343__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__343__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__343__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__343__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__343__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__344__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__344__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__344__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__344__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__344__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__344__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__input_2 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__input_1 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__input_2 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__input_1 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__348__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__348__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__348__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__348__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__348__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__348__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__349__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__349__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__349__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__349__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__349__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__349__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__350__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__350__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__350__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__350__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__350__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__350__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__352__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__352__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__352__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__352__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__352__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__352__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__353__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__353__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__353__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__353__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__353__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__353__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__354__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__354__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__354__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__354__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__354__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__354__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__input_0 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__sel = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__371__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__371__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__371__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__371__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__371__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__371__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__372__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__372__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__372__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__372__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__372__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__372__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__373__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__373__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__373__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__373__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__373__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__373__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__374__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__374__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__374__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__374__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__374__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__374__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__375__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__375__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__375__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__375__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__375__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__375__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__376__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__376__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__376__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__376__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__376__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__376__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__377__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__377__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__377__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__377__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__377__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__377__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__378__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__378__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__378__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__378__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__378__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__378__arg2 = 0;
    QData/*63:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__input_0 = 0;
    QData/*63:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__sel = 0;
    // Body
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__input_0 
        = ((0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_dmapack__DOT__pack_cnt))
            ? (((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_dmapack__DOT__pack_data[1U])) 
                << 0x00000020U) | (QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_dmapack__DOT__pack_data[0U])))
            : ((1U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_dmapack__DOT__pack_cnt))
                ? (((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_dmapack__DOT__pack_data[3U])) 
                    << 0x00000020U) | (QData)((IData)(
                                                      vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_dmapack__DOT__pack_data[2U])))
                : ((2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_dmapack__DOT__pack_cnt))
                    ? (((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_dmapack__DOT__pack_data[5U])) 
                        << 0x00000020U) | (QData)((IData)(
                                                          vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_dmapack__DOT__pack_data[4U])))
                    : ((3U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_dmapack__DOT__pack_cnt))
                        ? (((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_dmapack__DOT__pack_data[7U])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_dmapack__DOT__pack_data[6U])))
                        : 0ULL))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__sel)
            ? __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__input_1
            : __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__input_0);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_1_IntSubExt_16U_32U_33U_o_acc_nl 
        = (0x00000003ffffffffULL & (VL_EXTEND_QQ(34,33, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__313__vector 
                            = (0x0000ffffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__313__Vfuncout 
                            = (((QData)((IData)((0x0001ffffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__313__vector) 
                                                                  >> 0x0fU))))))) 
                                << 0x00000010U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__313__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__313__Vfuncout)) 
                                    - VL_EXTEND_QQ(34,33, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__314__vector 
                            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_offset;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__314__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__314__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__314__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__314__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_3_IntSubExt_16U_32U_33U_o_acc_nl 
        = (0x00000003ffffffffULL & (VL_EXTEND_QQ(34,33, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__315__vector 
                            = (0x0000ffffU & (IData)(
                                                     (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                                      >> 0x20U)));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__315__Vfuncout 
                            = (((QData)((IData)((0x0001ffffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__315__vector) 
                                                                  >> 0x0fU))))))) 
                                << 0x00000010U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__315__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__315__Vfuncout)) 
                                    - VL_EXTEND_QQ(34,33, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__316__vector 
                            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_offset;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__316__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__316__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__316__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__316__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_2_IntSubExt_16U_32U_33U_o_acc_1_nl 
        = (0x00000003ffffffffULL & (VL_EXTEND_QQ(34,33, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__317__vector 
                            = (0x0000ffffU & (IData)(
                                                     (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                                      >> 0x10U)));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__317__Vfuncout 
                            = (((QData)((IData)((0x0001ffffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__317__vector) 
                                                                  >> 0x0fU))))))) 
                                << 0x00000010U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__317__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__317__Vfuncout)) 
                                    - VL_EXTEND_QQ(34,33, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__318__vector 
                            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_offset;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__318__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__318__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__318__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__318__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_4_IntSubExt_16U_32U_33U_o_acc_1_nl 
        = (0x00000003ffffffffULL & (VL_EXTEND_QQ(34,33, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__319__vector 
                            = (0x0000ffffU & (IData)(
                                                     (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                                      >> 0x30U)));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__319__Vfuncout 
                            = (((QData)((IData)((0x0001ffffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__319__vector) 
                                                                  >> 0x0fU))))))) 
                                << 0x00000010U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__319__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__319__Vfuncout)) 
                                    - VL_EXTEND_QQ(34,33, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__320__vector 
                            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_offset;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__320__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__320__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__320__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__320__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_lpi_1_dfm 
        = ((~ (IData)(((0x7c00000000000000ULL != (0x7c00000000000000ULL 
                                                  & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                       | (0U == (0x000003ffU & (IData)(
                                                       (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                                        >> 0x00000030U))))))) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_nan_to_zero));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_3_lpi_1_dfm 
        = ((~ (IData)(((0x00007c0000000000ULL != (0x00007c0000000000ULL 
                                                  & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                       | (0U == (0x000003ffU & (IData)(
                                                       (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                                        >> 0x00000020U))))))) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_nan_to_zero));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_2_lpi_1_dfm 
        = ((~ (IData)(((0x000000007c000000ULL != (0x000000007c000000ULL 
                                                  & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                       | (0U == (0x000003ffU & (IData)(
                                                       (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                                        >> 0x00000010U))))))) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_nan_to_zero));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_1_lpi_1_dfm 
        = ((~ (IData)(((0x0000000000007c00ULL != (0x0000000000007c00ULL 
                                                  & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                       | (0U == (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)))))) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_nan_to_zero));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__206__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__206__input_1 
        = (0x0000001fU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x3aU)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__206__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__206__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__206__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__206__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__204__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__204__input_1 
        = (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x30U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__204__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__204__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__204__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__204__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__209__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_3_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__209__input_1 
        = (0x0000001fU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x2aU)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__209__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__209__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__209__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__209__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__207__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_3_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__207__input_1 
        = (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x20U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__207__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__207__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__207__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__207__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__212__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_2_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__212__input_1 
        = (0x0000001fU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x1aU)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__212__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__212__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__212__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__212__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__210__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_2_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__210__input_1 
        = (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x10U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__210__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__210__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__210__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__210__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__215__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_1_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__215__input_1 
        = (0x0000001fU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x0aU)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__215__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__215__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__215__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__215__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__213__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_1_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__213__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__213__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__213__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__213__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__213__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_11_nl 
        = ((0U == (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                          >> 0x00000030U)))) 
           | (0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_10_nl 
        = ((0U == (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                          >> 0x00000020U)))) 
           | (0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_9_nl 
        = ((0U == (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                          >> 0x00000010U)))) 
           | (0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_8_nl 
        = ((0U == (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt))) 
           | (0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__232__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_11_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__232__input_1 
        = (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x30U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__232__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__232__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__232__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__232__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__205__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_11_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__205__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__205__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__205__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__205__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__205__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__233__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_10_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__233__input_1 
        = (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x20U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__233__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__233__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__233__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_3_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__233__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__208__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_10_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__208__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__208__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__208__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__208__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_3_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__208__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__234__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_9_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__234__input_1 
        = (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x10U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__234__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__234__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__234__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_2_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__234__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__211__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_9_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__211__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__211__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__211__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__211__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_2_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__211__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__235__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_8_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__235__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__235__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__235__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__235__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_1_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__235__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__214__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_8_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__214__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__214__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__214__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__214__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_1_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__214__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_10 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_lpi_1_dfm)) 
           | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_lpi_1_dfm)));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_6 
        = (IData)((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                    >> 9U) | (0U != (0x01ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_lpi_1_dfm)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_6) 
           & (0U == (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl 
        = ((0U != (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_6));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_11 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_3_lpi_1_dfm)) 
           | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_3_lpi_1_dfm)));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_7 
        = (IData)((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                    >> 9U) | (0U != (0x01ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_3_lpi_1_dfm)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_6) 
           & (0U == (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl 
        = ((0U != (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_6));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_12 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_2_lpi_1_dfm)) 
           | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_2_lpi_1_dfm)));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_8 
        = (IData)((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                    >> 9U) | (0U != (0x01ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_2_lpi_1_dfm)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_6) 
           & (0U == (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl 
        = ((0U != (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_6));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_9 
        = (IData)((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                    >> 9U) | (0U != (0x01ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_1_lpi_1_dfm)))));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_13 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_1_lpi_1_dfm)) 
           | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_1_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_6) 
           & (0U == (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl 
        = ((0U != (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_6));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_3_tmp 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_10) 
           & (0x1fU == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm 
        = (1U & (~ ((0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm)) 
                    | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_10))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_71_0 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm)) 
           | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_6));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_lpi_1_dfm 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_6) 
           & (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_10) 
             << 4U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl) 
                        << 3U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_2) 
                                   & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3)) 
                                      | (0U == (3U 
                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))))) 
                                  << 2U))) | (((IData)(
                                                       (((0U 
                                                          == 
                                                          (0x0300U 
                                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))) 
                                                         & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl))) 
                                                        & ((0U 
                                                            != 
                                                            (0x00c0U 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))) 
                                                           | (0U 
                                                              == 
                                                              (3U 
                                                               & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                                  >> 4U)))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                       >> 9U) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                              >> 7U))) 
                                                         | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                               >> 5U) 
                                                              | (1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                                     >> 3U)))) 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_2)) 
                                                            | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                                  >> 1U) 
                                                                 | (1U 
                                                                    == 
                                                                    (2U 
                                                                     & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                                        << 1U)))) 
                                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_6)) 
                                                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_10)))))) 
                                                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_10)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_2_tmp 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_11) 
           & (0x1fU == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm 
        = (1U & (~ ((0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm)) 
                    | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_11))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_79_0 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm)) 
           | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_7));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_3_lpi_1_dfm 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_7) 
           & (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_10) 
             << 4U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl) 
                        << 3U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_2) 
                                   & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3)) 
                                      | (0U == (3U 
                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))))) 
                                  << 2U))) | (((IData)(
                                                       (((0U 
                                                          == 
                                                          (0x0300U 
                                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))) 
                                                         & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl))) 
                                                        & ((0U 
                                                            != 
                                                            (0x00c0U 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))) 
                                                           | (0U 
                                                              == 
                                                              (3U 
                                                               & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                                  >> 4U)))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                       >> 9U) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                              >> 7U))) 
                                                         | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                               >> 5U) 
                                                              | (1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                                     >> 3U)))) 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_2)) 
                                                            | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                                  >> 1U) 
                                                                 | (1U 
                                                                    == 
                                                                    (2U 
                                                                     & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                                        << 1U)))) 
                                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_10)))))) 
                                                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_10)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_1_tmp 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_12) 
           & (0x1fU == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm 
        = (1U & (~ ((0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm)) 
                    | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_12))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_87_0 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm)) 
           | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_8));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_2_lpi_1_dfm 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_8) 
           & (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_10) 
             << 4U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl) 
                        << 3U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_2) 
                                   & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3)) 
                                      | (0U == (3U 
                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))))) 
                                  << 2U))) | (((IData)(
                                                       (((0U 
                                                          == 
                                                          (0x0300U 
                                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))) 
                                                         & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl))) 
                                                        & ((0U 
                                                            != 
                                                            (0x00c0U 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))) 
                                                           | (0U 
                                                              == 
                                                              (3U 
                                                               & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                                  >> 4U)))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                       >> 9U) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                              >> 7U))) 
                                                         | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                               >> 5U) 
                                                              | (1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                                     >> 3U)))) 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_2)) 
                                                            | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                                  >> 1U) 
                                                                 | (1U 
                                                                    == 
                                                                    (2U 
                                                                     & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                                        << 1U)))) 
                                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_6)) 
                                                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_10)))))) 
                                                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_10)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_95_0 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm)) 
           | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_9));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_1_lpi_1_dfm 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_9) 
           & (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_tmp 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_13) 
           & (0x1fU == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm 
        = (1U & (~ ((0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm)) 
                    | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_13))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_10) 
             << 4U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl) 
                        << 3U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_2) 
                                   & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3)) 
                                      | (0U == (3U 
                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))))) 
                                  << 2U))) | (((IData)(
                                                       (((0U 
                                                          == 
                                                          (0x0300U 
                                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))) 
                                                         & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl))) 
                                                        & ((0U 
                                                            != 
                                                            (0x00c0U 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))) 
                                                           | (0U 
                                                              == 
                                                              (3U 
                                                               & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                                  >> 4U)))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                       >> 9U) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                              >> 7U))) 
                                                         | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                               >> 5U) 
                                                              | (1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                                     >> 3U)))) 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_2)) 
                                                            | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                                  >> 1U) 
                                                                 | (1U 
                                                                    == 
                                                                    (2U 
                                                                     & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                                        << 1U)))) 
                                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_10)))))) 
                                                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_10)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_3_nl 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_lpi_1_dfm));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__sel 
        = (IData)(((0ULL == (0x7c00000000000000ULL 
                             & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                   & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                        ? 2U : 1U) >> 1U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__rtn;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__input_0 
        = (6U | (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm) 
                       >> 4U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_7_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_2_nl 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_3_lpi_1_dfm));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__sel 
        = (IData)(((0ULL == (0x00007c0000000000ULL 
                             & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                   & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                        ? 2U : 1U) >> 1U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__input_0 
        = (6U | (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm) 
                       >> 4U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_6_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_1_nl 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_2_lpi_1_dfm));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__sel 
        = (IData)(((0ULL == (0x000000007c000000ULL 
                             & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                   & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                        ? 2U : 1U) >> 1U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__rtn;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__input_0 
        = (6U | (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm) 
                       >> 4U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_5_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_nl 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_1_lpi_1_dfm));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__sel 
        = (IData)(((0ULL == (0x0000000000007c00ULL 
                             & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                   & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                        ? 2U : 1U) >> 1U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__input_0 
        = (6U | (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm) 
                       >> 4U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_4_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl_10 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_3_nl)) 
              | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_3_tmp)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_3_nl)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__rtn))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__input_2 
        = (0x0000000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_3_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_3 
        = (0x0000007fU & ((IData)(1U) + VL_EXTEND_II(7,6, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__366__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_7_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__366__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__366__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__366__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl_12 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_2_nl)) 
              | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_2_tmp)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_2_nl)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_3_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__rtn))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__input_2 
        = (0x0000000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_2_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_2 
        = (0x0000007fU & ((IData)(1U) + VL_EXTEND_II(7,6, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__364__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_6_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__364__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__364__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__364__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl_11 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_1_nl)) 
              | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_1_tmp)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_1_nl)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_2_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__rtn))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__input_2 
        = (0x0000000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_1_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_1 
        = (0x0000007fU & ((IData)(1U) + VL_EXTEND_II(7,6, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__362__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_5_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__362__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__362__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__362__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_nl)) 
              | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_tmp)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_nl)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_1_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__rtn))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_2 
        = (0x0000000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out 
        = (0x0000007fU & ((IData)(1U) + VL_EXTEND_II(7,6, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__360__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_4_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__360__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__360__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__360__Vfuncout)))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__322__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_71_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__322__input_1 
        = (3U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_3) 
                 >> 2U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__322__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__322__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__322__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_23_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__322__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__324__sel 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_3));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__324__input_1 
        = (3U & (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_71_0))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__324__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__324__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__324__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_14_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__324__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__377__arg2 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_3));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__377__arg1 
        = (0x003fe000U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_lpi_1_dfm) 
                          << 0x0000000dU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__378__arg2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__377__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__378__arg1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__377__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__378__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x007fffffU & VL_SHIFTL_III(23,23,6, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__378__arg2)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__378__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__377__Vfuncout 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__378__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_sva_2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__377__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__339__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_79_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__339__input_1 
        = (3U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_2) 
                 >> 2U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__339__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__339__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__339__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_21_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__339__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__341__sel 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_2));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__341__input_1 
        = (3U & (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_79_0))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__341__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__341__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__341__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_10_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__341__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__375__arg2 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_2));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__375__arg1 
        = (0x003fe000U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_3_lpi_1_dfm) 
                          << 0x0000000dU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__376__arg2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__375__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__376__arg1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__375__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__376__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x007fffffU & VL_SHIFTL_III(23,23,6, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__376__arg2)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__376__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__375__Vfuncout 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__376__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_sva_2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__375__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__352__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_87_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__352__input_1 
        = (3U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_1) 
                 >> 2U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__352__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__352__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__352__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_19_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__352__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__354__sel 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_1));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__354__input_1 
        = (3U & (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_87_0))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__354__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__354__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__354__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_6_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__354__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__373__arg2 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_1));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__373__arg1 
        = (0x003fe000U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_2_lpi_1_dfm) 
                          << 0x0000000dU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__374__arg2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__373__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__374__arg1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__373__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__374__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x007fffffU & VL_SHIFTL_III(23,23,6, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__374__arg2)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__374__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__373__Vfuncout 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__374__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_sva_2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__373__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__195__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_tmp;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__195__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__195__sel)
            ? 0x0fU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__195__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__195__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_3_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__195__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__334__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_95_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__334__input_1 
        = (3U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out) 
                 >> 2U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__334__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__334__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__334__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_17_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__334__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__336__sel 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__336__input_1 
        = (3U & (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_95_0))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__336__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__336__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__336__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_2_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__336__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__371__arg2 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__371__arg1 
        = (0x003fe000U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_1_lpi_1_dfm) 
                          << 0x0000000dU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__372__arg2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__371__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__372__arg1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__371__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__372__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x007fffffU & VL_SHIFTL_III(23,23,6, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__372__arg2)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__372__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__371__Vfuncout 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__372__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_sva_2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__371__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__323__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_3_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__323__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_23_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__323__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__323__input_1)
            : 1U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__323__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_58_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__323__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_3_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_14_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__input_0 
        = (3U & (((IData)(0x31U) + (0x00000020U | (0x0000001fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__rtn))))) 
                 >> 4U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_42_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__330__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__330__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_sva_2 
                          >> 0x0dU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__330__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__330__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__330__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_30_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__330__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__331__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__331__input_0 
        = (0x000003ffU & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_sva_2);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__331__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__331__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__331__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_31_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__331__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__332__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_3_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__332__input_1 
        = (7U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_sva_2 
                 >> 0x0aU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__332__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__332__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__332__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_22_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__332__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__340__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_2_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__340__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_21_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__340__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__340__input_1)
            : 1U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__340__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_54_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__340__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_2_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_10_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__input_0 
        = (3U & (((IData)(0x31U) + (0x00000020U | (0x0000001fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__rtn))))) 
                 >> 4U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_40_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__348__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__348__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_sva_2 
                          >> 0x0dU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__348__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__348__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__348__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_34_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__348__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__349__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__349__input_0 
        = (0x000003ffU & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_sva_2);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__349__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__349__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__349__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_35_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__349__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__350__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_2_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__350__input_1 
        = (7U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_sva_2 
                 >> 0x0aU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__350__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__350__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__350__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_20_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__350__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__353__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_1_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__353__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_19_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__353__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__353__input_1)
            : 1U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__353__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_50_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__353__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_1_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_6_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__input_0 
        = (3U & (((IData)(0x31U) + (0x00000020U | (0x0000001fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__rtn))))) 
                 >> 4U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_38_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__338__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__338__input_0 
        = (0x000003ffU & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_sva_2);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__338__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__338__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__338__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_32_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__338__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__343__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__343__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_sva_2 
                          >> 0x0dU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__343__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__343__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__343__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_33_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__343__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__344__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_1_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__344__input_1 
        = (7U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_sva_2 
                 >> 0x0aU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__344__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__344__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__344__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_18_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__344__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_30_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__input_1 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_truncate;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_3_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_truncate_mux1h_1_itm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__335__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__335__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_17_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__335__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__335__input_1)
            : 1U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__335__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_46_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__335__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_2_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__input_0 
        = (3U & (((IData)(0x31U) + (0x00000020U | (0x0000001fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__rtn))))) 
                 >> 4U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_36_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__321__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__321__input_0 
        = (0x000003ffU & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_sva_2);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__321__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__321__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__321__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_27_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__321__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__326__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__326__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_sva_2 
                          >> 0x0dU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__326__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__326__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__326__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_29_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__326__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__327__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__327__input_1 
        = (7U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_sva_2 
                 >> 0x0aU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__327__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__327__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__327__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__327__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_3_nl 
        = (7U & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__333__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__333__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_22_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__333__sel)
                            ? 7U : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__333__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__333__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__333__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_2_nl 
        = (7U & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__351__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__351__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_20_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__351__sel)
                            ? 7U : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__351__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__351__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__351__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_1_nl 
        = (7U & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__345__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__345__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_18_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__345__sel)
                            ? 7U : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__345__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__345__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__345__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_nl 
        = (7U & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__328__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__328__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__328__sel)
                            ? 7U : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__328__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__328__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__328__Vfuncout))));
}

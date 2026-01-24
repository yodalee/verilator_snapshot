// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_HLS_fp32_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_0__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__3__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__3__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__3__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__3__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__3__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__3__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__3__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__3__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__4__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__4__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__4__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__4__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__4__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__4__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__4__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__4__sel = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__5__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__5__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__5__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__5__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__7__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__7__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__7__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__7__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__11__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__11__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__11__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__11__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__12__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__12__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__12__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__12__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__13__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__13__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__13__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__13__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__13__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__13__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__13__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__13__sel = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__14__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__14__Vfuncout = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__14__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__14__input_0 = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__14__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__14__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__14__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__14__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__15__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__15__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__15__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__15__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__15__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__15__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__15__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__15__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__25__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__25__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__25__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__25__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__25__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__25__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__25__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__25__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__26__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__26__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__26__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__26__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__26__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__26__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__26__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__26__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__27__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__27__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__27__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__27__vector = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__28__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__28__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__28__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__28__input_0 = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__28__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__28__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__28__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__28__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__29__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__29__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__29__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__29__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__29__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__29__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__29__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__29__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__30__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__30__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__30__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__30__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__30__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__30__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__30__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__30__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__31__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__31__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__31__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__31__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__31__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__31__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__31__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__31__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__32__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__32__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__32__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__32__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__32__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__32__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__32__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__32__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__32__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__32__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__34__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__34__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__34__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__34__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__34__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__34__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__34__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__34__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__35__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__35__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__35__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__35__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__38__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__38__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__38__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__38__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__38__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__38__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__41__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__41__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__41__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__41__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__41__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__41__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__41__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__41__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__53__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__53__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__53__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__53__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__53__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__53__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__53__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__53__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__55__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__55__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__55__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__55__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__55__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__55__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__55__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__55__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__56__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__56__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__56__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__56__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__56__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__56__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__56__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__56__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__57__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__57__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__57__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__57__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__57__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__57__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__57__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__57__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__59__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__59__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__59__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__59__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__59__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__59__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__59__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__59__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__60__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__60__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__60__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__60__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__60__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__60__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__60__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__60__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__62__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__62__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__62__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__62__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__62__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__62__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__62__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__62__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__63__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__63__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__63__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__63__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__63__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__63__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__63__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__63__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_6_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2 
                = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
                                 >> 0x2fU)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp)))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__27__vector 
                = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__Vstatic__tmp 
                = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__27__vector), 1U));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__27__Vfuncout 
                = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__Vstatic__tmp));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__27__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_8_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1;
        }
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_59))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_59;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_3;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_4;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__25__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__25__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__25__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__25__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__25__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__25__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__25__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__25__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_3_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5 
                = (0x000000ffU & ((IData)(0x81U) + 
                                  ((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 
                                    >> 0x00000017U) 
                                   + (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 
                                      >> 0x00000017U))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                  & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm)))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__31__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__31__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__31__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__31__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__31__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__31__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__31__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__31__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__28__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__28__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__28__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__28__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__28__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__28__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__28__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__28__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1)))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__26__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__26__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__26__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__26__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__26__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__26__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__26__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__26__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl 
        = (0x000003ffU & ((IData)(0x0141U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__6__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__6__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__6__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__6__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__12__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__12__vector), 7U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__12__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__12__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__14__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x2fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__14__input_1 
        = (0x00003fffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__14__input_0 
        = (0x00003fffffffffffULL & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__14__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__14__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__14__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__14__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__14__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0));
    vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4 
        = ((((~ (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x0000002fU))) | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__7__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__7__vector), 8U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__7__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_23_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_3 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_FpBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_17_nl))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__30__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__30__input_1 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__30__input_0 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1);
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__30__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__30__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__30__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__30__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__30__Vfuncout;
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
               & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U))) & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__7__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva 
        = (1U & ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
                          >> 0x00000016U)) & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2) 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                                          >> 0x0000002fU))) 
                                              | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x0000000000bfffffULL 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__13__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1) 
           & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                      >> 0x0000002fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__13__input_1 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__13__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1))) 
                   | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse))))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_FpBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_13_nl))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__29__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__29__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__29__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__29__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__29__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__29__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__29__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__29__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva = 0ULL;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__13__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__13__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__13__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__13__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__13__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__32__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt)));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__32__input_0 
                = ((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                    ^ vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                   >> 0x0000001fU);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__32__input_1 
                = (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__32__input_2 
                = (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__32__input_0) 
                   & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__32__sel));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__32__input_1) 
                      & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__32__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__32__input_2) 
                      & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__32__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__32__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_3 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__32__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var = 1U;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
                                                  >> 0x17U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__33__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__33__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__33__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__33__Vfuncout))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 
                = (1U & (~ (IData)(((0x7f800000U != 
                                     (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                    | (0U == (0x007fffffU 
                                              & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt))))));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3 
                = (1U & (~ (IData)(((0x7f800000U != 
                                     (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                    | (0U == (0x007fffffU 
                                              & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt))))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_28_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 
                = (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt);
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_31_nl)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 
                = (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt);
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva) 
           & (0x00003fffff800000ULL == (0x00003fffff800000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__34__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)) 
                 | (0xffU != (0x000000ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__34__input_1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__35__vector 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__35__Vfuncout 
        = (0x007fffffU & (- (IData)((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__35__vector))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__34__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__35__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__34__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__34__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__34__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__34__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__34__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__15__sel 
        = ((4U & ((~ ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)) 
                                     | ((0xffU == (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs))) 
                                    << 1U)) | ((0xffU 
                                                != 
                                                (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)))) 
                                               & ((IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4) 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__15__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__15__input_2 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__15__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__15__sel)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__15__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__15__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__15__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__15__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__15__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__41__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__41__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__41__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                   >> 0x0000002fU)) 
                          | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__41__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__41__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__41__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__41__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__41__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__63__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__63__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__63__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_0.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__63__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__63__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__63__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__63__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__63__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__62__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__62__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__62__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_0.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__62__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__62__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__62__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__62__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__62__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_0.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_0.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__36__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)));
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__36__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__36__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__36__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__36__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__36__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55 
        = (IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                   | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl 
        = (0x000003ffU & ((IData)(0x0181U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__8__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__8__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__8__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__8__Vfuncout)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__5__vector 
        = (0x0000ffffffffffffULL & ((QData)((IData)(
                                                    (0x00800000U 
                                                     | (0x007fffffU 
                                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1)))) 
                                    * (QData)((IData)(
                                                      (0x00800000U 
                                                       | (0x007fffffU 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__5__Vfuncout 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__5__vector;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__5__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl 
        = (0x000003ffU & (VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__39__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__39__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__39__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__39__Vfuncout))) 
                          + VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__40__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__40__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__40__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__40__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__38__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__38__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__38__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__38__input_1)
            : 0U);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__38__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__38__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__37__sel 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__37__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__37__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__37__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__37__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__37__Vfuncout)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__56__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__56__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__56__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__56__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__56__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__56__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__56__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__56__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__3__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__3__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__3__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__3__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__3__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__3__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__3__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__3__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl 
        = (0x000007ffU & (VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__9__vector 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__9__Vfuncout 
                            = ((0x00000200U & ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__9__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__9__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__9__Vfuncout))) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__10__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__10__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__10__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__10__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__57__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__57__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__57__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__57__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__57__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__57__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__57__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__57__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__11__vector 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp 
        = (0x000003ffU & VL_SHIFTR_III(10,10,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__11__vector), 9U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__11__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__11__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1) 
           | ((0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
              | (0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__4__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__4__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__4__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__4__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__4__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__4__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__4__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__4__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__53__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__53__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__53__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__53__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__53__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__53__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__53__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__53__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__55__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__55__input_1 
        = (1U & (~ ((~ (IData)(((0x7f800000U == (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse)))) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__55__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__55__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__55__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__55__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__55__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__55__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__59__sel 
        = (0xffU == (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                    >> 0x00000017U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__59__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__59__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__59__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__59__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__59__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__59__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__59__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__60__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__60__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__60__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__60__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__60__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__60__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__60__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__60__Vfuncout;
}

void Vsim_HLS_fp32_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_0__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7;
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__0__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__0__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__0__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__0__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__0__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__0__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__0__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__0__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__2__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__2__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__2__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__2__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__16__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__16__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__16__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__16__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__16__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__16__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__16__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__16__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__17__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__17__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__17__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__17__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__17__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__17__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__17__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__17__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__18__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__18__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__18__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__18__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__18__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__18__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__18__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__18__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__19__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__19__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__19__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__19__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__19__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__19__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__19__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__19__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__20__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__20__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__20__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__20__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__20__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__20__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__20__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__20__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__21__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__21__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__21__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__21__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__21__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__21__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__21__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__21__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__22__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__22__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__22__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__22__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__22__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__22__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__22__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__22__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__23__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__23__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__23__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__23__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__23__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__23__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__23__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__23__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__24__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__24__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__24__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__24__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__24__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__24__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__24__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__24__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__42__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__42__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__42__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__42__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__42__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__42__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__42__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__42__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__43__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__43__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__43__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__43__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__43__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__43__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__43__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__43__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__44__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__44__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__44__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__44__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__44__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__44__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__44__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__44__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__45__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__45__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__45__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__45__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__45__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__45__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__45__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__45__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__46__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__46__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__46__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__46__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__46__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__46__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__46__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__46__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__47__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__47__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__47__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__47__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__47__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__47__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__47__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__47__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__48__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__48__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__48__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__48__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__48__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__48__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__48__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__48__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__49__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__49__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__49__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__49__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__49__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__49__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__49__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__49__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__50__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__50__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__50__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__50__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__50__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__50__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__50__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__50__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__51__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__51__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__51__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__51__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__51__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__51__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__51__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__51__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__52__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__52__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__52__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__52__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__52__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__52__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__52__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__52__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__54__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__54__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__54__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__54__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__54__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__54__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__54__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__54__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__58__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__58__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__58__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__58__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__58__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__58__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__58__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__58__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__61__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__61__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__61__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__61__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__61__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__61__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__61__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__61__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
            ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
               & (0x0ffeU == (0x0ffeU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_dout_pvld))))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__19__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__19__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__19__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__19__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__19__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__19__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__19__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__19__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(((0x7f800000U == (0x7f800000U 
                                       & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                      & (0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt 
        = ((IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
           & (IData)((((0x7f800000U == (0x7f800000U 
                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
                      & (0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt) 
              & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
                 & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__16__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__16__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__16__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__16__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__16__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__16__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__16__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__16__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__58__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__58__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__58__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__58__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__58__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__58__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__58__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__58__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__54__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__54__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__54__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__54__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__54__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__54__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__54__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__54__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__61__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__61__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__61__input_0 
        = (1U & (~ (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__61__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__61__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__61__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__61__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__61__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__42__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__42__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1) 
                        & ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6)) 
                           | (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
                                      >> 0x0000002fU))))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__42__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__42__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__42__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__42__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__42__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__42__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__17__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__17__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__17__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__17__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__17__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__17__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__17__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__17__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__20__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__20__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__20__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__20__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__20__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__20__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__20__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__20__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__21__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__21__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__21__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__21__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__21__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__21__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__21__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__21__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_FpBitsToFloat_8U_23U_1_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_59 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__0__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__0__input_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__2__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__2__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__2__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__0__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__2__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__0__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__0__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__0__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__0__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__0__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__47__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__47__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__47__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__47__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__47__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__47__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__47__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__47__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__18__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__18__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__18__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__18__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__18__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__18__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__18__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__18__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__48__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__48__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__48__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__48__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__48__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__48__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__48__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__48__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__22__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__22__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__22__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__22__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__22__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__22__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__22__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__22__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__50__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__50__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__50__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__50__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__50__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__50__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__50__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__50__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__43__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__43__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__43__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__43__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__43__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__43__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__43__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__43__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__45__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__45__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__45__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__45__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__45__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__45__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__45__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__45__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__49__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__49__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__49__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__49__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__49__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__49__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__49__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__49__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__23__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__23__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__23__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__23__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__23__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__23__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__23__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__23__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__51__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__51__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__51__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__51__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__51__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__51__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__51__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__51__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__44__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__44__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__44__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__44__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__44__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__44__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__44__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__44__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__46__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__46__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__46__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__46__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__46__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__46__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__46__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__46__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__24__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__24__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__24__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__24__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__24__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__24__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__24__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__24__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__52__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__52__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__52__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__52__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__52__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__52__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__52__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__52__Vfuncout;
}

void Vsim_HLS_fp32_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_1__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__67__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__67__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__67__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__67__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__67__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__67__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__67__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__67__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__68__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__68__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__68__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__68__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__68__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__68__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__68__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__68__sel = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__69__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__69__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__69__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__69__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__71__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__71__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__71__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__71__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__75__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__75__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__75__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__75__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__76__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__76__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__76__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__76__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__77__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__77__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__77__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__77__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__77__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__77__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__77__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__77__sel = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__78__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__78__Vfuncout = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__78__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__78__input_0 = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__78__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__78__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__78__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__78__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__79__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__79__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__79__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__79__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__79__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__79__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__79__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__79__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__89__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__89__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__89__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__89__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__89__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__89__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__89__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__89__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__90__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__90__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__90__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__90__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__90__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__90__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__90__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__90__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__91__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__91__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__91__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__91__vector = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__92__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__92__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__92__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__92__input_0 = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__92__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__92__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__92__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__92__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__93__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__93__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__93__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__93__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__93__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__93__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__93__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__93__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__94__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__94__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__94__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__94__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__94__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__94__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__94__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__94__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__95__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__95__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__95__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__95__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__95__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__95__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__95__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__95__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__96__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__96__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__96__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__96__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__96__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__96__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__96__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__96__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__96__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__96__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__98__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__98__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__98__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__98__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__98__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__98__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__98__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__98__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__99__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__99__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__99__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__99__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__102__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__102__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__102__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__102__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__102__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__102__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__105__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__105__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__105__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__105__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__105__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__105__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__105__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__105__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__117__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__117__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__117__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__117__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__117__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__117__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__117__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__117__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__119__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__119__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__119__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__119__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__119__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__119__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__119__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__119__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__120__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__120__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__120__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__120__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__120__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__120__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__121__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__121__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__121__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__121__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__121__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__121__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__123__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__123__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__123__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__123__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__123__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__123__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__123__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__123__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__124__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__124__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__124__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__124__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__124__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__124__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__124__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__124__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__126__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__126__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__126__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__126__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__126__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__126__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__126__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__126__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__127__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__127__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__127__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__127__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__127__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__127__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__127__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__127__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_6_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2 
                = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
                                 >> 0x2fU)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp)))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__91__vector 
                = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__Vstatic__tmp 
                = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__91__vector), 1U));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__91__Vfuncout 
                = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__Vstatic__tmp));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__91__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_8_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1;
        }
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_59))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_59;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_3;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_4;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__89__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__89__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__89__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__89__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__89__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__89__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__89__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__89__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_3_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5 
                = (0x000000ffU & ((IData)(0x81U) + 
                                  ((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 
                                    >> 0x00000017U) 
                                   + (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 
                                      >> 0x00000017U))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                  & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm)))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__95__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__95__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__95__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__95__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__95__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__95__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__95__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__95__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__92__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__92__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__92__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__92__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__92__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__92__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__92__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__92__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1)))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__90__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__90__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__90__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__90__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__90__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__90__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__90__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__90__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl 
        = (0x000003ffU & ((IData)(0x0141U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__70__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__70__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__70__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__70__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__76__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__76__vector), 7U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__76__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__76__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__78__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x2fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__78__input_1 
        = (0x00003fffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__78__input_0 
        = (0x00003fffffffffffULL & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__78__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__78__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__78__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__78__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__78__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0));
    vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4 
        = ((((~ (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x0000002fU))) | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__71__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__71__vector), 8U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__71__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_23_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_3 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_FpBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_17_nl))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__94__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__94__input_1 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__94__input_0 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1);
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__94__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__94__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__94__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__94__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__94__Vfuncout;
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
               & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U))) & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__71__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva 
        = (1U & ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
                          >> 0x00000016U)) & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2) 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                                          >> 0x0000002fU))) 
                                              | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x0000000000bfffffULL 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__77__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1) 
           & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                      >> 0x0000002fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__77__input_1 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__77__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1))) 
                   | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse))))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_FpBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_13_nl))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__93__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__93__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__93__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__93__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__93__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__93__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__93__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__93__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva = 0ULL;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__77__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__77__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__77__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__77__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__77__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__96__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt)));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__96__input_0 
                = ((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                    ^ vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                   >> 0x0000001fU);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__96__input_1 
                = (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__96__input_2 
                = (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__96__input_0) 
                   & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__96__sel));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__96__input_1) 
                      & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__96__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__96__input_2) 
                      & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__96__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__96__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_3 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__96__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var = 1U;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
                                                  >> 0x17U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__97__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__97__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__97__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__97__Vfuncout))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 
                = (1U & (~ (IData)(((0x7f800000U != 
                                     (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                    | (0U == (0x007fffffU 
                                              & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt))))));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3 
                = (1U & (~ (IData)(((0x7f800000U != 
                                     (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                    | (0U == (0x007fffffU 
                                              & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt))))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_28_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 
                = (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt);
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_31_nl)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 
                = (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt);
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva) 
           & (0x00003fffff800000ULL == (0x00003fffff800000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__98__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)) 
                 | (0xffU != (0x000000ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__98__input_1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__99__vector 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__99__Vfuncout 
        = (0x007fffffU & (- (IData)((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__99__vector))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__98__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__99__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__98__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__98__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__98__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__98__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__98__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__79__sel 
        = ((4U & ((~ ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)) 
                                     | ((0xffU == (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs))) 
                                    << 1U)) | ((0xffU 
                                                != 
                                                (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)))) 
                                               & ((IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4) 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__79__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__79__input_2 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__79__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__79__sel)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__79__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__79__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__79__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__79__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__79__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__105__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__105__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__105__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                   >> 0x0000002fU)) 
                          | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__105__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__105__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__105__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__105__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__105__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__127__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__127__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__127__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_1.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__127__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__127__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__127__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__127__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__127__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__126__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__126__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__126__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_1.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__126__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__126__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__126__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__126__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__126__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_1.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_1.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__100__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)));
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__100__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__100__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__100__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__100__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__100__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55 
        = (IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                   | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl 
        = (0x000003ffU & ((IData)(0x0181U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__72__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__72__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__72__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__72__Vfuncout)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__69__vector 
        = (0x0000ffffffffffffULL & ((QData)((IData)(
                                                    (0x00800000U 
                                                     | (0x007fffffU 
                                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1)))) 
                                    * (QData)((IData)(
                                                      (0x00800000U 
                                                       | (0x007fffffU 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__69__Vfuncout 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__69__vector;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__69__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl 
        = (0x000003ffU & (VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__103__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__103__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__103__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__103__Vfuncout))) 
                          + VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__104__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__104__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__104__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__104__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__102__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__102__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__102__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__102__input_1)
            : 0U);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__102__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__102__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__101__sel 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__101__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__101__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__101__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__101__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__101__Vfuncout)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__120__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__120__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__120__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__120__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__120__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__120__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__67__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__67__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__67__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__67__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__67__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__67__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__67__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__67__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl 
        = (0x000007ffU & (VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__73__vector 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__73__Vfuncout 
                            = ((0x00000200U & ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__73__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__73__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__73__Vfuncout))) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__74__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__74__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__74__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__74__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__121__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__121__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__121__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__121__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__121__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__121__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__75__vector 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp 
        = (0x000003ffU & VL_SHIFTR_III(10,10,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__75__vector), 9U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__75__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__75__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1) 
           | ((0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
              | (0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__68__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__68__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__68__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__68__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__68__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__68__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__68__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__68__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__117__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__117__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__117__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__117__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__117__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__117__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__117__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__117__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__119__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__119__input_1 
        = (1U & (~ ((~ (IData)(((0x7f800000U == (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse)))) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__119__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__119__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__119__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__119__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__119__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__119__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__123__sel 
        = (0xffU == (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                    >> 0x00000017U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__123__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__123__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__123__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__123__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__123__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__123__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__123__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__124__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__124__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__124__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__124__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__124__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__124__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__124__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__124__Vfuncout;
}

void Vsim_HLS_fp32_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_1__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7;
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__64__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__64__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__64__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__64__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__64__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__64__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__64__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__64__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__65__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__65__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__65__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__65__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__66__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__66__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__66__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__66__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__80__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__80__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__80__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__80__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__80__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__80__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__80__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__80__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__81__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__81__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__81__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__81__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__81__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__81__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__81__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__81__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__82__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__82__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__82__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__82__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__82__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__82__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__82__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__82__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__83__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__83__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__83__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__83__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__83__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__83__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__83__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__83__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__84__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__84__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__84__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__84__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__84__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__84__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__84__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__84__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__85__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__85__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__85__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__85__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__85__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__85__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__85__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__85__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__86__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__86__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__86__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__86__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__86__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__86__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__86__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__86__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__87__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__87__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__87__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__87__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__87__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__87__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__87__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__87__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__88__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__88__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__88__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__88__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__88__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__88__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__88__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__88__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__106__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__106__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__106__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__106__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__106__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__106__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__106__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__106__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__107__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__107__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__107__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__107__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__107__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__107__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__107__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__107__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__108__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__108__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__108__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__108__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__108__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__108__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__108__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__108__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__109__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__109__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__109__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__109__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__109__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__109__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__109__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__109__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__110__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__110__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__110__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__110__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__110__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__110__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__110__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__110__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__111__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__111__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__111__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__111__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__111__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__111__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__111__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__111__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__112__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__112__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__112__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__112__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__112__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__112__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__112__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__112__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__113__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__113__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__113__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__113__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__113__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__113__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__113__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__113__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__114__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__114__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__114__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__114__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__114__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__114__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__114__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__114__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__115__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__115__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__115__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__115__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__115__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__115__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__115__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__115__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__116__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__116__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__116__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__116__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__116__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__116__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__116__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__116__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__118__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__118__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__118__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__118__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__118__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__118__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__118__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__118__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__122__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__122__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__122__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__122__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__122__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__122__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__122__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__122__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__125__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__125__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__125__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__125__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__125__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__125__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__125__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__125__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
            ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
               & (IData)(((0x0ffcU == (0x0ffcU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_dout_pvld))) 
                          & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_0.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld))))
            : ((2U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                   & (0x07fcU == (0x07fcU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_32))))
                : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__83__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__83__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__83__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__83__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__83__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__83__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__83__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__83__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(((0x7f800000U == (0x7f800000U 
                                       & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                      & (0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt 
        = ((IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
           & (IData)((((0x7f800000U == (0x7f800000U 
                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
                      & (0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt) 
              & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
                 & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__80__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__80__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__80__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__80__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__80__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__80__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__80__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__80__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__122__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__122__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__122__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__122__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__122__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__122__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__122__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__122__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__118__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__118__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__118__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__118__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__118__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__118__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__118__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__118__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__125__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__125__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__125__input_0 
        = (1U & (~ (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__125__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__125__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__125__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__125__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__125__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__106__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__106__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1) 
                        & ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6)) 
                           | (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
                                      >> 0x0000002fU))))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__106__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__106__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__106__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__106__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__106__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__106__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__81__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__81__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__81__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__81__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__81__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__81__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__81__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__81__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__84__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__84__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__84__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__84__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__84__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__84__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__84__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__84__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__85__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__85__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__85__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__85__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__85__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__85__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__85__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__85__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_FpBitsToFloat_8U_23U_1_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_59 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__64__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__65__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__65__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__65__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__64__input_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__65__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__66__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__66__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__66__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__64__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__66__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__64__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__64__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__64__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__64__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__64__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__111__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__111__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__111__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__111__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__111__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__111__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__111__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__111__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__82__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__82__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__82__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__82__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__82__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__82__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__82__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__82__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__112__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__112__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__112__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__112__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__112__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__112__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__112__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__112__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__86__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__86__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__86__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__86__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__86__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__86__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__86__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__86__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__114__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__114__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__114__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__114__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__114__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__114__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__114__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__114__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__107__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__107__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__107__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__107__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__107__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__107__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__107__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__107__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__109__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__109__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__109__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__109__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__109__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__109__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__109__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__109__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__113__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__113__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__113__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__113__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__113__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__113__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__113__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__113__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__87__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__87__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__87__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__87__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__87__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__87__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__87__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__87__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__115__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__115__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__115__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__115__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__115__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__115__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__115__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__115__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__108__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__108__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__108__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__108__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__108__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__108__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__108__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__108__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__110__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__110__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__110__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__110__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__110__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__110__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__110__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__110__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__88__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__88__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__88__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__88__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__88__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__88__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__88__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__88__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__116__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__116__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__116__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__116__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__116__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__116__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__116__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__116__Vfuncout;
}

void Vsim_HLS_fp32_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_2__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__131__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__131__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__131__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__131__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__131__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__131__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__131__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__131__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__132__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__132__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__132__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__132__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__132__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__132__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__132__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__132__sel = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__133__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__133__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__133__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__133__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__135__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__135__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__135__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__135__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__139__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__139__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__139__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__139__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__140__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__140__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__140__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__140__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__141__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__141__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__141__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__141__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__141__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__141__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__141__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__141__sel = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__142__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__142__Vfuncout = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__142__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__142__input_0 = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__142__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__142__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__142__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__142__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__143__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__143__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__143__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__143__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__143__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__143__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__143__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__143__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__153__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__153__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__153__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__153__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__153__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__153__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__153__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__153__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__154__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__154__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__154__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__154__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__154__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__154__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__154__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__154__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__155__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__155__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__155__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__155__vector = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__156__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__156__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__156__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__156__input_0 = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__156__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__156__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__156__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__156__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__157__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__157__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__157__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__157__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__157__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__157__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__157__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__157__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__158__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__158__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__158__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__158__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__158__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__158__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__158__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__158__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__159__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__159__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__159__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__159__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__159__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__159__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__159__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__159__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__160__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__160__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__160__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__160__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__160__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__160__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__160__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__160__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__160__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__160__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__162__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__162__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__162__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__162__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__162__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__162__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__162__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__162__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__163__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__163__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__163__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__163__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__166__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__166__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__166__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__166__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__166__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__166__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__169__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__169__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__169__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__169__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__169__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__169__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__169__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__169__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__181__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__181__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__181__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__181__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__181__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__181__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__181__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__181__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__183__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__183__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__183__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__183__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__183__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__183__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__183__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__183__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__184__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__184__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__184__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__184__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__184__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__184__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__184__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__184__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__185__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__185__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__185__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__185__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__185__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__185__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__185__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__185__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__187__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__187__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__187__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__187__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__187__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__187__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__187__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__187__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__188__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__188__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__188__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__188__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__188__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__188__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__188__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__188__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__190__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__190__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__190__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__190__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__190__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__190__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__190__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__190__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__191__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__191__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__191__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__191__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__191__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__191__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__191__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__191__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_6_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2 
                = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
                                 >> 0x2fU)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp)))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__155__vector 
                = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__Vstatic__tmp 
                = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__155__vector), 1U));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__155__Vfuncout 
                = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__Vstatic__tmp));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__155__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_8_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1;
        }
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_59))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_59;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_3;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_4;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__153__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__153__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__153__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__153__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__153__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__153__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__153__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__153__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_3_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5 
                = (0x000000ffU & ((IData)(0x81U) + 
                                  ((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 
                                    >> 0x00000017U) 
                                   + (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 
                                      >> 0x00000017U))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                  & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm)))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__159__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__159__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__159__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__159__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__159__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__159__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__159__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__159__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__156__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__156__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__156__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__156__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__156__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__156__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__156__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__156__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1)))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__154__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__154__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__154__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__154__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__154__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__154__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__154__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__154__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl 
        = (0x000003ffU & ((IData)(0x0141U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__134__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__134__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__134__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__134__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__140__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__140__vector), 7U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__140__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__140__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__142__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x2fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__142__input_1 
        = (0x00003fffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__142__input_0 
        = (0x00003fffffffffffULL & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__142__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__142__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__142__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__142__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__142__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0));
    vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4 
        = ((((~ (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x0000002fU))) | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__135__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__135__vector), 8U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__135__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_23_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_3 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_FpBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_17_nl))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__158__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__158__input_1 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__158__input_0 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1);
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__158__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__158__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__158__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__158__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__158__Vfuncout;
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
               & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U))) & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__135__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva 
        = (1U & ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
                          >> 0x00000016U)) & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2) 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                                          >> 0x0000002fU))) 
                                              | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x0000000000bfffffULL 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__141__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1) 
           & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                      >> 0x0000002fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__141__input_1 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__141__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1))) 
                   | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse))))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_FpBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_13_nl))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__157__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__157__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__157__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__157__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__157__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__157__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__157__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__157__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva = 0ULL;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__141__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__141__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__141__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__141__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__141__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__160__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt)));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__160__input_0 
                = ((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                    ^ vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                   >> 0x0000001fU);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__160__input_1 
                = (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__160__input_2 
                = (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__160__input_0) 
                   & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__160__sel));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__160__input_1) 
                      & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__160__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__160__input_2) 
                      & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__160__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__160__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_3 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__160__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var = 1U;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
                                                  >> 0x17U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__161__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__161__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__161__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__161__Vfuncout))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 
                = (1U & (~ (IData)(((0x7f800000U != 
                                     (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                    | (0U == (0x007fffffU 
                                              & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt))))));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3 
                = (1U & (~ (IData)(((0x7f800000U != 
                                     (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                    | (0U == (0x007fffffU 
                                              & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt))))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_28_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 
                = (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt);
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_31_nl)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 
                = (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt);
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva) 
           & (0x00003fffff800000ULL == (0x00003fffff800000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__162__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)) 
                 | (0xffU != (0x000000ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__162__input_1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__163__vector 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__163__Vfuncout 
        = (0x007fffffU & (- (IData)((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__163__vector))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__162__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__163__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__162__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__162__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__162__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__162__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__162__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__143__sel 
        = ((4U & ((~ ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)) 
                                     | ((0xffU == (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs))) 
                                    << 1U)) | ((0xffU 
                                                != 
                                                (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)))) 
                                               & ((IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4) 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__143__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__143__input_2 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__143__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__143__sel)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__143__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__143__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__143__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__143__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__143__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__169__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__169__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__169__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                   >> 0x0000002fU)) 
                          | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__169__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__169__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__169__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__169__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__169__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__191__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__191__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__191__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__191__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__191__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__191__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__191__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__191__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__190__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__190__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__190__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__190__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__190__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__190__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__190__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__190__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__164__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)));
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__164__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__164__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__164__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__164__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__164__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55 
        = (IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                   | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl 
        = (0x000003ffU & ((IData)(0x0181U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__136__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__136__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__136__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__136__Vfuncout)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__133__vector 
        = (0x0000ffffffffffffULL & ((QData)((IData)(
                                                    (0x00800000U 
                                                     | (0x007fffffU 
                                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1)))) 
                                    * (QData)((IData)(
                                                      (0x00800000U 
                                                       | (0x007fffffU 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__133__Vfuncout 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__133__vector;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__133__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl 
        = (0x000003ffU & (VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__167__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__167__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__167__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__167__Vfuncout))) 
                          + VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__168__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__168__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__168__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__168__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__166__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__166__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__166__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__166__input_1)
            : 0U);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__166__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__166__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__165__sel 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__165__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__165__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__165__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__165__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__165__Vfuncout)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__184__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__184__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__184__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__184__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__184__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__184__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__184__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__184__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__131__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__131__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__131__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__131__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__131__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__131__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__131__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__131__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl 
        = (0x000007ffU & (VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__137__vector 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__137__Vfuncout 
                            = ((0x00000200U & ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__137__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__137__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__137__Vfuncout))) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__138__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__138__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__138__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__138__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__185__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__185__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__185__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__185__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__185__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__185__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__185__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__185__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__139__vector 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp 
        = (0x000003ffU & VL_SHIFTR_III(10,10,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__139__vector), 9U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__139__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__139__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1) 
           | ((0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
              | (0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__132__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__132__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__132__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__132__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__132__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__132__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__132__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__132__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__181__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__181__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__181__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__181__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__181__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__181__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__181__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__181__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__183__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__183__input_1 
        = (1U & (~ ((~ (IData)(((0x7f800000U == (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse)))) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__183__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__183__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__183__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__183__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__183__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__183__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__187__sel 
        = (0xffU == (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                    >> 0x00000017U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__187__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__187__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__187__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__187__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__187__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__187__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__187__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__188__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__188__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__188__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__188__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__188__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__188__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__188__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__188__Vfuncout;
}

void Vsim_HLS_fp32_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_2__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7;
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__128__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__128__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__128__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__128__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__128__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__128__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__128__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__128__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__129__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__129__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__129__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__129__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__130__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__130__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__130__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__130__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__144__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__144__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__144__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__144__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__144__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__144__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__144__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__144__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__145__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__145__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__145__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__145__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__145__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__145__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__145__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__145__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__146__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__146__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__146__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__146__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__146__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__146__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__146__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__146__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__147__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__147__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__147__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__147__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__147__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__147__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__147__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__147__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__148__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__148__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__148__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__148__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__148__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__148__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__148__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__148__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__149__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__149__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__149__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__149__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__149__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__149__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__149__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__149__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__150__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__150__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__150__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__150__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__150__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__150__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__150__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__150__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__151__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__151__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__151__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__151__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__151__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__151__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__151__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__151__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__152__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__152__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__152__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__152__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__152__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__152__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__152__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__152__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__170__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__170__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__170__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__170__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__170__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__170__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__170__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__170__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__171__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__171__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__171__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__171__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__171__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__171__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__171__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__171__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__172__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__172__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__172__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__172__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__172__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__172__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__172__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__172__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__173__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__173__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__173__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__173__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__173__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__173__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__173__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__173__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__174__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__174__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__174__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__174__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__174__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__174__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__174__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__174__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__175__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__175__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__175__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__175__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__175__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__175__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__175__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__175__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__176__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__176__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__176__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__176__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__176__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__176__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__176__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__176__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__177__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__177__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__177__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__177__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__177__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__177__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__177__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__177__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__178__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__178__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__178__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__178__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__178__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__178__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__178__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__178__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__179__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__179__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__179__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__179__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__179__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__179__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__179__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__179__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__180__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__180__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__180__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__180__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__180__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__180__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__180__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__180__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__182__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__182__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__182__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__182__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__182__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__182__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__182__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__182__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__186__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__186__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__186__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__186__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__186__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__186__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__186__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__186__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__189__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__189__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__189__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__189__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__189__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__189__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__189__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__189__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
            ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
               & (IData)(((0x0ff8U == (0x0ff8U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_dout_pvld))) 
                          & (3U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_23)))))
            : ((2U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                   & (IData)(((0x07f8U == (0x07f8U 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_32))) 
                              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_1.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld))))
                : ((1U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                    ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                       & (0x03f8U == (0x03f8U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_31))))
                    : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__147__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__147__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__147__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__147__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__147__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__147__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__147__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__147__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(((0x7f800000U == (0x7f800000U 
                                       & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                      & (0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt 
        = ((IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
           & (IData)((((0x7f800000U == (0x7f800000U 
                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
                      & (0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt) 
              & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
                 & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__144__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__144__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__144__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__144__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__144__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__144__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__144__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__144__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__186__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__186__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__186__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__186__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__186__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__186__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__186__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__186__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__182__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__182__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__182__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__182__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__182__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__182__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__182__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__182__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__189__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__189__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__189__input_0 
        = (1U & (~ (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__189__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__189__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__189__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__189__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__189__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__170__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__170__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1) 
                        & ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6)) 
                           | (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
                                      >> 0x0000002fU))))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__170__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__170__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__170__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__170__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__170__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__170__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__145__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__145__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__145__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__145__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__145__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__145__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__145__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__145__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__148__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__148__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__148__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__148__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__148__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__148__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__148__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__148__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__149__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__149__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__149__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__149__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__149__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__149__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__149__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__149__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_FpBitsToFloat_8U_23U_1_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_59 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__128__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__129__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__129__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__129__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__128__input_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__129__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__130__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__130__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__130__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__128__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__130__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__128__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__128__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__128__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__128__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__128__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__175__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__175__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__175__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__175__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__175__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__175__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__175__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__175__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__146__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__146__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__146__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__146__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__146__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__146__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__146__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__146__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__176__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__176__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__176__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__176__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__176__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__176__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__176__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__176__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__150__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__150__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__150__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__150__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__150__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__150__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__150__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__150__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__178__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__178__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__178__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__178__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__178__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__178__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__178__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__178__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__171__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__171__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__171__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__171__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__171__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__171__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__171__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__171__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__173__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__173__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__173__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__173__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__173__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__173__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__173__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__173__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__177__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__177__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__177__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__177__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__177__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__177__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__177__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__177__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__151__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__151__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__151__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__151__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__151__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__151__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__151__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__151__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__179__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__179__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__179__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__179__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__179__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__179__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__179__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__179__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__172__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__172__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__172__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__172__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__172__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__172__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__172__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__172__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__174__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__174__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__174__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__174__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__174__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__174__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__174__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__174__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__152__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__152__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__152__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__152__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__152__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__152__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__152__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__152__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__180__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__180__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__180__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__180__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__180__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__180__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__180__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__180__Vfuncout;
}

void Vsim_HLS_fp32_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_3__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__195__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__195__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__195__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__195__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__195__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__195__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__195__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__195__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__196__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__196__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__196__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__196__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__196__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__196__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__196__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__196__sel = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__197__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__197__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__197__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__197__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__199__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__199__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__199__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__199__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__203__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__203__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__203__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__203__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__204__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__204__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__204__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__204__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__205__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__205__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__205__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__205__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__205__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__205__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__205__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__205__sel = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__206__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__206__Vfuncout = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__206__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__206__input_0 = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__206__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__206__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__206__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__206__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__207__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__207__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__207__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__207__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__207__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__207__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__207__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__207__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__217__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__217__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__217__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__217__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__217__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__217__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__217__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__217__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__218__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__218__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__218__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__218__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__218__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__218__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__218__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__218__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__219__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__219__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__219__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__219__vector = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__220__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__220__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__220__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__220__input_0 = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__220__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__220__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__220__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__220__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__221__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__221__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__221__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__221__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__221__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__221__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__221__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__221__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__222__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__222__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__222__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__222__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__222__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__222__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__222__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__222__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__223__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__223__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__223__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__223__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__223__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__223__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__223__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__223__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__224__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__224__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__224__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__224__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__224__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__224__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__224__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__224__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__224__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__224__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__226__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__226__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__226__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__226__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__226__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__226__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__226__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__226__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__227__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__227__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__227__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__227__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__230__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__230__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__230__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__230__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__230__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__230__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__233__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__233__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__233__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__233__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__233__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__233__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__233__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__233__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__245__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__245__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__245__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__245__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__245__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__245__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__245__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__245__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__247__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__247__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__247__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__247__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__247__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__247__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__247__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__247__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__248__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__248__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__248__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__248__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__248__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__248__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__248__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__248__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__249__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__249__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__249__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__249__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__249__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__249__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__249__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__249__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__251__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__251__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__251__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__251__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__251__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__251__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__251__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__251__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__252__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__252__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__252__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__252__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__252__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__252__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__252__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__252__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__255__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__255__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__255__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__255__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__255__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__255__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__255__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__255__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_6_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2 
                = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
                                 >> 0x2fU)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp)))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__219__vector 
                = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__Vstatic__tmp 
                = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__219__vector), 1U));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__219__Vfuncout 
                = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__Vstatic__tmp));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__219__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_8_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1;
        }
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_59))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_59;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_3;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_3_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5 
                = (0x000000ffU & ((IData)(0x81U) + 
                                  ((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 
                                    >> 0x00000017U) 
                                   + (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 
                                      >> 0x00000017U))));
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_4;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__217__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__217__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__217__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__217__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__217__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__217__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__217__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__217__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                  & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm)))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__223__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__223__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__223__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__223__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__223__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__223__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__223__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__223__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__220__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__220__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__220__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__220__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__220__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__220__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__220__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__220__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1)))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__218__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__218__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__218__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__218__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__218__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__218__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__218__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__218__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl 
        = (0x000003ffU & ((IData)(0x0141U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__198__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__198__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__198__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__198__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__204__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__204__vector), 7U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__204__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__204__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__206__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x2fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__206__input_1 
        = (0x00003fffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__206__input_0 
        = (0x00003fffffffffffULL & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__206__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__206__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__206__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__206__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__206__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0));
    vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4 
        = ((((~ (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x0000002fU))) | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__199__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__199__vector), 8U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__199__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_23_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_3 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_FpBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_17_nl))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__222__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__222__input_1 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__222__input_0 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1);
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__222__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__222__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__222__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__222__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__222__Vfuncout;
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
               & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U))) & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__199__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva 
        = (1U & ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
                          >> 0x00000016U)) & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2) 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                                          >> 0x0000002fU))) 
                                              | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x0000000000bfffffULL 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__205__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1) 
           & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                      >> 0x0000002fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__205__input_1 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__205__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1))) 
                   | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse))))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_FpBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_13_nl))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__221__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__221__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__221__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__221__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__221__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__221__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__221__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__221__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva = 0ULL;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__205__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__205__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__205__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__205__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__205__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__224__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt)));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__224__input_0 
                = ((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                    ^ vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                   >> 0x0000001fU);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__224__input_1 
                = (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__224__input_2 
                = (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__224__input_0) 
                   & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__224__sel));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__224__input_1) 
                      & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__224__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__224__input_2) 
                      & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__224__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__224__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_3 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__224__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var = 1U;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
                                                  >> 0x17U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__225__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__225__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__225__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__225__Vfuncout))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 
                = (1U & (~ (IData)(((0x7f800000U != 
                                     (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                    | (0U == (0x007fffffU 
                                              & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt))))));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3 
                = (1U & (~ (IData)(((0x7f800000U != 
                                     (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                    | (0U == (0x007fffffU 
                                              & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt))))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_28_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 
                = (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt);
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_31_nl)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 
                = (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt);
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva) 
           & (0x00003fffff800000ULL == (0x00003fffff800000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__226__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)) 
                 | (0xffU != (0x000000ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__226__input_1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__227__vector 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__227__Vfuncout 
        = (0x007fffffU & (- (IData)((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__227__vector))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__226__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__227__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__226__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__226__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__226__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__226__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__226__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__207__sel 
        = ((4U & ((~ ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)) 
                                     | ((0xffU == (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs))) 
                                    << 1U)) | ((0xffU 
                                                != 
                                                (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)))) 
                                               & ((IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4) 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__207__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__207__input_2 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__207__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__207__sel)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__207__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__207__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__207__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__207__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__207__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__233__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__233__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__233__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                   >> 0x0000002fU)) 
                          | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__233__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__233__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__233__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__233__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__233__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__255__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__255__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__255__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__255__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__255__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__255__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__255__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__255__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__228__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)));
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__228__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__228__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__228__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__228__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__228__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55 
        = (IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                   | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl 
        = (0x000003ffU & ((IData)(0x0181U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__200__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__200__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__200__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__200__Vfuncout)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__197__vector 
        = (0x0000ffffffffffffULL & ((QData)((IData)(
                                                    (0x00800000U 
                                                     | (0x007fffffU 
                                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1)))) 
                                    * (QData)((IData)(
                                                      (0x00800000U 
                                                       | (0x007fffffU 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__197__Vfuncout 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__197__vector;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__197__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl 
        = (0x000003ffU & (VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__231__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__231__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__231__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__231__Vfuncout))) 
                          + VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__232__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__232__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__232__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__232__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__230__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__230__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__230__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__230__input_1)
            : 0U);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__230__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__230__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__229__sel 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__229__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__229__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__229__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__229__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__229__Vfuncout)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__248__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__248__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__248__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__248__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__248__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__248__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__248__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__248__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__195__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__195__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__195__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__195__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__195__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__195__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__195__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__195__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl 
        = (0x000007ffU & (VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__201__vector 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__201__Vfuncout 
                            = ((0x00000200U & ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__201__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__201__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__201__Vfuncout))) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__202__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__202__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__202__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__202__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__249__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__249__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__249__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__249__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__249__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__249__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__249__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__249__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__203__vector 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp 
        = (0x000003ffU & VL_SHIFTR_III(10,10,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__203__vector), 9U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__203__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__203__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1) 
           | ((0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
              | (0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__196__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__196__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__196__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__196__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__196__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__196__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__196__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__196__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__245__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__245__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__245__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__245__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__245__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__245__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__245__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__245__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__247__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__247__input_1 
        = (1U & (~ ((~ (IData)(((0x7f800000U == (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse)))) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__247__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__247__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__247__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__247__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__247__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__247__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__251__sel 
        = (0xffU == (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                    >> 0x00000017U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__251__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__251__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__251__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__251__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__251__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__251__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__251__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__252__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__252__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__252__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__252__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__252__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__252__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__252__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__252__Vfuncout;
}

void Vsim_HLS_fp32_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_3__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7;
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__192__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__192__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__192__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__192__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__192__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__192__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__192__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__192__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__193__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__193__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__193__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__193__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__194__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__194__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__194__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__194__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__208__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__208__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__208__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__208__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__208__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__208__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__208__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__208__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__209__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__209__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__209__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__209__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__209__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__209__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__209__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__209__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__210__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__210__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__210__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__210__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__210__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__210__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__210__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__210__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__211__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__211__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__211__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__211__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__211__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__211__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__211__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__211__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__212__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__212__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__212__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__212__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__212__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__212__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__212__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__212__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__213__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__213__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__213__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__213__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__213__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__213__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__213__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__213__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__214__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__214__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__214__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__214__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__214__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__214__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__214__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__214__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__215__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__215__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__215__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__215__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__215__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__215__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__215__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__215__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__216__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__216__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__216__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__216__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__216__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__216__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__216__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__216__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__234__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__234__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__234__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__234__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__234__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__234__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__234__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__234__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__235__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__235__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__235__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__235__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__235__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__235__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__235__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__235__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__236__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__236__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__236__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__236__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__236__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__236__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__236__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__236__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__237__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__237__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__237__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__237__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__237__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__237__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__237__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__237__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__238__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__238__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__238__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__238__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__238__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__238__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__238__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__238__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__239__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__239__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__239__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__239__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__239__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__239__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__239__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__239__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__240__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__240__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__240__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__240__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__240__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__240__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__240__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__240__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__241__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__241__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__241__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__241__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__241__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__241__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__241__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__241__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__242__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__242__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__242__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__242__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__242__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__242__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__242__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__242__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__243__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__243__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__243__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__243__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__243__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__243__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__243__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__243__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__244__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__244__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__244__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__244__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__244__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__244__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__244__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__244__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__246__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__246__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__246__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__246__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__246__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__246__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__246__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__246__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__250__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__250__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__250__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__250__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__250__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__250__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__250__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__250__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__253__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__253__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__253__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__253__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__253__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__253__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__253__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__253__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
            ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
               & (IData)(((0x0ff0U == (0x0ff0U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_dout_pvld))) 
                          & (7U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_24)))))
            : ((2U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                   & (IData)(((0x07f0U == (0x07f0U 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_32))) 
                              & (6U == (6U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_24))))))
                : ((1U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                    ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                       & (IData)(((0x03f0U == (0x03f0U 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_31))) 
                                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_2.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld))))
                    : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                       & (0x01f0U == (0x01f0U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_30)))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__211__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__211__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__211__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__211__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__211__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__211__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__211__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__211__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(((0x7f800000U == (0x7f800000U 
                                       & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                      & (0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt 
        = ((IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
           & (IData)((((0x7f800000U == (0x7f800000U 
                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
                      & (0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt) 
              & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
                 & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__208__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__208__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__208__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__208__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__208__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__208__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__208__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__208__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__250__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__250__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__250__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__250__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__250__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__250__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__250__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__250__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__246__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__246__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__246__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__246__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__246__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__246__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__246__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__246__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__253__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__253__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__253__input_0 
        = (1U & (~ (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__253__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__253__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__253__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__253__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__253__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__234__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__234__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1) 
                        & ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6)) 
                           | (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
                                      >> 0x0000002fU))))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__234__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__234__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__234__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__234__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__234__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__234__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__209__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__209__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__209__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__209__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__209__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__209__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__209__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__209__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__212__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__212__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__212__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__212__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__212__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__212__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__212__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__212__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__213__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__213__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__213__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__213__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__213__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__213__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__213__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__213__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_FpBitsToFloat_8U_23U_1_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_59 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__192__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__193__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__193__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__193__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__192__input_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__193__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__194__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__194__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__194__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__192__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__194__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__192__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__192__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__192__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__192__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__192__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__239__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__239__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__239__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__239__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__239__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__239__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__239__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__239__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__210__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__210__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__210__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__210__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__210__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__210__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__210__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__210__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__240__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__240__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__240__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__240__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__240__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__240__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__240__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__240__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__214__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__214__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__214__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__214__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__214__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__214__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__214__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__214__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__242__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__242__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__242__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__242__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__242__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__242__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__242__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__242__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__235__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__235__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__235__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__235__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__235__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__235__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__235__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__235__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__237__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__237__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__237__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__237__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__237__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__237__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__237__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__237__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__241__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__241__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__241__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__241__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__241__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__241__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__241__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__241__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__215__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__215__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__215__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__215__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__215__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__215__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__215__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__215__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__243__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__243__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__243__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__243__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__243__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__243__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__243__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__243__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__236__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__236__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__236__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__236__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__236__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__236__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__236__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__236__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__238__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__238__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__238__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__238__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__238__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__238__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__238__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__238__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__216__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__216__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__216__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__216__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__216__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__216__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__216__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__216__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__244__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__244__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__244__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__244__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__244__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__244__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__244__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__244__Vfuncout;
}

void Vsim_HLS_fp32_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_4__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__259__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__259__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__259__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__259__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__259__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__259__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__259__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__259__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__260__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__260__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__260__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__260__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__260__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__260__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__260__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__260__sel = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__261__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__261__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__261__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__261__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__263__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__263__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__263__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__263__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__267__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__267__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__267__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__267__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__268__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__268__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__268__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__268__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__269__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__269__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__269__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__269__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__269__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__269__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__269__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__269__sel = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__270__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__270__Vfuncout = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__270__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__270__input_0 = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__270__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__270__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__270__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__270__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__271__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__271__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__271__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__271__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__271__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__271__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__271__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__271__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__281__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__281__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__281__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__281__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__281__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__281__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__281__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__281__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__282__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__282__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__282__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__282__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__282__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__282__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__282__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__282__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__283__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__283__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__283__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__283__vector = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__284__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__284__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__284__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__284__input_0 = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__284__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__284__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__284__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__284__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__285__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__285__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__285__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__285__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__285__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__285__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__285__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__285__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__286__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__286__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__286__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__286__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__286__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__286__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__286__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__286__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__287__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__287__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__287__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__287__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__287__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__287__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__287__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__287__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__288__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__288__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__288__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__288__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__288__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__288__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__288__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__288__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__288__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__288__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__290__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__290__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__290__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__290__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__290__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__290__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__290__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__290__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__291__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__291__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__291__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__291__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__294__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__294__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__294__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__294__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__294__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__294__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__297__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__297__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__297__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__297__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__297__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__297__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__297__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__297__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__309__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__309__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__309__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__309__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__309__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__309__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__309__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__309__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__311__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__311__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__311__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__311__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__311__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__311__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__311__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__311__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__312__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__312__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__312__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__312__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__312__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__312__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__312__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__312__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__313__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__313__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__313__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__313__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__313__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__313__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__313__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__313__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__315__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__315__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__315__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__315__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__315__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__315__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__315__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__315__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__316__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__316__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__316__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__316__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__316__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__316__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__316__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__316__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__318__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__318__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__318__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__318__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__318__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__318__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__318__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__318__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__319__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__319__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__319__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__319__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__319__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__319__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__319__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__319__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_6_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2 
                = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
                                 >> 0x2fU)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp)))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__283__vector 
                = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__Vstatic__tmp 
                = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__283__vector), 1U));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__283__Vfuncout 
                = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__Vstatic__tmp));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__283__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_8_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1;
        }
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_59))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_59;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_3;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_4;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__281__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__281__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__281__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__281__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__281__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__281__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__281__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__281__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_3_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5 
                = (0x000000ffU & ((IData)(0x81U) + 
                                  ((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 
                                    >> 0x00000017U) 
                                   + (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 
                                      >> 0x00000017U))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                  & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm)))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__287__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__287__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__287__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__287__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__287__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__287__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__287__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__287__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__284__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__284__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__284__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__284__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__284__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__284__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__284__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__284__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1)))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__282__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__282__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__282__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__282__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__282__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__282__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__282__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__282__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl 
        = (0x000003ffU & ((IData)(0x0141U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__262__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__262__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__262__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__262__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__268__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__268__vector), 7U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__268__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__268__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__270__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x2fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__270__input_1 
        = (0x00003fffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__270__input_0 
        = (0x00003fffffffffffULL & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__270__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__270__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__270__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__270__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__270__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0));
    vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4 
        = ((((~ (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x0000002fU))) | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__263__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__263__vector), 8U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__263__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_23_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_3 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_FpBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_17_nl))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__286__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__286__input_1 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__286__input_0 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1);
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__286__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__286__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__286__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__286__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__286__Vfuncout;
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
               & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U))) & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__263__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva 
        = (1U & ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
                          >> 0x00000016U)) & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2) 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                                          >> 0x0000002fU))) 
                                              | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x0000000000bfffffULL 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__269__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1) 
           & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                      >> 0x0000002fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__269__input_1 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__269__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1))) 
                   | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse))))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_FpBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_13_nl))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__285__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__285__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__285__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__285__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__285__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__285__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__285__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__285__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva = 0ULL;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__269__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__269__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__269__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__269__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__269__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__288__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt)));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__288__input_0 
                = ((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                    ^ vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                   >> 0x0000001fU);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__288__input_1 
                = (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__288__input_2 
                = (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__288__input_0) 
                   & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__288__sel));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__288__input_1) 
                      & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__288__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__288__input_2) 
                      & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__288__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__288__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_3 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__288__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var = 1U;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
                                                  >> 0x17U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__289__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__289__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__289__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__289__Vfuncout))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 
                = (1U & (~ (IData)(((0x7f800000U != 
                                     (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                    | (0U == (0x007fffffU 
                                              & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt))))));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3 
                = (1U & (~ (IData)(((0x7f800000U != 
                                     (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                    | (0U == (0x007fffffU 
                                              & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt))))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_28_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 
                = (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt);
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_31_nl)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 
                = (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt);
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva) 
           & (0x00003fffff800000ULL == (0x00003fffff800000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__290__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)) 
                 | (0xffU != (0x000000ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__290__input_1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__291__vector 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__291__Vfuncout 
        = (0x007fffffU & (- (IData)((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__291__vector))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__290__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__291__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__290__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__290__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__290__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__290__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__290__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__271__sel 
        = ((4U & ((~ ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)) 
                                     | ((0xffU == (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs))) 
                                    << 1U)) | ((0xffU 
                                                != 
                                                (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)))) 
                                               & ((IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4) 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__271__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__271__input_2 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__271__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__271__sel)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__271__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__271__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__271__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__271__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__271__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__297__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__297__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__297__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                   >> 0x0000002fU)) 
                          | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__297__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__297__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__297__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__297__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__297__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__319__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__319__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__319__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_4.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__319__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__319__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__319__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__319__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__319__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__318__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__318__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__318__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_4.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__318__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__318__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__318__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__318__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__318__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_4.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_4.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__292__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)));
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__292__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__292__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__292__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__292__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__292__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55 
        = (IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                   | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl 
        = (0x000003ffU & ((IData)(0x0181U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__264__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__264__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__264__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__264__Vfuncout)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__261__vector 
        = (0x0000ffffffffffffULL & ((QData)((IData)(
                                                    (0x00800000U 
                                                     | (0x007fffffU 
                                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1)))) 
                                    * (QData)((IData)(
                                                      (0x00800000U 
                                                       | (0x007fffffU 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__261__Vfuncout 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__261__vector;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__261__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl 
        = (0x000003ffU & (VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__295__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__295__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__295__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__295__Vfuncout))) 
                          + VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__296__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__296__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__296__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__296__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__294__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__294__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__294__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__294__input_1)
            : 0U);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__294__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__294__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__293__sel 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__293__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__293__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__293__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__293__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__293__Vfuncout)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__312__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__312__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__312__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__312__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__312__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__312__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__312__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__312__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__259__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__259__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__259__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__259__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__259__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__259__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__259__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__259__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl 
        = (0x000007ffU & (VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__265__vector 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__265__Vfuncout 
                            = ((0x00000200U & ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__265__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__265__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__265__Vfuncout))) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__266__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__266__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__266__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__266__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__313__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__313__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__313__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__313__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__313__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__313__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__313__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__313__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__267__vector 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp 
        = (0x000003ffU & VL_SHIFTR_III(10,10,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__267__vector), 9U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__267__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__267__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1) 
           | ((0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
              | (0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__260__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__260__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__260__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__260__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__260__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__260__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__260__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__260__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__309__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__309__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__309__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__309__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__309__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__309__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__309__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__309__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__311__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__311__input_1 
        = (1U & (~ ((~ (IData)(((0x7f800000U == (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse)))) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__311__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__311__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__311__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__311__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__311__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__311__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__315__sel 
        = (0xffU == (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                    >> 0x00000017U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__315__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__315__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__315__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__315__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__315__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__315__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__315__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__316__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__316__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__316__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__316__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__316__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__316__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__316__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__316__Vfuncout;
}

void Vsim_HLS_fp32_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_4__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7;
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__256__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__256__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__256__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__256__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__256__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__256__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__256__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__256__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__257__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__257__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__257__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__257__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__258__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__258__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__258__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__258__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__272__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__272__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__272__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__272__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__272__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__272__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__272__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__272__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__273__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__273__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__273__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__273__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__273__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__273__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__273__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__273__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__274__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__274__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__274__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__274__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__274__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__274__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__274__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__274__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__275__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__275__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__275__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__275__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__275__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__275__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__275__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__275__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__276__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__276__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__276__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__276__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__276__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__276__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__276__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__276__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__277__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__277__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__277__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__277__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__277__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__277__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__277__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__277__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__278__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__278__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__278__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__278__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__278__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__278__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__278__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__278__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__279__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__279__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__279__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__279__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__279__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__279__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__279__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__279__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__280__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__280__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__280__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__280__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__280__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__280__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__280__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__280__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__298__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__298__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__298__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__298__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__298__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__298__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__298__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__298__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__299__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__299__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__299__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__299__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__299__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__299__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__299__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__299__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__300__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__300__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__300__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__300__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__300__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__300__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__300__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__300__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__301__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__301__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__301__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__301__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__301__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__301__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__301__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__301__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__302__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__302__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__302__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__302__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__302__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__302__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__302__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__302__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__303__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__303__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__303__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__303__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__303__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__303__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__303__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__303__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__304__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__304__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__304__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__304__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__304__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__304__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__304__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__304__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__305__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__305__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__305__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__305__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__305__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__305__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__305__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__305__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__306__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__306__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__306__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__306__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__306__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__306__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__306__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__306__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__307__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__307__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__307__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__307__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__307__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__307__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__307__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__307__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__308__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__308__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__308__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__308__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__308__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__308__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__308__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__308__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__310__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__310__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__310__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__310__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__310__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__310__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__310__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__310__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__314__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__314__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__314__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__314__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__314__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__314__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__314__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__314__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__317__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__317__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__317__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__317__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__317__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__317__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__317__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__317__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
            ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
               & (IData)(((0x0fe0U == (0x0fe0U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_dout_pvld))) 
                          & (0x0fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_25)))))
            : ((2U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                   & (IData)(((0x07e0U == (0x07e0U 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_32))) 
                              & (0x0eU == (0x0eU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_25))))))
                : ((1U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                    ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                       & (IData)(((0x03e0U == (0x03e0U 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_31))) 
                                  & (0x0cU == (0x0cU 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_25))))))
                    : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                       & (IData)(((0x01e0U == (0x01e0U 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_30))) 
                                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_3.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld)))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__275__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__275__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__275__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__275__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__275__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__275__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__275__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__275__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(((0x7f800000U == (0x7f800000U 
                                       & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                      & (0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt 
        = ((IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
           & (IData)((((0x7f800000U == (0x7f800000U 
                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
                      & (0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt) 
              & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
                 & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__272__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__272__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__272__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__272__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__272__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__272__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__272__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__272__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__314__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__314__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__314__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__314__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__314__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__314__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__314__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__314__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__310__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__310__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__310__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__310__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__310__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__310__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__310__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__310__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__317__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__317__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__317__input_0 
        = (1U & (~ (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__317__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__317__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__317__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__317__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__317__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__298__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__298__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1) 
                        & ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6)) 
                           | (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
                                      >> 0x0000002fU))))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__298__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__298__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__298__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__298__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__298__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__298__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__273__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__273__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__273__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__273__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__273__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__273__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__273__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__273__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__276__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__276__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__276__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__276__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__276__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__276__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__276__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__276__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__277__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__277__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__277__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__277__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__277__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__277__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__277__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__277__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_FpBitsToFloat_8U_23U_1_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_59 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__256__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__257__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__257__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__257__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__256__input_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__257__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__258__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__258__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__258__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__256__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__258__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__256__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__256__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__256__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__256__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__256__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__303__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__303__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__303__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__303__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__303__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__303__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__303__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__303__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__274__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__274__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__274__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__274__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__274__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__274__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__274__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__274__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__304__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__304__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__304__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__304__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__304__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__304__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__304__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__304__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__278__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__278__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__278__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__278__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__278__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__278__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__278__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__278__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__306__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__306__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__306__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__306__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__306__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__306__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__306__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__306__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__299__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__299__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__299__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__299__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__299__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__299__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__299__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__299__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__301__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__301__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__301__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__301__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__301__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__301__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__301__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__301__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__305__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__305__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__305__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__305__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__305__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__305__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__305__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__305__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__279__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__279__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__279__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__279__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__279__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__279__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__279__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__279__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__307__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__307__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__307__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__307__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__307__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__307__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__307__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__307__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__300__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__300__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__300__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__300__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__300__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__300__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__300__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__300__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__302__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__302__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__302__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__302__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__302__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__302__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__302__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__302__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__280__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__280__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__280__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__280__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__280__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__280__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__280__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__280__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__308__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__308__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__308__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__308__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__308__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__308__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__308__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__308__Vfuncout;
}

void Vsim_HLS_fp32_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_5__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__323__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__323__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__323__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__323__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__323__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__323__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__323__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__323__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__324__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__324__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__324__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__324__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__324__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__324__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__324__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__324__sel = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__325__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__325__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__325__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__325__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__327__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__327__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__327__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__327__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__331__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__331__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__331__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__331__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__332__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__332__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__332__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__332__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__333__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__333__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__333__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__333__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__333__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__333__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__333__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__333__sel = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__334__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__334__Vfuncout = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__334__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__334__input_0 = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__334__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__334__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__334__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__334__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__335__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__335__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__335__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__335__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__335__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__335__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__335__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__335__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__345__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__345__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__345__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__345__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__345__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__345__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__345__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__345__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__346__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__346__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__346__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__346__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__346__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__346__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__346__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__346__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__347__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__347__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__347__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__347__vector = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__348__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__348__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__348__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__348__input_0 = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__348__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__348__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__348__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__348__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__349__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__349__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__349__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__349__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__349__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__349__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__349__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__349__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__350__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__350__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__350__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__350__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__350__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__350__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__350__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__350__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__351__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__351__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__351__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__351__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__351__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__351__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__351__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__351__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__352__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__352__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__352__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__352__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__352__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__352__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__352__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__352__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__352__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__352__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__354__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__354__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__354__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__354__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__354__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__354__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__354__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__354__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__355__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__355__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__355__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__355__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__358__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__358__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__358__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__358__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__358__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__358__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__361__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__361__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__361__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__361__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__361__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__361__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__361__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__361__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__373__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__373__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__373__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__373__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__373__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__373__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__373__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__373__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__375__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__375__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__375__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__375__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__375__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__375__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__375__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__375__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__376__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__376__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__376__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__376__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__376__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__376__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__376__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__376__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__377__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__377__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__377__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__377__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__377__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__377__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__377__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__377__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__379__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__379__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__379__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__379__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__379__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__379__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__379__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__379__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__380__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__380__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__380__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__380__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__380__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__380__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__380__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__380__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__382__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__382__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__382__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__382__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__382__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__382__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__382__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__382__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__383__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__383__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__383__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__383__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__383__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__383__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__383__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__383__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_6_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2 
                = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
                                 >> 0x2fU)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp)))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__347__vector 
                = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__Vstatic__tmp 
                = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__347__vector), 1U));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__347__Vfuncout 
                = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__Vstatic__tmp));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__347__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_8_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1;
        }
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_59))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_59;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_3;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_4;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__345__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__345__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__345__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__345__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__345__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__345__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__345__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__345__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_3_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5 
                = (0x000000ffU & ((IData)(0x81U) + 
                                  ((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 
                                    >> 0x00000017U) 
                                   + (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 
                                      >> 0x00000017U))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                  & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm)))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__351__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__351__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__351__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__351__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__351__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__351__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__351__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__351__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__348__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__348__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__348__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__348__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__348__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__348__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__348__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__348__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1)))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__346__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__346__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__346__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__346__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__346__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__346__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__346__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__346__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl 
        = (0x000003ffU & ((IData)(0x0141U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__326__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__326__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__326__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__326__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__332__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__332__vector), 7U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__332__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__332__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__334__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x2fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__334__input_1 
        = (0x00003fffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__334__input_0 
        = (0x00003fffffffffffULL & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__334__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__334__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__334__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__334__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__334__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0));
    vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4 
        = ((((~ (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x0000002fU))) | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__327__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__327__vector), 8U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__327__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_23_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_3 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_FpBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_17_nl))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__350__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__350__input_1 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__350__input_0 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1);
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__350__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__350__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__350__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__350__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__350__Vfuncout;
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
               & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U))) & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__327__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva 
        = (1U & ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
                          >> 0x00000016U)) & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2) 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                                          >> 0x0000002fU))) 
                                              | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x0000000000bfffffULL 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__333__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1) 
           & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                      >> 0x0000002fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__333__input_1 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__333__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1))) 
                   | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse))))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_FpBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_13_nl))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__349__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__349__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__349__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__349__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__349__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__349__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__349__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__349__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva = 0ULL;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__333__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__333__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__333__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__333__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__333__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__352__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt)));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__352__input_0 
                = ((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                    ^ vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                   >> 0x0000001fU);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__352__input_1 
                = (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__352__input_2 
                = (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__352__input_0) 
                   & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__352__sel));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__352__input_1) 
                      & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__352__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__352__input_2) 
                      & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__352__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__352__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_3 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__352__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var = 1U;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
                                                  >> 0x17U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__353__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__353__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__353__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__353__Vfuncout))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 
                = (1U & (~ (IData)(((0x7f800000U != 
                                     (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                    | (0U == (0x007fffffU 
                                              & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt))))));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3 
                = (1U & (~ (IData)(((0x7f800000U != 
                                     (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                    | (0U == (0x007fffffU 
                                              & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt))))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_28_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 
                = (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt);
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_31_nl)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 
                = (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt);
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva) 
           & (0x00003fffff800000ULL == (0x00003fffff800000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__354__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)) 
                 | (0xffU != (0x000000ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__354__input_1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__355__vector 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__355__Vfuncout 
        = (0x007fffffU & (- (IData)((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__355__vector))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__354__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__355__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__354__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__354__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__354__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__354__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__354__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__335__sel 
        = ((4U & ((~ ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)) 
                                     | ((0xffU == (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs))) 
                                    << 1U)) | ((0xffU 
                                                != 
                                                (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)))) 
                                               & ((IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4) 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__335__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__335__input_2 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__335__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__335__sel)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__335__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__335__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__335__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__335__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__335__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__361__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__361__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__361__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                   >> 0x0000002fU)) 
                          | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__361__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__361__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__361__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__361__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__361__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__383__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__383__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__383__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_5.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__383__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__383__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__383__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__383__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__383__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__382__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__382__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__382__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_5.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__382__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__382__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__382__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__382__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__382__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_5.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_5.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__356__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)));
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__356__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__356__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__356__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__356__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__356__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55 
        = (IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                   | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl 
        = (0x000003ffU & ((IData)(0x0181U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__328__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__328__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__328__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__328__Vfuncout)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__325__vector 
        = (0x0000ffffffffffffULL & ((QData)((IData)(
                                                    (0x00800000U 
                                                     | (0x007fffffU 
                                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1)))) 
                                    * (QData)((IData)(
                                                      (0x00800000U 
                                                       | (0x007fffffU 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__325__Vfuncout 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__325__vector;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__325__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl 
        = (0x000003ffU & (VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__359__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__359__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__359__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__359__Vfuncout))) 
                          + VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__360__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__360__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__360__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__360__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__358__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__358__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__358__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__358__input_1)
            : 0U);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__358__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__358__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__357__sel 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__357__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__357__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__357__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__357__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__357__Vfuncout)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__376__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__376__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__376__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__376__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__376__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__376__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__376__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__376__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__323__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__323__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__323__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__323__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__323__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__323__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__323__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__323__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl 
        = (0x000007ffU & (VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__329__vector 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__329__Vfuncout 
                            = ((0x00000200U & ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__329__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__329__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__329__Vfuncout))) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__330__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__330__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__330__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__330__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__377__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__377__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__377__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__377__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__377__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__377__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__377__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__377__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__331__vector 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp 
        = (0x000003ffU & VL_SHIFTR_III(10,10,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__331__vector), 9U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__331__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__331__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1) 
           | ((0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
              | (0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__324__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__324__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__324__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__324__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__324__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__324__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__324__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__324__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__373__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__373__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__373__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__373__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__373__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__373__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__373__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__373__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__375__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__375__input_1 
        = (1U & (~ ((~ (IData)(((0x7f800000U == (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse)))) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__375__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__375__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__375__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__375__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__375__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__375__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__379__sel 
        = (0xffU == (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                    >> 0x00000017U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__379__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__379__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__379__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__379__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__379__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__379__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__379__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__380__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__380__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__380__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__380__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__380__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__380__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__380__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__380__Vfuncout;
}

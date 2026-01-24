// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__u_fp_mul__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__u_fp_mul__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__328__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__328__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__328__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__328__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__328__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__328__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__328__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__328__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__329__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__329__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__329__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__329__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__329__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__329__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__329__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__329__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__330__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__330__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__330__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__330__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__330__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__330__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__330__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__330__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__331__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__331__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__331__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__331__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__331__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__331__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__331__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__331__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__338__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__338__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__338__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__338__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__343__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__343__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__343__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__343__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__344__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__344__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__344__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__344__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__344__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__344__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__344__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__344__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__345__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__345__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__345__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__345__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__345__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__345__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__345__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__345__sel = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__346__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__346__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__346__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__346__input_0 = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__346__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__346__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__346__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__346__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__347__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__347__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__347__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__347__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__347__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__347__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__347__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__347__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__349__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__349__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__349__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__349__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__349__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__349__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__349__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__349__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__350__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__350__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__350__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__350__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__350__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__350__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__350__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__350__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__354__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__354__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__354__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__354__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__354__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__354__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__354__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__354__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__355__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__355__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__355__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__355__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__355__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__355__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__355__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__355__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__356__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__356__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__356__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__356__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__356__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__356__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__356__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__356__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__357__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__357__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__357__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__357__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__357__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__357__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__357__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__357__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__358__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__358__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__358__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__358__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__358__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__358__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__358__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__358__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__359__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__359__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__359__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__359__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__359__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__359__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__359__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__359__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__360__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__360__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__360__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__360__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__360__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__360__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__360__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__360__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__360__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__360__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__362__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__362__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__362__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__362__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__362__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__362__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__362__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__362__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__363__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__363__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__363__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__363__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__366__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__366__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__366__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__366__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__366__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__366__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__370__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__370__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__370__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__370__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__370__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__370__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__370__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__370__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__371__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__371__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__371__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__371__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__371__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__371__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__371__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__371__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__372__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__372__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__372__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__372__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__372__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__372__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__372__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__372__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__373__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__373__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__373__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__373__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__373__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__373__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__373__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__373__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__374__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__374__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__374__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__374__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__374__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__374__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__374__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__374__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__375__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__375__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__375__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__375__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__375__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__375__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__375__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__375__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__381__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__381__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__381__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__381__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__381__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__381__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__381__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__381__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__382__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__382__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__382__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__382__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__382__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__382__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__382__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__382__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__386__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__386__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__386__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__386__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__386__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__386__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__386__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__386__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__388__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__388__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__388__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__388__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__388__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__388__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__388__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__388__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_9_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
                         >> 0x15U));
        }
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_11_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_5_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5 
                = (0x0000003fU & ((IData)(0x21U) + 
                                  (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1) 
                                    >> 0x0000000aU) 
                                   + ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1) 
                                      >> 0x0000000aU))));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5 = 0U;
    }
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__343__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__343__vector), 5U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__343__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__343__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__354__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__354__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__354__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__354__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__354__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__354__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__354__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__354__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__356__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__356__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__356__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__356__sel)
                    ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__356__input_1
                    : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__356__input_0);
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__356__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__356__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 = 0U;
    }
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__346__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x15U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__346__input_1 
        = (0x000fffffU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                          >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__346__input_0 
        = (0x000fffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__346__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__346__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__346__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__346__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__346__Vfuncout;
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6 
        = ((((~ (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x00000015U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__344__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__344__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__344__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1)))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__355__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__355__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__355__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__355__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__355__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__355__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__355__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__355__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_and_1_cse) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__358__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__358__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__358__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__358__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__358__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__358__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__358__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__358__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__359__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__359__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__359__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__359__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__359__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__359__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__359__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__359__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__344__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__344__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__344__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__344__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__344__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva 
        = (1U & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
                  >> 9U) & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                             & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                                >> 0x00000015U)) | (IData)(
                                                           (0U 
                                                            != 
                                                            (0x000005ffU 
                                                             & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5.__PVT__fp_interp_rdy_d1) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5.__PVT__pipe_p10__DOT__p10_pipe_valid)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__345__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl) 
           & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
              >> 0x00000015U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__345__input_1 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__345__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
               & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U))) & (~ (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                                          | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)) 
                                         | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3))))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_20_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_and_1_cse) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__357__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__357__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__357__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__357__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__357__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__357__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__357__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__357__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__345__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__345__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__345__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__345__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__345__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__360__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__360__input_0 
                = (1U & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                          ^ vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                         >> 0x00000010U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__360__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__360__input_2 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__360__input_0) 
                   & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__360__sel));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__360__input_1) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__360__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__360__input_2) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__360__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__360__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__360__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1)) 
                   | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U))))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMantRNE_22U_11U_else_acc_nl 
        = (0x000007ffU & ((0x000003ffU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
                                          >> 0x0aU)) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__361__vector 
                            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__361__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__361__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__361__Vfuncout)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3 
                = (1U & (~ (IData)(((0x0000fc00U != 
                                     (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                    | (0U == (0x000003ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))))));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3 
                = (1U & (~ (IData)(((0x0000fc00U != 
                                     (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                    | (0U == (0x000003ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt))))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_2_nl)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_29_nl)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt);
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_33_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt);
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var = 1U;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva) 
           & (0x000ffc00U == (0x000ffc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4));
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__362__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs)) 
                 | (0x3fU != (0x0000003fU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__362__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMantRNE_22U_11U_else_acc_nl));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__363__vector 
        = (0x3fU == (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__363__Vfuncout 
        = (0x000003ffU & (- (IData)((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__363__vector))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__362__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__363__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__362__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__362__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__362__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__362__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__362__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__347__sel 
        = ((4U & ((~ ((~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)) 
                                     | ((0x3fU == (0x0000003fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs))) 
                                    << 1U)) | ((0x3fU 
                                                != 
                                                (0x0000003fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)))) 
                                               & ((IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6) 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__347__input_0 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__347__input_2 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__347__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__347__sel)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__347__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__347__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__347__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__347__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__347__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__388__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__388__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__388__input_0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_15) 
                                << 0x0000000fU) | (
                                                   ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_14_10) 
                                                    << 0x0000000aU) 
                                                   | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__388__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__388__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__388__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__388__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__388__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__364__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__364__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__364__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__364__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__364__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__364__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__370__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__370__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__370__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                           >> 0x00000015U) | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                                              | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4)))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__370__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__370__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__370__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__370__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__370__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__349__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__349__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__349__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__349__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__349__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__349__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__349__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__349__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__338__vector 
        = (0x003fffffU & ((0x00000400U | (0x000003ffU 
                                          & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1))) 
                          * (0x00000400U | (0x000003ffU 
                                            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__338__Vfuncout 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__338__vector;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__338__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(((0x0000fc00U == (0x0000fc00U 
                                       & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                      & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3));
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8 
        = ((IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__366__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__366__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__366__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__366__input_1)
            : 0U);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__366__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__366__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__365__sel 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__365__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__365__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__365__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__365__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__365__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__386__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__386__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__386__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__386__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__386__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__386__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__386__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__386__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__381__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__381__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__381__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__381__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__381__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__381__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__381__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__381__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__371__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__371__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)) 
                              | (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
                                 >> 0x00000015U)))) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__371__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__371__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__371__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__371__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__371__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__371__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__350__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__350__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__350__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__350__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__350__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__350__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__350__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__350__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__374__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__374__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__374__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__374__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__374__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__374__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__374__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__374__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__372__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__372__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__372__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__372__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__372__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__372__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__372__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__372__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__330__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__330__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__330__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__330__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__330__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__330__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__330__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__330__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__328__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__328__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__328__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__328__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__328__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__328__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__328__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__328__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__382__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__382__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__382__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__382__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__382__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__382__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__382__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__382__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__375__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__375__input_1 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__375__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__375__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__375__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__375__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__375__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__375__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__373__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__373__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__373__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__373__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__373__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__373__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__373__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__373__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__331__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__331__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__331__input_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__331__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__331__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__331__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__331__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__331__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__329__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__329__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__329__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__329__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__329__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__329__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__329__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__329__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__u_fp_mul__1(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__u_fp_mul__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9;
    HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__325__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__325__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__325__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__325__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__325__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__325__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__325__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__325__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__326__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__326__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__326__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__326__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__327__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__327__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__327__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__327__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__348__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__348__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__348__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__348__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__348__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__348__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__348__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__348__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__351__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__351__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__351__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__351__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__351__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__351__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__351__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__351__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5.__VdfgRegularize_h098ddedf_0_4) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5.__PVT__fp_mul_sync_in_rdy)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5.__PVT__fp_interp_vld_d0) 
              & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                 & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5.__PVT__fp_mul_sync_in_rdy))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__348__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__348__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__348__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__348__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__348__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__348__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__348__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__348__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__351__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__351__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__351__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__351__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__351__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__351__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__351__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__351__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__325__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__326__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__326__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__326__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__325__input_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__326__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__327__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__327__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__327__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__325__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__327__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__325__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__325__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__325__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__325__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__325__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_and_1_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
           & ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3)) 
                & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_13_nl)));
    HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_and_1_cse 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_17_nl)) 
           & (IData)(HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9));
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__u_fp_mul__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__u_fp_mul__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__332__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__332__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__332__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__332__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__332__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__332__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__332__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__332__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__337__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__337__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__337__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__337__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__342__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__342__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__342__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__342__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__352__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__352__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__352__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__352__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__352__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__352__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__352__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__352__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__353__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__353__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__353__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__353__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__353__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__353__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__353__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__353__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__367__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__367__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__367__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__367__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__367__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__367__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__367__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__367__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__368__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__368__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__368__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__368__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__368__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__368__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__368__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__368__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__369__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__369__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__369__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__369__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__369__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__369__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__369__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__369__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__376__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__376__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__376__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__376__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__376__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__376__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__376__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__376__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__377__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__377__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__377__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__377__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__377__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__377__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__377__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__377__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__378__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__378__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__378__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__378__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__378__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__378__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__378__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__378__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__379__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__379__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__379__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__379__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__379__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__379__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__379__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__379__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__380__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__380__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__380__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__380__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__380__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__380__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__380__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__380__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__383__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__383__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__383__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__383__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__383__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__383__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__383__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__383__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__384__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__384__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__384__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__384__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__384__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__384__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__384__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__384__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__385__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__385__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__385__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__385__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__385__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__385__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__385__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__385__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__387__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__387__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__387__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__387__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__387__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__387__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__387__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__387__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__389__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__389__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__389__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__389__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__389__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__389__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__389__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__389__sel = 0;
    // Body
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__389__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__389__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__389__input_0 
        = (0x0001ffffU & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5.__PVT__pipe_p7__DOT__p7_pipe_data));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__389__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__389__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__389__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__389__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__389__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl 
        = (0x000000ffU & (VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__333__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__333__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__333__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__333__Vfuncout))) 
                          + VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__334__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__334__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__334__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__334__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp 
        = ((0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
           | (0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl 
        = (0x000000ffU & ((IData)(0x61U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__339__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__339__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__339__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__339__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt 
        = ((IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                    | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
           & (IData)((((0x0000fc00U == (0x0000fc00U 
                                        & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                      & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__352__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__352__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__352__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__352__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__352__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__352__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__352__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__352__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__332__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__332__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__332__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__332__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__332__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__332__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__332__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__332__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl 
        = (0x000000ffU & ((IData)(0x51U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__336__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl));
                        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
                            = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__336__vector), 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__336__Vfuncout 
                            = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__335__vector 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__336__Vfuncout;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__335__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__335__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__335__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl 
        = (0x000001ffU & (VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__340__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__340__Vfuncout 
                            = ((0x00000080U & ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__340__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__340__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__340__Vfuncout))) 
                          + VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__341__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__341__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__341__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__341__Vfuncout)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__353__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__353__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__353__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__353__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__353__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__353__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__353__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__353__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__337__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__337__vector), 6U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__337__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__337__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__342__vector 
        = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__342__vector), 7U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__342__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__342__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__384__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__384__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__384__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__384__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__384__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__384__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__384__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__384__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__379__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__379__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__379__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__379__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__379__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__379__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__379__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__379__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1) 
                 | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__385__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__385__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__385__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__385__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__385__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__385__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__385__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__385__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__380__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__380__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__380__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__380__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__380__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__380__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__380__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__380__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__367__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__367__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__367__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__367__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__367__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__367__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__367__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__367__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__387__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__387__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__387__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__387__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__387__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__387__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__387__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__387__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__383__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__383__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__383__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__383__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__383__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__383__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__383__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__383__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__368__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__368__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__368__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__368__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__368__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__368__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__368__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__368__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__376__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__376__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__376__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__376__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__376__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__376__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__376__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__376__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__369__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__369__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__369__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__369__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__369__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__369__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__369__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__369__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__377__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__377__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__377__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__377__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__377__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__377__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__377__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__377__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__378__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__378__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__378__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__378__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__378__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__378__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__378__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_20_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__378__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__u_fp_mul__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__u_fp_mul__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__393__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__393__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__393__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__393__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__393__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__393__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__393__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__393__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__394__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__394__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__394__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__394__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__394__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__394__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__394__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__394__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__395__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__395__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__395__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__395__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__395__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__395__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__395__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__395__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__396__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__396__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__396__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__396__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__396__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__396__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__396__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__396__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__403__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__403__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__403__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__403__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__408__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__408__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__408__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__408__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__409__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__409__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__409__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__409__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__409__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__409__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__409__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__409__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__410__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__410__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__410__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__410__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__410__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__410__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__410__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__410__sel = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__411__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__411__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__411__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__411__input_0 = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__411__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__411__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__411__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__411__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__412__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__412__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__412__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__412__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__412__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__412__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__412__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__412__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__414__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__414__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__414__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__414__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__414__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__414__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__414__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__414__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__415__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__415__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__415__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__415__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__415__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__415__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__415__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__415__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__419__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__419__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__419__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__419__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__419__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__419__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__419__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__419__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__420__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__420__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__420__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__420__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__420__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__420__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__420__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__420__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__421__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__421__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__421__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__421__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__421__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__421__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__421__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__421__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__422__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__422__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__422__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__422__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__422__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__422__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__422__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__422__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__423__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__423__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__423__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__423__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__423__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__423__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__423__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__423__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__424__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__424__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__424__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__424__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__424__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__424__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__424__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__424__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__425__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__425__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__425__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__425__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__425__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__425__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__425__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__425__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__425__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__425__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__427__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__427__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__427__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__427__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__427__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__427__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__427__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__427__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__428__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__428__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__428__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__428__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__431__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__431__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__431__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__431__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__431__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__431__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__435__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__435__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__435__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__435__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__435__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__435__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__435__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__435__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__436__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__436__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__436__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__436__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__436__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__436__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__436__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__436__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__437__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__437__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__437__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__437__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__437__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__437__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__437__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__437__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__438__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__438__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__438__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__438__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__438__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__438__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__438__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__438__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__439__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__439__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__439__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__439__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__439__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__439__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__439__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__439__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__440__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__440__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__440__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__440__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__440__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__440__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__440__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__440__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__446__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__446__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__446__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__446__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__446__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__446__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__446__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__446__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__447__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__447__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__447__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__447__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__447__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__447__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__447__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__447__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__451__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__451__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__451__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__451__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__451__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__451__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__451__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__451__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__453__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__453__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__453__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__453__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__453__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__453__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__453__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__453__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_9_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
                         >> 0x15U));
        }
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_11_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_5_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5 
                = (0x0000003fU & ((IData)(0x21U) + 
                                  (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1) 
                                    >> 0x0000000aU) 
                                   + ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1) 
                                      >> 0x0000000aU))));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5 = 0U;
    }
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__408__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__408__vector), 5U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__408__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__408__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__419__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__419__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__419__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__419__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__419__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__419__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__419__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__419__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__421__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__421__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__421__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__421__sel)
                    ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__421__input_1
                    : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__421__input_0);
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__421__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__421__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 = 0U;
    }
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__411__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x15U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__411__input_1 
        = (0x000fffffU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                          >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__411__input_0 
        = (0x000fffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__411__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__411__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__411__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__411__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__411__Vfuncout;
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6 
        = ((((~ (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x00000015U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__409__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__409__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__409__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1)))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__420__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__420__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__420__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__420__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__420__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__420__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__420__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__420__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_and_1_cse) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__423__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__423__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__423__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__423__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__423__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__423__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__423__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__423__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__424__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__424__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__424__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__424__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__424__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__424__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__424__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__424__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__409__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__409__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__409__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__409__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__409__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva 
        = (1U & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
                  >> 9U) & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                             & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                                >> 0x00000015U)) | (IData)(
                                                           (0U 
                                                            != 
                                                            (0x000005ffU 
                                                             & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6.__PVT__fp_interp_rdy_d1) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6.__PVT__pipe_p10__DOT__p10_pipe_valid)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__410__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl) 
           & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
              >> 0x00000015U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__410__input_1 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__410__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
               & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U))) & (~ (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                                          | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)) 
                                         | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3))))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_20_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_and_1_cse) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__422__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__422__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__422__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__422__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__422__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__422__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__422__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__422__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__410__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__410__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__410__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__410__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__410__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__425__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__425__input_0 
                = (1U & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                          ^ vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                         >> 0x00000010U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__425__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__425__input_2 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__425__input_0) 
                   & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__425__sel));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__425__input_1) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__425__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__425__input_2) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__425__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__425__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__425__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1)) 
                   | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U))))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMantRNE_22U_11U_else_acc_nl 
        = (0x000007ffU & ((0x000003ffU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
                                          >> 0x0aU)) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__426__vector 
                            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__426__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__426__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__426__Vfuncout)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3 
                = (1U & (~ (IData)(((0x0000fc00U != 
                                     (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                    | (0U == (0x000003ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))))));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3 
                = (1U & (~ (IData)(((0x0000fc00U != 
                                     (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                    | (0U == (0x000003ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt))))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_2_nl)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_29_nl)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt);
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_33_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt);
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var = 1U;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva) 
           & (0x000ffc00U == (0x000ffc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4));
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__427__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs)) 
                 | (0x3fU != (0x0000003fU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__427__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMantRNE_22U_11U_else_acc_nl));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__428__vector 
        = (0x3fU == (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__428__Vfuncout 
        = (0x000003ffU & (- (IData)((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__428__vector))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__427__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__428__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__427__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__427__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__427__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__427__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__427__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__412__sel 
        = ((4U & ((~ ((~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)) 
                                     | ((0x3fU == (0x0000003fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs))) 
                                    << 1U)) | ((0x3fU 
                                                != 
                                                (0x0000003fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)))) 
                                               & ((IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6) 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__412__input_0 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__412__input_2 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__412__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__412__sel)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__412__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__412__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__412__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__412__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__412__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__453__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__453__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__453__input_0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_15) 
                                << 0x0000000fU) | (
                                                   ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_14_10) 
                                                    << 0x0000000aU) 
                                                   | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__453__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__453__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__453__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__453__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__453__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__429__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__429__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__429__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__429__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__429__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__429__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__435__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__435__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__435__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                           >> 0x00000015U) | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                                              | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4)))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__435__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__435__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__435__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__435__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__435__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__414__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__414__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__414__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__414__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__414__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__414__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__414__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__414__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__403__vector 
        = (0x003fffffU & ((0x00000400U | (0x000003ffU 
                                          & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1))) 
                          * (0x00000400U | (0x000003ffU 
                                            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__403__Vfuncout 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__403__vector;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__403__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(((0x0000fc00U == (0x0000fc00U 
                                       & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                      & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3));
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8 
        = ((IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__431__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__431__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__431__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__431__input_1)
            : 0U);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__431__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__431__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__430__sel 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__430__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__430__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__430__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__430__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__430__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__451__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__451__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__451__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__451__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__451__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__451__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__451__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__451__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__446__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__446__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__446__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__446__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__446__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__446__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__446__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__446__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__436__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__436__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)) 
                              | (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
                                 >> 0x00000015U)))) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__436__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__436__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__436__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__436__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__436__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__436__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__415__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__415__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__415__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__415__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__415__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__415__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__415__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__415__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__439__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__439__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__439__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__439__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__439__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__439__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__439__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__439__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__437__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__437__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__437__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__437__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__437__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__437__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__437__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__437__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__395__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__395__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__395__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__395__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__395__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__395__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__395__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__395__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__393__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__393__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__393__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__393__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__393__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__393__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__393__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__393__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__447__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__447__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__447__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__447__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__447__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__447__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__447__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__447__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__440__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__440__input_1 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__440__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__440__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__440__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__440__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__440__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__440__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__438__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__438__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__438__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__438__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__438__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__438__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__438__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__438__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__396__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__396__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__396__input_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__396__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__396__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__396__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__396__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__396__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__394__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__394__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__394__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__394__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__394__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__394__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__394__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__394__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__u_fp_mul__1(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__u_fp_mul__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9;
    HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__390__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__390__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__390__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__390__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__390__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__390__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__390__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__390__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__391__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__391__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__391__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__391__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__392__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__392__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__392__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__392__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__413__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__413__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__413__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__413__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__413__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__413__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__413__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__413__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__416__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__416__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__416__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__416__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__416__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__416__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__416__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__416__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6.__VdfgRegularize_h098ddedf_0_4) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6.__PVT__fp_mul_sync_in_rdy)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6.__PVT__fp_interp_vld_d0) 
              & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                 & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6.__PVT__fp_mul_sync_in_rdy))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__413__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__413__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__413__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__413__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__413__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__413__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__413__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__413__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__416__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__416__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__416__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__416__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__416__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__416__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__416__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__416__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__390__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__391__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__391__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__391__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__390__input_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__391__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__392__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__392__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__392__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__390__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__392__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__390__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__390__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__390__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__390__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__390__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_and_1_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
           & ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3)) 
                & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_13_nl)));
    HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_and_1_cse 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_17_nl)) 
           & (IData)(HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9));
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__u_fp_mul__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__u_fp_mul__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__397__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__397__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__397__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__397__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__397__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__397__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__397__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__397__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__402__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__402__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__402__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__402__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__407__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__407__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__407__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__407__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__417__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__417__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__417__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__417__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__417__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__417__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__417__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__417__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__418__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__418__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__418__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__418__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__418__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__418__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__418__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__418__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__432__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__432__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__432__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__432__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__432__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__432__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__432__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__432__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__433__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__433__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__433__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__433__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__433__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__433__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__433__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__433__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__434__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__434__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__434__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__434__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__434__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__434__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__434__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__434__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__441__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__441__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__441__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__441__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__441__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__441__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__441__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__441__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__442__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__442__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__442__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__442__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__442__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__442__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__442__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__442__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__443__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__443__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__443__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__443__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__443__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__443__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__443__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__443__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__444__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__444__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__444__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__444__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__444__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__444__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__444__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__444__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__445__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__445__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__445__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__445__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__445__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__445__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__445__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__445__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__448__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__448__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__448__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__448__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__448__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__448__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__448__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__448__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__449__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__449__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__449__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__449__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__449__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__449__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__449__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__449__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__450__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__450__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__450__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__450__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__450__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__450__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__450__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__450__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__452__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__452__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__452__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__452__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__452__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__452__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__452__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__452__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__454__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__454__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__454__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__454__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__454__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__454__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__454__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__454__sel = 0;
    // Body
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__454__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__454__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__454__input_0 
        = (0x0001ffffU & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6.__PVT__pipe_p7__DOT__p7_pipe_data));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__454__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__454__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__454__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__454__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__454__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl 
        = (0x000000ffU & (VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__398__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__398__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__398__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__398__Vfuncout))) 
                          + VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__399__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__399__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__399__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__399__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp 
        = ((0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
           | (0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl 
        = (0x000000ffU & ((IData)(0x61U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__404__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__404__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__404__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__404__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt 
        = ((IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                    | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
           & (IData)((((0x0000fc00U == (0x0000fc00U 
                                        & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                      & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__417__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__417__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__417__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__417__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__417__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__417__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__417__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__417__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__397__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__397__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__397__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__397__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__397__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__397__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__397__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__397__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl 
        = (0x000000ffU & ((IData)(0x51U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__401__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl));
                        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
                            = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__401__vector), 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__401__Vfuncout 
                            = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__400__vector 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__401__Vfuncout;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__400__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__400__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__400__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl 
        = (0x000001ffU & (VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__405__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__405__Vfuncout 
                            = ((0x00000080U & ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__405__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__405__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__405__Vfuncout))) 
                          + VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__406__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__406__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__406__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__406__Vfuncout)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__418__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__418__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__418__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__418__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__418__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__418__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__418__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__418__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__402__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__402__vector), 6U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__402__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__402__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__407__vector 
        = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__407__vector), 7U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__407__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__407__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__449__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__449__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__449__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__449__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__449__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__449__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__449__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__449__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__444__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__444__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__444__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__444__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__444__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__444__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__444__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__444__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1) 
                 | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__450__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__450__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__450__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__450__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__450__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__450__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__450__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__450__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__445__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__445__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__445__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__445__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__445__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__445__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__445__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__445__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__432__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__432__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__432__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__432__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__432__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__432__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__432__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__432__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__452__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__452__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__452__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__452__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__452__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__452__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__452__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__452__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__448__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__448__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__448__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__448__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__448__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__448__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__448__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__448__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__433__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__433__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__433__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__433__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__433__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__433__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__433__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__433__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__441__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__441__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__441__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__441__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__441__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__441__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__441__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__441__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__434__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__434__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__434__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__434__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__434__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__434__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__434__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__434__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__442__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__442__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__442__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__442__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__442__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__442__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__442__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__442__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__443__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__443__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__443__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__443__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__443__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__443__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__443__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_20_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__443__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__u_fp_mul__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__u_fp_mul__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__458__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__458__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__458__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__458__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__458__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__458__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__458__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__458__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__459__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__459__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__459__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__459__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__459__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__459__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__459__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__459__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__460__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__460__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__460__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__460__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__460__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__460__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__460__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__460__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__461__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__461__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__461__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__461__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__461__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__461__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__461__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__461__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__468__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__468__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__468__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__468__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__473__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__473__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__473__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__473__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__474__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__474__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__474__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__474__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__474__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__474__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__474__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__474__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__475__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__475__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__475__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__475__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__475__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__475__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__475__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__475__sel = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__476__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__476__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__476__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__476__input_0 = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__476__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__476__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__476__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__476__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__477__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__477__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__477__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__477__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__477__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__477__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__477__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__477__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__479__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__479__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__479__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__479__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__479__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__479__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__479__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__479__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__480__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__480__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__480__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__480__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__480__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__480__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__480__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__480__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__484__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__484__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__484__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__484__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__484__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__484__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__484__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__484__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__485__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__485__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__485__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__485__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__485__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__485__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__485__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__485__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__486__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__486__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__486__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__486__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__486__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__486__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__486__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__486__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__487__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__487__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__487__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__487__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__487__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__487__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__487__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__487__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__488__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__488__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__488__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__488__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__488__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__488__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__488__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__488__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__489__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__489__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__489__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__489__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__489__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__489__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__489__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__489__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__490__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__490__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__490__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__490__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__490__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__490__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__490__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__490__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__490__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__490__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__492__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__492__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__492__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__492__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__492__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__492__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__492__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__492__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__493__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__493__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__493__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__493__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__496__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__496__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__496__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__496__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__496__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__496__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__500__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__500__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__500__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__500__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__500__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__500__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__500__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__500__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__501__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__501__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__501__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__501__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__501__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__501__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__501__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__501__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__502__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__502__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__502__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__502__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__502__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__502__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__502__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__502__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__503__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__503__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__503__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__503__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__503__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__503__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__503__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__503__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__504__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__504__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__504__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__504__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__504__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__504__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__504__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__504__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__505__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__505__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__505__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__505__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__505__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__505__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__505__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__505__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__511__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__511__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__511__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__511__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__511__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__511__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__511__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__511__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__512__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__512__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__512__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__512__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__512__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__512__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__512__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__512__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__516__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__516__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__516__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__516__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__516__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__516__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__516__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__516__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__518__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__518__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__518__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__518__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__518__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__518__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__518__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__518__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_9_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
                         >> 0x15U));
        }
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_11_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_5_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5 
                = (0x0000003fU & ((IData)(0x21U) + 
                                  (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1) 
                                    >> 0x0000000aU) 
                                   + ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1) 
                                      >> 0x0000000aU))));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5 = 0U;
    }
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__473__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__473__vector), 5U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__473__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__473__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__484__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__484__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__484__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__484__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__484__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__484__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__484__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__484__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__486__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__486__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__486__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__486__sel)
                    ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__486__input_1
                    : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__486__input_0);
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__486__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__486__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 = 0U;
    }
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__476__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x15U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__476__input_1 
        = (0x000fffffU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                          >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__476__input_0 
        = (0x000fffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__476__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__476__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__476__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__476__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__476__Vfuncout;
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6 
        = ((((~ (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x00000015U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__474__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__474__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__474__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1)))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__485__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__485__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__485__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__485__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__485__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__485__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__485__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__485__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_and_1_cse) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__488__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__488__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__488__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__488__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__488__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__488__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__488__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__488__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__489__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__489__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__489__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__489__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__489__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__489__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__489__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__489__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__474__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__474__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__474__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__474__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__474__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva 
        = (1U & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
                  >> 9U) & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                             & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                                >> 0x00000015U)) | (IData)(
                                                           (0U 
                                                            != 
                                                            (0x000005ffU 
                                                             & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7.__PVT__fp_interp_rdy_d1) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7.__PVT__pipe_p10__DOT__p10_pipe_valid)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__475__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl) 
           & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
              >> 0x00000015U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__475__input_1 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__475__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
               & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U))) & (~ (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                                          | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)) 
                                         | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3))))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_20_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_and_1_cse) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__487__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__487__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__487__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__487__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__487__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__487__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__487__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__487__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__475__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__475__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__475__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__475__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__475__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__490__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__490__input_0 
                = (1U & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                          ^ vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                         >> 0x00000010U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__490__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__490__input_2 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__490__input_0) 
                   & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__490__sel));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__490__input_1) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__490__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__490__input_2) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__490__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__490__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__490__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1)) 
                   | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U))))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMantRNE_22U_11U_else_acc_nl 
        = (0x000007ffU & ((0x000003ffU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
                                          >> 0x0aU)) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__491__vector 
                            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__491__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__491__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__491__Vfuncout)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3 
                = (1U & (~ (IData)(((0x0000fc00U != 
                                     (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                    | (0U == (0x000003ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))))));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3 
                = (1U & (~ (IData)(((0x0000fc00U != 
                                     (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                    | (0U == (0x000003ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt))))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_2_nl)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_29_nl)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt);
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_33_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt);
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var = 1U;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva) 
           & (0x000ffc00U == (0x000ffc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4));
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__492__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs)) 
                 | (0x3fU != (0x0000003fU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__492__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMantRNE_22U_11U_else_acc_nl));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__493__vector 
        = (0x3fU == (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__493__Vfuncout 
        = (0x000003ffU & (- (IData)((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__493__vector))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__492__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__493__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__492__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__492__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__492__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__492__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__492__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__477__sel 
        = ((4U & ((~ ((~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)) 
                                     | ((0x3fU == (0x0000003fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs))) 
                                    << 1U)) | ((0x3fU 
                                                != 
                                                (0x0000003fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)))) 
                                               & ((IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6) 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__477__input_0 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__477__input_2 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__477__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__477__sel)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__477__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__477__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__477__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__477__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__477__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__518__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__518__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__518__input_0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_15) 
                                << 0x0000000fU) | (
                                                   ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_14_10) 
                                                    << 0x0000000aU) 
                                                   | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__518__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__518__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__518__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__518__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__518__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__494__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__494__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__494__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__494__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__494__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__494__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__500__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__500__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__500__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                           >> 0x00000015U) | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                                              | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4)))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__500__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__500__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__500__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__500__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__500__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__479__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__479__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__479__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__479__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__479__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__479__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__479__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__479__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__468__vector 
        = (0x003fffffU & ((0x00000400U | (0x000003ffU 
                                          & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1))) 
                          * (0x00000400U | (0x000003ffU 
                                            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__468__Vfuncout 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__468__vector;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__468__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(((0x0000fc00U == (0x0000fc00U 
                                       & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                      & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3));
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8 
        = ((IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__496__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__496__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__496__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__496__input_1)
            : 0U);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__496__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__496__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__495__sel 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__495__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__495__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__495__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__495__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__495__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__516__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__516__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__516__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__516__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__516__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__516__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__516__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__516__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__511__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__511__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__511__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__511__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__511__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__511__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__511__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__511__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__501__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__501__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)) 
                              | (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
                                 >> 0x00000015U)))) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__501__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__501__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__501__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__501__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__501__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__501__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__480__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__480__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__480__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__480__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__480__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__480__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__480__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__480__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__504__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__504__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__504__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__504__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__504__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__504__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__504__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__504__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__502__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__502__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__502__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__502__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__502__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__502__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__502__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__502__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__460__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__460__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__460__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__460__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__460__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__460__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__460__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__460__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__458__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__458__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__458__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__458__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__458__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__458__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__458__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__458__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__512__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__512__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__512__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__512__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__512__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__512__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__512__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__512__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__505__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__505__input_1 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__505__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__505__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__505__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__505__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__505__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__505__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__503__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__503__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__503__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__503__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__503__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__503__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__503__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__503__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__461__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__461__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__461__input_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__461__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__461__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__461__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__461__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__461__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__459__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__459__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__459__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__459__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__459__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__459__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__459__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__459__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__u_fp_mul__1(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__u_fp_mul__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9;
    HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__455__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__455__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__455__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__455__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__455__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__455__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__455__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__455__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__456__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__456__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__456__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__456__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__457__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__457__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__457__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__457__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__478__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__478__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__478__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__478__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__478__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__478__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__478__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__478__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__481__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__481__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__481__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__481__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__481__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__481__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__481__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__481__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7.__VdfgRegularize_h098ddedf_0_4) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7.__PVT__fp_mul_sync_in_rdy)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7.__PVT__fp_interp_vld_d0) 
              & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                 & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7.__PVT__fp_mul_sync_in_rdy))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__478__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__478__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__478__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__478__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__478__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__478__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__478__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__478__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__481__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__481__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__481__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__481__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__481__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__481__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__481__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__481__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__455__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__456__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__456__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__456__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__455__input_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__456__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__457__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__457__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__457__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__455__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__457__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__455__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__455__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__455__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__455__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__455__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_and_1_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
           & ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3)) 
                & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_13_nl)));
    HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_and_1_cse 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_17_nl)) 
           & (IData)(HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9));
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__u_fp_mul__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__u_fp_mul__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__462__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__462__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__462__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__462__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__462__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__462__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__462__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__462__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__467__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__467__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__467__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__467__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__472__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__472__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__472__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__472__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__482__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__482__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__482__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__482__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__482__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__482__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__482__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__482__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__483__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__483__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__483__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__483__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__483__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__483__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__483__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__483__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__497__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__497__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__497__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__497__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__497__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__497__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__497__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__497__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__498__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__498__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__498__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__498__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__498__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__498__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__498__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__498__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__499__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__499__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__499__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__499__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__499__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__499__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__499__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__499__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__506__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__506__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__506__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__506__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__506__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__506__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__506__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__506__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__507__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__507__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__507__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__507__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__507__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__507__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__507__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__507__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__508__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__508__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__508__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__508__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__508__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__508__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__508__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__508__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__509__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__509__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__509__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__509__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__509__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__509__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__509__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__509__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__510__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__510__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__510__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__510__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__510__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__510__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__510__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__510__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__513__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__513__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__513__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__513__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__513__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__513__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__513__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__513__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__514__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__514__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__514__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__514__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__514__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__514__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__514__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__514__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__515__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__515__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__515__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__515__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__515__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__515__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__515__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__515__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__517__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__517__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__517__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__517__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__517__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__517__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__517__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__517__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__519__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__519__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__519__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__519__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__519__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__519__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__519__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__519__sel = 0;
    // Body
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__519__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__519__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__519__input_0 
        = (0x0001ffffU & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7.__PVT__pipe_p7__DOT__p7_pipe_data));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__519__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__519__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__519__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__519__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__519__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl 
        = (0x000000ffU & (VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__463__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__463__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__463__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__463__Vfuncout))) 
                          + VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__464__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__464__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__464__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__464__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp 
        = ((0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
           | (0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl 
        = (0x000000ffU & ((IData)(0x61U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__469__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__469__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__469__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__469__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt 
        = ((IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                    | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
           & (IData)((((0x0000fc00U == (0x0000fc00U 
                                        & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                      & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__482__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__482__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__482__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__482__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__482__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__482__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__482__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__482__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__462__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__462__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__462__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__462__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__462__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__462__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__462__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__462__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl 
        = (0x000000ffU & ((IData)(0x51U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__466__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl));
                        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
                            = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__466__vector), 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__466__Vfuncout 
                            = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__465__vector 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__466__Vfuncout;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__465__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__465__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__465__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl 
        = (0x000001ffU & (VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__470__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__470__Vfuncout 
                            = ((0x00000080U & ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__470__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__470__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__470__Vfuncout))) 
                          + VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__471__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__471__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__471__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__471__Vfuncout)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__483__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__483__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__483__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__483__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__483__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__483__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__483__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__483__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__467__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__467__vector), 6U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__467__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__467__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__472__vector 
        = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__472__vector), 7U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__472__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__472__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__514__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__514__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__514__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__514__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__514__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__514__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__514__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__514__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__509__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__509__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__509__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__509__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__509__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__509__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__509__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__509__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1) 
                 | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__515__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__515__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__515__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__515__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__515__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__515__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__515__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__515__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__510__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__510__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__510__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__510__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__510__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__510__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__510__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__510__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__497__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__497__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__497__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__497__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__497__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__497__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__497__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__497__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__517__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__517__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__517__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__517__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__517__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__517__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__517__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__517__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__513__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__513__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__513__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__513__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__513__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__513__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__513__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__513__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__498__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__498__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__498__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__498__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__498__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__498__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__498__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__498__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__506__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__506__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__506__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__506__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__506__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__506__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__506__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__506__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__499__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__499__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__499__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__499__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__499__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__499__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__499__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__499__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__507__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__507__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__507__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__507__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__507__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__507__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__507__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__507__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__508__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__508__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__508__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__508__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__508__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__508__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__508__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_20_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__508__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__533__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__533__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__533__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__533__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__538__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__538__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__538__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__538__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__539__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__539__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__539__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__539__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__539__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__539__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__539__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__539__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__540__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__540__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__540__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__540__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__540__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__540__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__540__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__540__sel = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__541__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__541__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__541__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__541__input_0 = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__541__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__541__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__541__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__541__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__542__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__542__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__542__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__542__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__542__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__542__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__542__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__542__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__549__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__549__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__549__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__549__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__549__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__549__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__549__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__549__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__550__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__550__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__550__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__550__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__550__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__550__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__550__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__550__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__551__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__551__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__551__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__551__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__551__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__551__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__551__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__551__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__552__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__552__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__552__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__552__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__552__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__552__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__552__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__552__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__553__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__553__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__553__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__553__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__553__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__553__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__553__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__553__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__554__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__554__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__554__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__554__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__554__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__554__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__554__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__554__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__555__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__555__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__555__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__555__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__555__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__555__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__555__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__555__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__555__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__555__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__557__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__557__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__557__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__557__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__557__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__557__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__557__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__557__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__558__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__558__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__558__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__558__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__561__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__561__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__561__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__561__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__561__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__561__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__565__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__565__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__565__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__565__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__565__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__565__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__565__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__565__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__576__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__576__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__576__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__576__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__576__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__576__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__576__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__576__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__577__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__577__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__577__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__577__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__577__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__577__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__577__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__577__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__581__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__581__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__581__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__581__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__581__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__581__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__581__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__581__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_9_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
                         >> 0x15U));
        }
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_11_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_5_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5 
                = (0x0000003fU & ((IData)(0x21U) + 
                                  (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1) 
                                    >> 0x0000000aU) 
                                   + ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1) 
                                      >> 0x0000000aU))));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5 = 0U;
    }
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__538__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__538__vector), 5U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__538__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__538__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__549__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__549__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__549__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__549__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__549__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__549__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__549__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__549__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__551__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__551__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__551__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__551__sel)
                    ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__551__input_1
                    : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__551__input_0);
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__551__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__551__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 = 0U;
    }
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__541__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x15U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__541__input_1 
        = (0x000fffffU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                          >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__541__input_0 
        = (0x000fffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__541__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__541__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__541__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__541__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__541__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0));
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6 
        = ((((~ (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x00000015U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__539__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__539__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__539__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1)))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__550__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__550__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__550__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__550__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__550__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__550__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__550__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__550__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_and_1_cse) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__553__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__553__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__553__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__553__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__553__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__553__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__553__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__553__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__554__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__554__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__554__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__554__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__554__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__554__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__554__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__554__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__539__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__539__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__539__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__539__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__539__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva 
        = (1U & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
                  >> 9U) & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                             & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                                >> 0x00000015U)) | (IData)(
                                                           (0U 
                                                            != 
                                                            (0x000005ffU 
                                                             & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__540__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl) 
           & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
              >> 0x00000015U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__540__input_1 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__540__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
               & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U))) & (~ (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                                          | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)) 
                                         | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3))))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_20_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_and_1_cse) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__552__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__552__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__552__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__552__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__552__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__552__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__552__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__552__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__540__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__540__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__540__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__540__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__540__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__555__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__555__input_0 
                = (1U & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                          ^ vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                         >> 0x00000010U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__555__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__555__input_2 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__555__input_0) 
                   & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__555__sel));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__555__input_1) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__555__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__555__input_2) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__555__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__555__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__555__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1)) 
                   | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U))))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMantRNE_22U_11U_else_acc_nl 
        = (0x000007ffU & ((0x000003ffU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
                                          >> 0x0aU)) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__556__vector 
                            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__556__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__556__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__556__Vfuncout)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3 
                = (1U & (~ (IData)(((0x0000fc00U != 
                                     (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                    | (0U == (0x000003ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))))));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3 
                = (1U & (~ (IData)(((0x0000fc00U != 
                                     (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                    | (0U == (0x000003ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt))))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_2_nl)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_29_nl)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt);
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_33_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt);
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var = 1U;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva) 
           & (0x000ffc00U == (0x000ffc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4));
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__557__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs)) 
                 | (0x3fU != (0x0000003fU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__557__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMantRNE_22U_11U_else_acc_nl));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__558__vector 
        = (0x3fU == (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__558__Vfuncout 
        = (0x000003ffU & (- (IData)((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__558__vector))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__557__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__558__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__557__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__557__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__557__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__557__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__557__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__542__sel 
        = ((4U & ((~ ((~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)) 
                                     | ((0x3fU == (0x0000003fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs))) 
                                    << 1U)) | ((0x3fU 
                                                != 
                                                (0x0000003fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)))) 
                                               & ((IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6) 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__542__input_0 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__542__input_2 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__542__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__542__sel)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__542__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__542__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__542__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__542__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__542__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__559__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__559__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__559__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__559__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__559__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__559__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__565__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__565__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__565__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                           >> 0x00000015U) | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                                              | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4)))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__565__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__565__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__565__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__565__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__565__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__533__vector 
        = (0x003fffffU & ((0x00000400U | (0x000003ffU 
                                          & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1))) 
                          * (0x00000400U | (0x000003ffU 
                                            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__533__Vfuncout 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__533__vector;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__533__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__561__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__561__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__561__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__561__input_1)
            : 0U);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__561__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__561__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__560__sel 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__560__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__560__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__560__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__560__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__560__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__581__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__581__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__581__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__581__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__581__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__581__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__581__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__581__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__576__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__576__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__576__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__576__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__576__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__576__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__576__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__576__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__577__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__577__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__577__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__577__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__577__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__577__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__577__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__577__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul__1(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__d 
        = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q) 
            << 0x00000010U) | (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_53));
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__523__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__523__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__523__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__523__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__523__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__523__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__523__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__523__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__524__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__524__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__524__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__524__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__524__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__524__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__524__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__524__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__525__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__525__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__525__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__525__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__525__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__525__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__525__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__525__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__526__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__526__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__526__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__526__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__526__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__526__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__526__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__526__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__544__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__544__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__544__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__544__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__544__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__544__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__544__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__544__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__545__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__545__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__545__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__545__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__545__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__545__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__545__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__545__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__566__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__566__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__566__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__566__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__566__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__566__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__566__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__566__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__567__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__567__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__567__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__567__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__567__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__567__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__567__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__567__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__568__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__568__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__568__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__568__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__568__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__568__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__568__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__568__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__569__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__569__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__569__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__569__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__569__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__569__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__569__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__569__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__570__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__570__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__570__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__570__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__570__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__570__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__570__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__570__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__fp16_en_sync)) 
              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__mul_unit_rdy)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__525__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__525__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__525__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__525__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__525__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__525__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__525__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__525__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__523__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__523__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__523__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__523__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__523__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__523__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__523__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__523__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__544__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__544__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__544__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__544__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__544__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__544__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__544__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__544__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__566__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__566__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)) 
                              | (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
                                 >> 0x00000015U)))) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__566__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__566__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__566__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__566__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__566__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__566__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__526__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__526__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__526__input_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__526__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__526__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__526__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__526__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__526__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__524__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__524__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__524__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__524__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__524__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__524__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__524__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__524__Vfuncout;
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8 
        = ((IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__545__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__545__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__545__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__545__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__545__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__545__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__545__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__545__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__569__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__569__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__569__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__569__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__569__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__569__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__569__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__569__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__567__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__567__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__567__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__567__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__567__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__567__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__567__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__567__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__570__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__570__input_1 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__570__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__570__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__570__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__570__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__570__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__570__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__568__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__568__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__568__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__568__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__568__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__568__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__568__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__568__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul__1(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__584__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__584__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__584__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__584__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__584__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__584__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__584__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__584__sel = 0;
    // Body
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__584__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__584__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__584__input_0 
        = (0x0001ffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[0U]);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__584__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__584__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__584__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__584__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__584__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl 
        = (0x000000ffU & ((IData)(0x61U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__534__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__534__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__534__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__534__Vfuncout)))));
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul__2(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__583__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__583__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__583__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__583__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__583__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__583__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__583__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__583__sel = 0;
    // Body
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__583__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__583__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__583__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__583__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__583__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__583__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__583__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__583__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul__3(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9;
    HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__520__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__520__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__520__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__520__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__520__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__520__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__520__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__520__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__521__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__521__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__521__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__521__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__522__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__522__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__522__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__522__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__543__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__543__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__543__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__543__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__543__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__543__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__543__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__543__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__mul_fp_vld) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__mul_fp_vld) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__543__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__543__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__543__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__543__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__543__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__543__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__543__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__543__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__520__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__521__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__521__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__521__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__520__input_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__521__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__522__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__522__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__522__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__520__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__522__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__520__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__520__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__520__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__520__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__520__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_and_1_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
           & ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3)) 
                & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_13_nl)));
    HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_and_1_cse 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_17_nl)) 
           & (IData)(HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9));
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul__4(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(((0x0000fc00U == (0x0000fc00U 
                                       & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                      & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt 
        = ((IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                    | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
           & (IData)((((0x0000fc00U == (0x0000fc00U 
                                        & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                      & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul__5(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__527__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__527__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__527__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__527__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__527__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__527__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__527__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__527__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__532__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__532__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__532__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__532__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__537__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__537__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__537__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__537__vector = 0;
    // Body
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__527__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__527__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__527__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__527__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__527__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__527__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__527__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__527__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl 
        = (0x000000ffU & (VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__528__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__528__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__528__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__528__Vfuncout))) 
                          + VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__529__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__529__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__529__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__529__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp 
        = ((0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
           | (0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl 
        = (0x000001ffU & (VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__535__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__535__Vfuncout 
                            = ((0x00000080U & ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__535__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__535__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__535__Vfuncout))) 
                          + VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__536__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__536__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__536__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__536__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl 
        = (0x000000ffU & ((IData)(0x51U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__531__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl));
                        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
                            = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__531__vector), 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__531__Vfuncout 
                            = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__530__vector 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__531__Vfuncout;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__530__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__530__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__530__Vfuncout)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__537__vector 
        = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__537__vector), 7U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__537__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__537__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__532__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__532__vector), 6U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__532__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__532__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1));
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul__6(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__546__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__546__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__546__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__546__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__546__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__546__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__546__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__546__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__547__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__547__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__547__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__547__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__547__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__547__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__547__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__547__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__548__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__548__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__548__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__548__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__548__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__548__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__548__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__548__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__562__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__562__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__562__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__562__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__562__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__562__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__562__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__562__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__563__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__563__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__563__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__563__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__563__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__563__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__563__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__563__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__564__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__564__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__564__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__564__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__564__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__564__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__564__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__564__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__571__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__571__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__571__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__571__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__571__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__571__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__571__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__571__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__572__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__572__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__572__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__572__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__572__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__572__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__572__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__572__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__573__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__573__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__573__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__573__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__573__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__573__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__573__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__573__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__574__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__574__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__574__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__574__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__574__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__574__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__574__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__574__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__575__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__575__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__575__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__575__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__575__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__575__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__575__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__575__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__578__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__578__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__578__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__578__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__578__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__578__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__578__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__578__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__579__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__579__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__579__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__579__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__579__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__579__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__579__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__579__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__580__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__580__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__580__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__580__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__580__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__580__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__580__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__580__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__582__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__582__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__582__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__582__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__582__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__582__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__582__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__582__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__546__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__546__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__546__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__546__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__546__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__546__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__546__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__546__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1) 
                 | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__579__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__579__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__579__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__579__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__579__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__579__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__579__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__579__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__547__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__547__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__547__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__547__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__547__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__547__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__547__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__547__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__562__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__562__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__562__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__562__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__562__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__562__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__562__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__562__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__580__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__580__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__580__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__580__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__580__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__580__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__580__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__580__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__548__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__548__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__548__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__548__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__548__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__548__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__548__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__548__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__574__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__574__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__574__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__574__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__574__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__574__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__574__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__574__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__563__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__563__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__563__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__563__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__563__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__563__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__563__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__563__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__571__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__571__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__571__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__571__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__571__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__571__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__571__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__571__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__582__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__582__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__582__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__582__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__582__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__582__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__582__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__582__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__575__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__575__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__575__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__575__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__575__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__575__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__575__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__575__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__564__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__564__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__564__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__564__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__564__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__564__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__564__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__564__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__572__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__572__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__572__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__572__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__572__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__572__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__572__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__572__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__578__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__578__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__578__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__578__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__578__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__578__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__578__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__578__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__573__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__573__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__573__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__573__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__573__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__573__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__573__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_20_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__573__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul__7(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
}

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__598__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__598__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__598__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__598__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__603__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__603__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__603__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__603__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__604__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__604__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__604__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__604__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__604__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__604__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__604__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__604__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__605__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__605__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__605__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__605__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__605__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__605__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__605__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__605__sel = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__606__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__606__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__606__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__606__input_0 = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__606__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__606__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__606__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__606__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__607__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__607__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__607__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__607__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__607__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__607__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__607__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__607__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__614__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__614__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__614__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__614__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__614__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__614__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__614__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__614__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__615__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__615__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__615__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__615__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__615__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__615__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__615__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__615__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__616__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__616__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__616__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__616__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__616__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__616__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__616__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__616__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__617__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__617__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__617__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__617__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__617__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__617__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__617__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__617__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__618__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__618__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__618__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__618__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__618__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__618__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__618__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__618__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__619__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__619__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__619__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__619__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__619__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__619__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__619__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__619__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__620__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__620__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__620__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__620__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__620__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__620__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__620__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__620__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__620__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__620__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__622__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__622__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__622__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__622__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__622__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__622__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__622__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__622__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__623__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__623__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__623__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__623__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__626__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__626__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__626__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__626__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__626__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__626__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__630__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__630__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__630__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__630__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__630__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__630__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__630__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__630__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__641__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__641__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__641__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__641__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__641__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__641__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__641__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__641__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__642__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__642__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__642__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__642__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__642__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__642__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__642__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__642__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__646__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__646__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__646__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__646__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__646__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__646__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__646__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__646__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_9_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
                         >> 0x15U));
        }
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_11_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_5_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5 
                = (0x0000003fU & ((IData)(0x21U) + 
                                  (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1) 
                                    >> 0x0000000aU) 
                                   + ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1) 
                                      >> 0x0000000aU))));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5 = 0U;
    }
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__603__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__603__vector), 5U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__603__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__603__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__614__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__614__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__614__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__614__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__614__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__614__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__614__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__614__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__616__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__616__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__616__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__616__sel)
                    ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__616__input_1
                    : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__616__input_0);
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__616__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__616__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 = 0U;
    }
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__606__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x15U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__606__input_1 
        = (0x000fffffU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                          >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__606__input_0 
        = (0x000fffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__606__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__606__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__606__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__606__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__606__Vfuncout;
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6 
        = ((((~ (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x00000015U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__604__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__604__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__604__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1)))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__615__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__615__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__615__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__615__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__615__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__615__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__615__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__615__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_and_1_cse) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__618__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__618__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__618__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__618__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__618__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__618__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__618__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__618__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__619__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__619__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__619__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__619__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__619__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__619__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__619__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__619__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__604__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__604__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__604__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__604__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__604__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva 
        = (1U & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
                  >> 9U) & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                             & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                                >> 0x00000015U)) | (IData)(
                                                           (0U 
                                                            != 
                                                            (0x000005ffU 
                                                             & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__605__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl) 
           & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
              >> 0x00000015U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__605__input_1 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__605__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
               & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U))) & (~ (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                                          | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)) 
                                         | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3))))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_20_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_and_1_cse) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__617__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__617__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__617__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__617__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__617__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__617__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__617__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__617__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__605__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__605__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__605__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__605__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__605__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__620__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__620__input_0 
                = (1U & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                          ^ vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                         >> 0x00000010U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__620__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__620__input_2 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__620__input_0) 
                   & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__620__sel));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__620__input_1) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__620__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__620__input_2) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__620__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__620__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__620__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1)) 
                   | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U))))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMantRNE_22U_11U_else_acc_nl 
        = (0x000007ffU & ((0x000003ffU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
                                          >> 0x0aU)) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__621__vector 
                            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__621__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__621__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__621__Vfuncout)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3 
                = (1U & (~ (IData)(((0x0000fc00U != 
                                     (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                    | (0U == (0x000003ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))))));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3 
                = (1U & (~ (IData)(((0x0000fc00U != 
                                     (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                    | (0U == (0x000003ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt))))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_2_nl)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_29_nl)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt);
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_33_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt);
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var = 1U;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva) 
           & (0x000ffc00U == (0x000ffc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4));
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__622__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs)) 
                 | (0x3fU != (0x0000003fU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__622__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMantRNE_22U_11U_else_acc_nl));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__623__vector 
        = (0x3fU == (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__623__Vfuncout 
        = (0x000003ffU & (- (IData)((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__623__vector))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__622__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__623__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__622__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__622__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__622__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__622__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__622__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__607__sel 
        = ((4U & ((~ ((~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)) 
                                     | ((0x3fU == (0x0000003fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs))) 
                                    << 1U)) | ((0x3fU 
                                                != 
                                                (0x0000003fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)))) 
                                               & ((IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6) 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__607__input_0 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__607__input_2 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__607__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__607__sel)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__607__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__607__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__607__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__607__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__607__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__624__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__624__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__624__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__624__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__624__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__624__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__630__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__630__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__630__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                           >> 0x00000015U) | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                                              | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4)))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__630__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__630__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__630__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__630__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__630__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__598__vector 
        = (0x003fffffU & ((0x00000400U | (0x000003ffU 
                                          & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1))) 
                          * (0x00000400U | (0x000003ffU 
                                            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__598__Vfuncout 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__598__vector;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__598__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__626__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__626__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__626__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__626__input_1)
            : 0U);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__626__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__626__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__625__sel 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__625__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__625__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__625__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__625__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__625__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__646__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__646__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__646__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__646__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__646__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__646__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__646__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__646__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__641__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__641__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__641__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__641__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__641__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__641__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__641__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__641__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__642__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__642__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__642__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__642__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__642__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__642__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__642__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__642__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__588__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__588__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__588__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__588__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__588__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__588__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__588__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__588__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__589__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__589__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__589__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__589__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__589__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__589__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__589__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__589__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__590__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__590__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__590__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__590__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__590__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__590__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__590__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__590__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__591__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__591__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__591__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__591__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__591__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__591__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__591__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__591__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__609__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__609__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__609__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__609__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__609__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__609__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__609__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__609__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__610__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__610__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__610__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__610__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__610__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__610__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__610__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__610__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__631__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__631__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__631__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__631__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__631__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__631__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__631__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__631__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__632__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__632__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__632__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__632__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__632__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__632__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__632__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__632__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__633__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__633__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__633__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__633__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__633__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__633__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__633__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__633__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__634__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__634__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__634__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__634__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__634__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__634__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__634__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__634__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__635__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__635__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__635__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__635__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__635__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__635__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__635__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__635__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__fp16_en_sync)) 
              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__mul_unit_rdy)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__590__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__590__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__590__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__590__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__590__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__590__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__590__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__590__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__588__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__588__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__588__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__588__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__588__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__588__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__588__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__588__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__609__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__609__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__609__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__609__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__609__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__609__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__609__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__609__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__631__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__631__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)) 
                              | (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
                                 >> 0x00000015U)))) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__631__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__631__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__631__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__631__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__631__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__631__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__591__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__591__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__591__input_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__591__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__591__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__591__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__591__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__591__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__589__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__589__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__589__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__589__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__589__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__589__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__589__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__589__Vfuncout;
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8 
        = ((IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__610__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__610__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__610__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__610__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__610__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__610__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__610__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__610__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__634__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__634__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__634__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__634__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__634__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__634__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__634__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__634__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__632__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__632__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__632__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__632__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__632__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__632__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__632__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__632__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__635__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__635__input_1 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__635__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__635__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__635__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__635__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__635__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__635__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__633__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__633__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__633__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__633__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__633__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__633__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__633__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__633__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul__1(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__649__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__649__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__649__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__649__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__649__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__649__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__649__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__649__sel = 0;
    // Body
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__649__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__649__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__649__input_0 
        = (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                           << 0x0000000fU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[0U] 
                                              >> 0x00000011U)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__649__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__649__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__649__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__649__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__649__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl 
        = (0x000000ffU & ((IData)(0x61U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__599__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__599__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__599__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__599__Vfuncout)))));
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul__2(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__648__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__648__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__648__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__648__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__648__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__648__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__648__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__648__sel = 0;
    // Body
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__648__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__648__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__648__input_0 
        = (0x0001ffffU & (IData)((vlSymsp->TOP.__VdfgRegularize_he50b618e_0_57 
                                  >> 0x00000012U)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__648__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__648__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__648__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__648__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__648__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul__3(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9;
    HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__585__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__585__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__585__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__585__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__585__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__585__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__585__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__585__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__586__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__586__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__586__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__586__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__587__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__587__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__587__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__587__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__608__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__608__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__608__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__608__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__608__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__608__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__608__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__608__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__mul_fp_vld) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__mul_fp_vld) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__608__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__608__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__608__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__608__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__608__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__608__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__608__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__608__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__585__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__586__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__586__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__586__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__585__input_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__586__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__587__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__587__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__587__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__585__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__587__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__585__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__585__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__585__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__585__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__585__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_and_1_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
           & ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3)) 
                & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_13_nl)));
    HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_and_1_cse 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_17_nl)) 
           & (IData)(HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9));
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul__5(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__592__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__592__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__592__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__592__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__592__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__592__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__592__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__592__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__597__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__597__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__597__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__597__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__602__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__602__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__602__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__602__vector = 0;
    // Body
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__592__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__592__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__592__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__592__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__592__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__592__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__592__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__592__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl 
        = (0x000000ffU & (VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__593__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__593__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__593__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__593__Vfuncout))) 
                          + VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__594__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__594__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__594__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__594__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp 
        = ((0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
           | (0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl 
        = (0x000001ffU & (VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__600__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__600__Vfuncout 
                            = ((0x00000080U & ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__600__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__600__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__600__Vfuncout))) 
                          + VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__601__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__601__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__601__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__601__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl 
        = (0x000000ffU & ((IData)(0x51U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__596__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl));
                        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
                            = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__596__vector), 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__596__Vfuncout 
                            = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__595__vector 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__596__Vfuncout;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__595__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__595__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__595__Vfuncout)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__602__vector 
        = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__602__vector), 7U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__602__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__602__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__597__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__597__vector), 6U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__597__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__597__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1));
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul__6(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__611__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__611__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__611__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__611__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__611__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__611__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__611__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__611__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__612__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__612__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__612__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__612__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__612__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__612__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__612__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__612__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__613__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__613__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__613__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__613__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__613__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__613__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__613__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__613__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__627__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__627__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__627__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__627__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__627__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__627__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__627__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__627__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__628__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__628__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__628__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__628__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__628__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__628__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__628__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__628__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__629__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__629__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__629__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__629__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__629__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__629__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__629__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__629__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__636__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__636__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__636__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__636__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__636__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__636__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__636__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__636__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__637__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__637__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__637__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__637__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__637__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__637__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__637__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__637__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__638__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__638__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__638__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__638__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__638__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__638__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__638__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__638__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__639__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__639__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__639__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__639__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__639__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__639__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__639__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__639__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__640__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__640__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__640__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__640__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__640__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__640__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__640__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__640__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__643__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__643__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__643__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__643__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__643__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__643__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__643__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__643__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__644__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__644__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__644__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__644__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__644__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__644__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__644__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__644__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__645__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__645__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__645__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__645__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__645__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__645__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__645__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__645__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__647__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__647__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__647__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__647__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__647__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__647__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__647__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__647__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__611__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__611__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__611__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__611__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__611__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__611__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__611__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__611__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1) 
                 | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__644__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__644__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__644__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__644__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__644__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__644__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__644__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__644__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__612__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__612__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__612__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__612__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__612__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__612__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__612__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__612__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__627__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__627__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__627__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__627__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__627__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__627__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__627__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__627__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__645__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__645__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__645__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__645__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__645__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__645__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__645__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__645__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__613__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__613__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__613__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__613__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__613__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__613__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__613__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__613__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__639__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__639__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__639__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__639__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__639__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__639__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__639__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__639__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__628__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__628__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__628__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__628__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__628__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__628__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__628__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__628__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__636__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__636__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__636__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__636__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__636__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__636__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__636__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__636__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__647__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__647__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__647__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__647__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__647__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__647__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__647__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__647__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__640__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__640__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__640__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__640__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__640__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__640__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__640__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__640__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__629__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__629__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__629__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__629__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__629__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__629__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__629__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__629__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__637__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__637__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__637__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__637__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__637__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__637__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__637__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__637__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__643__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__643__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__643__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__643__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__643__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__643__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__643__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__643__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__638__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__638__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__638__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__638__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__638__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__638__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__638__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_20_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__638__Vfuncout;
}

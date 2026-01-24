// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_HLS_fp32_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_5__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7;
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__320__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__320__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__320__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__320__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__320__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__320__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__320__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__320__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__321__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__321__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__321__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__321__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__322__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__322__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__322__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__322__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__336__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__336__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__336__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__336__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__336__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__336__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__336__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__336__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__337__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__337__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__337__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__337__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__337__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__337__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__337__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__337__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__338__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__338__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__338__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__338__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__338__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__338__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__338__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__338__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__339__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__339__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__339__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__339__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__339__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__339__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__339__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__339__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__340__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__340__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__340__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__340__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__340__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__340__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__340__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__340__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__341__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__341__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__341__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__341__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__341__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__341__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__341__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__341__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__342__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__342__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__342__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__342__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__342__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__342__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__342__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__342__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__343__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__343__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__343__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__343__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__343__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__343__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__343__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__343__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__344__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__344__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__344__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__344__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__344__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__344__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__344__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__344__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__362__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__362__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__362__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__362__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__362__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__362__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__362__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__362__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__363__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__363__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__363__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__363__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__363__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__363__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__363__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__363__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__364__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__364__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__364__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__364__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__364__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__364__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__364__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__364__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__365__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__365__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__365__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__365__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__365__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__365__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__365__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__365__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__366__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__366__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__366__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__366__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__366__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__366__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__366__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__366__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__367__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__367__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__367__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__367__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__367__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__367__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__367__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__367__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__368__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__368__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__368__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__368__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__368__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__368__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__368__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__368__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__369__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__369__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__369__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__369__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__369__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__369__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__369__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__369__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__370__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__370__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__370__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__370__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__370__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__370__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__370__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__370__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__371__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__371__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__371__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__371__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__371__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__371__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__371__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__371__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__372__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__372__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__372__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__372__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__372__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__372__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__372__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__372__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__374__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__374__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__374__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__374__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__374__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__374__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__374__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__374__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__378__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__378__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__378__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__378__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__378__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__378__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__378__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__378__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__381__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__381__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__381__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__381__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__381__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__381__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__381__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__381__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
            ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
               & (IData)(((0x0fc0U == (0x0fc0U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_dout_pvld))) 
                          & (0x1fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_26)))))
            : ((2U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                   & (IData)(((0x07c0U == (0x07c0U 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_32))) 
                              & (0x1eU == (0x1eU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_26))))))
                : ((1U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                    ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                       & (IData)(((0x03c0U == (0x03c0U 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_31))) 
                                  & (0x1cU == (0x1cU 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_26))))))
                    : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                       & (IData)(((0x01c0U == (0x01c0U 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_30))) 
                                  & (0x18U == (0x18U 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_26)))))))));
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__339__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__339__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__339__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__339__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__339__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__339__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__339__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__339__Vfuncout;
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__336__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__336__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__336__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__336__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__336__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__336__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__336__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__336__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__378__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__378__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__378__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__378__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__378__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__378__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__378__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__378__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__374__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__374__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__374__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__374__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__374__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__374__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__374__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__374__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__381__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__381__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__381__input_0 
        = (1U & (~ (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__381__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__381__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__381__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__381__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__381__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__362__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__362__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1) 
                        & ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6)) 
                           | (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
                                      >> 0x0000002fU))))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__362__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__362__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__362__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__362__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__362__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__362__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__337__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__337__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__337__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__337__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__337__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__337__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__337__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__337__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__340__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__340__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__340__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__340__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__340__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__340__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__340__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__340__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__341__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__341__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__341__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__341__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__341__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__341__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__341__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__341__Vfuncout;
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__320__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__321__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__321__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__321__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__320__input_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__321__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__322__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__322__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__322__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__320__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__322__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__320__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__320__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__320__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__320__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__320__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__367__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__367__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__367__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__367__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__367__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__367__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__367__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__367__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__338__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__338__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__338__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__338__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__338__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__338__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__338__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__338__Vfuncout;
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__368__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__368__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__368__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__368__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__368__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__368__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__368__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__368__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__342__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__342__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__342__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__342__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__342__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__342__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__342__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__342__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__370__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__370__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__370__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__370__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__370__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__370__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__370__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__370__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__363__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__363__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__363__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__363__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__363__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__363__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__363__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__363__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__365__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__365__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__365__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__365__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__365__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__365__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__365__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__365__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__369__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__369__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__369__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__369__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__369__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__369__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__369__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__369__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__343__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__343__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__343__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__343__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__343__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__343__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__343__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__343__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__371__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__371__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__371__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__371__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__371__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__371__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__371__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__371__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__364__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__364__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__364__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__364__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__364__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__364__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__364__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__364__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__366__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__366__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__366__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__366__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__366__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__366__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__366__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__366__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__344__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__344__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__344__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__344__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__344__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__344__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__344__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__344__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__372__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__372__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__372__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__372__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__372__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__372__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__372__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__372__Vfuncout;
}

void Vsim_HLS_fp32_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_6__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_6__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__387__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__387__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__387__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__387__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__387__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__387__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__387__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__387__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__388__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__388__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__388__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__388__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__388__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__388__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__388__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__388__sel = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__389__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__389__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__389__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__389__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__391__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__391__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__391__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__391__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__395__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__395__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__395__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__395__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__396__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__396__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__396__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__396__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__397__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__397__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__397__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__397__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__397__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__397__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__397__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__397__sel = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__398__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__398__Vfuncout = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__398__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__398__input_0 = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__398__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__398__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__398__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__398__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__399__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__399__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__399__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__399__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__399__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__399__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__399__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__399__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__409__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__409__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__409__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__409__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__409__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__409__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__409__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__409__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__410__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__410__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__410__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__410__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__410__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__410__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__410__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__410__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__411__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__411__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__411__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__411__vector = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__412__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__412__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__412__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__412__input_0 = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__412__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__412__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__412__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__412__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__413__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__413__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__413__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__413__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__413__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__413__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__413__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__413__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__414__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__414__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__414__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__414__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__414__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__414__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__414__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__414__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__415__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__415__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__415__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__415__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__415__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__415__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__415__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__415__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__416__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__416__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__416__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__416__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__416__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__416__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__416__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__416__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__416__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__416__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__418__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__418__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__418__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__418__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__418__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__418__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__418__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__418__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__419__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__419__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__419__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__419__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__422__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__422__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__422__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__422__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__422__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__422__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__425__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__425__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__425__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__425__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__425__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__425__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__425__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__425__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__437__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__437__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__437__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__437__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__437__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__437__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__437__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__437__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__439__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__439__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__439__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__439__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__439__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__439__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__439__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__439__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__440__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__440__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__440__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__440__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__440__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__440__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__440__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__440__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__441__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__441__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__441__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__441__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__441__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__441__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__441__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__441__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__443__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__443__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__443__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__443__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__443__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__443__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__443__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__443__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__444__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__444__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__444__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__444__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__444__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__444__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__444__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__444__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__446__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__446__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__446__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__446__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__446__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__446__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__446__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__446__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__447__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__447__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__447__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__447__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__447__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__447__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__447__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__447__sel = 0;
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__411__vector 
                = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__Vstatic__tmp 
                = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__411__vector), 1U));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__411__Vfuncout 
                = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__Vstatic__tmp));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__411__Vfuncout;
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__409__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__409__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__409__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__409__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__409__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__409__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__409__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__409__Vfuncout;
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__415__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__415__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__415__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__415__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__415__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__415__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__415__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__415__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__412__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__412__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__412__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__412__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__412__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__412__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__412__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__412__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1)))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__410__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__410__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__410__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__410__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__410__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__410__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__410__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__410__Vfuncout;
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
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__390__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__390__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__390__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__390__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__396__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__396__vector), 7U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__396__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__396__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__398__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x2fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__398__input_1 
        = (0x00003fffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__398__input_0 
        = (0x00003fffffffffffULL & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__398__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__398__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__398__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__398__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__398__Vfuncout;
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__391__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__391__vector), 8U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__391__Vfuncout 
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__414__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__414__input_1 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__414__input_0 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1);
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__414__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__414__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__414__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__414__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__414__Vfuncout;
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
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__391__Vfuncout;
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__397__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1) 
           & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                      >> 0x0000002fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__397__input_1 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__397__input_0 
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__413__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__413__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__413__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__413__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__413__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__413__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__413__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__413__Vfuncout;
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
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__397__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__397__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__397__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__397__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__397__Vfuncout;
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__416__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt)));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__416__input_0 
                = ((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                    ^ vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                   >> 0x0000001fU);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__416__input_1 
                = (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__416__input_2 
                = (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__416__input_0) 
                   & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__416__sel));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__416__input_1) 
                      & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__416__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__416__input_2) 
                      & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__416__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__416__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_3 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__416__Vfuncout;
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
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__417__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__417__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__417__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__417__Vfuncout))));
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__418__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)) 
                 | (0xffU != (0x000000ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__418__input_1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__419__vector 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__419__Vfuncout 
        = (0x007fffffU & (- (IData)((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__419__vector))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__418__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__419__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__418__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__418__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__418__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__418__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__418__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__399__sel 
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__399__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__399__input_2 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__399__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__399__sel)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__399__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__399__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__399__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__399__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__399__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__425__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__425__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__425__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                   >> 0x0000002fU)) 
                          | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__425__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__425__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__425__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__425__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__425__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__447__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__447__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__447__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_6.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__447__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__447__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__447__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__447__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__447__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__446__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__446__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__446__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_6.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__446__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__446__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__446__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__446__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__446__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_6.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_6.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__420__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)));
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__420__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__420__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__420__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__420__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__420__Vfuncout)));
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
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__392__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__392__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__392__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__392__Vfuncout)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__389__vector 
        = (0x0000ffffffffffffULL & ((QData)((IData)(
                                                    (0x00800000U 
                                                     | (0x007fffffU 
                                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1)))) 
                                    * (QData)((IData)(
                                                      (0x00800000U 
                                                       | (0x007fffffU 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__389__Vfuncout 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__389__vector;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__389__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl 
        = (0x000003ffU & (VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__423__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__423__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__423__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__423__Vfuncout))) 
                          + VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__424__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__424__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__424__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__424__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__422__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__422__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__422__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__422__input_1)
            : 0U);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__422__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__422__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__421__sel 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__421__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__421__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__421__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__421__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__421__Vfuncout)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__440__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__440__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__440__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__440__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__440__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__440__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__440__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__440__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__387__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__387__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__387__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__387__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__387__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__387__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__387__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__387__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl 
        = (0x000007ffU & (VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__393__vector 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__393__Vfuncout 
                            = ((0x00000200U & ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__393__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__393__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__393__Vfuncout))) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__394__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__394__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__394__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__394__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__441__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__441__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__441__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__441__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__441__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__441__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__441__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__441__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__395__vector 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp 
        = (0x000003ffU & VL_SHIFTR_III(10,10,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__395__vector), 9U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__395__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__395__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1) 
           | ((0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
              | (0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__388__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__388__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__388__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__388__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__388__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__388__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__388__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__388__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__437__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__437__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__437__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__437__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__437__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__437__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__437__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__437__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__439__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__439__input_1 
        = (1U & (~ ((~ (IData)(((0x7f800000U == (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse)))) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__439__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__439__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__439__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__439__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__439__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__439__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__443__sel 
        = (0xffU == (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                    >> 0x00000017U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__443__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__443__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__443__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__443__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__443__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__443__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__443__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__444__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__444__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__444__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__444__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__444__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__444__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__444__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__444__Vfuncout;
}

void Vsim_HLS_fp32_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_6__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_6__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7;
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__384__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__384__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__384__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__384__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__384__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__384__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__384__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__384__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__385__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__385__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__385__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__385__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__386__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__386__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__386__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__386__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__400__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__400__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__400__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__400__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__400__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__400__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__400__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__400__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__401__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__401__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__401__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__401__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__401__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__401__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__401__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__401__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__402__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__402__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__402__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__402__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__402__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__402__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__402__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__402__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__403__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__403__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__403__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__403__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__403__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__403__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__403__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__403__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__404__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__404__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__404__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__404__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__404__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__404__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__404__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__404__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__405__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__405__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__405__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__405__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__405__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__405__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__405__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__405__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__406__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__406__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__406__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__406__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__406__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__406__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__406__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__406__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__407__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__407__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__407__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__407__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__407__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__407__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__407__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__407__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__408__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__408__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__408__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__408__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__408__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__408__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__408__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__408__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__426__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__426__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__426__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__426__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__426__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__426__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__426__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__426__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__427__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__427__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__427__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__427__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__427__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__427__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__427__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__427__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__428__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__428__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__428__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__428__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__428__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__428__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__428__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__428__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__429__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__429__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__429__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__429__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__429__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__429__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__429__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__429__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__430__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__430__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__430__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__430__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__430__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__430__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__430__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__430__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__431__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__431__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__431__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__431__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__431__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__431__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__431__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__431__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__432__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__432__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__432__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__432__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__432__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__432__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__432__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__432__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__433__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__433__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__433__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__433__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__433__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__433__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__433__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__433__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__434__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__434__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__434__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__434__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__434__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__434__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__434__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__434__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__435__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__435__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__435__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__435__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__435__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__435__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__435__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__435__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__436__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__436__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__436__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__436__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__436__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__436__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__436__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__436__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__438__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__438__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__438__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__438__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__438__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__438__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__438__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__438__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__442__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__442__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__442__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__442__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__442__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__442__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__442__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__442__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__445__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__445__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__445__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__445__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__445__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__445__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__445__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__445__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
            ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
               & (IData)(((0x0f80U == (0x0f80U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_dout_pvld))) 
                          & (0x3fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_27)))))
            : ((2U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                   & (IData)(((0x0780U == (0x0780U 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_32))) 
                              & (0x3eU == (0x3eU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_27))))))
                : ((1U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                    ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                       & (IData)(((0x0380U == (0x0380U 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_31))) 
                                  & (0x3cU == (0x3cU 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_27))))))
                    : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                       & (IData)(((0x0180U == (0x0180U 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_30))) 
                                  & (0x38U == (0x38U 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_27)))))))));
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__403__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__403__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__403__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__403__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__403__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__403__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__403__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__403__Vfuncout;
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__400__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__400__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__400__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__400__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__400__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__400__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__400__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__400__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__442__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__442__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__442__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__442__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__442__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__442__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__442__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__442__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__438__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__438__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__438__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__438__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__438__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__438__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__438__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__438__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__445__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__445__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__445__input_0 
        = (1U & (~ (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__445__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__445__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__445__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__445__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__445__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__426__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__426__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1) 
                        & ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6)) 
                           | (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
                                      >> 0x0000002fU))))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__426__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__426__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__426__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__426__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__426__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__426__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__401__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__401__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__401__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__401__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__401__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__401__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__401__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__401__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__404__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__404__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__404__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__404__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__404__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__404__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__404__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__404__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__405__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__405__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__405__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__405__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__405__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__405__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__405__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__405__Vfuncout;
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__384__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__385__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__385__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__385__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__384__input_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__385__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__386__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__386__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__386__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__384__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__386__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__384__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__384__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__384__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__384__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__384__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__431__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__431__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__431__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__431__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__431__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__431__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__431__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__431__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__402__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__402__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__402__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__402__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__402__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__402__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__402__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__402__Vfuncout;
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__432__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__432__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__432__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__432__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__432__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__432__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__432__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__432__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__406__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__406__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__406__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__406__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__406__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__406__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__406__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__406__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__434__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__434__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__434__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__434__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__434__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__434__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__434__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__434__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__427__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__427__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__427__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__427__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__427__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__427__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__427__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__427__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__429__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__429__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__429__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__429__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__429__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__429__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__429__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__429__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__433__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__433__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__433__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__433__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__433__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__433__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__433__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__433__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__407__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__407__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__407__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__407__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__407__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__407__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__407__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__407__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__435__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__435__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__435__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__435__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__435__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__435__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__435__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__435__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__428__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__428__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__428__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__428__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__428__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__428__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__428__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__428__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__430__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__430__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__430__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__430__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__430__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__430__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__430__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__430__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__408__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__408__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__408__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__408__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__408__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__408__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__408__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__408__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__436__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__436__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__436__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__436__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__436__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__436__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__436__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__436__Vfuncout;
}

void Vsim_HLS_fp32_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_7__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__sel = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__453__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__453__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__453__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__453__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__455__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__455__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__455__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__455__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__459__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__459__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__459__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__459__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__460__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__460__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__460__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__460__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__sel = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__Vfuncout = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__input_0 = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__473__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__473__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__473__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__473__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__473__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__473__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__473__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__473__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__474__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__474__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__474__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__474__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__474__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__474__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__474__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__474__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__475__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__475__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__475__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__475__vector = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__476__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__476__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__476__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__476__input_0 = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__476__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__476__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__476__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__476__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__477__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__477__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__477__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__477__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__477__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__477__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__477__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__477__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__478__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__478__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__478__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__478__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__478__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__478__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__478__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__478__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__479__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__479__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__479__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__479__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__479__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__479__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__479__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__479__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__480__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__480__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__480__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__480__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__480__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__480__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__480__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__480__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__480__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__480__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__483__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__483__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__483__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__483__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__486__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__486__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__486__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__486__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__486__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__486__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__sel = 0;
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__475__vector 
                = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__Vstatic__tmp 
                = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__475__vector), 1U));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__475__Vfuncout 
                = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__Vstatic__tmp));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__475__Vfuncout;
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__473__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__473__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__473__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__473__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__473__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__473__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__473__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__473__Vfuncout;
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__479__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__479__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__479__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__479__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__479__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__479__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__479__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__479__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__476__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__476__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__476__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__476__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__476__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__476__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__476__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__476__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1)))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__474__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__474__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__474__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__474__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__474__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__474__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__474__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__474__Vfuncout;
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
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__454__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__454__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__454__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__454__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__460__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__460__vector), 7U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__460__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__460__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x2fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__input_1 
        = (0x00003fffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__input_0 
        = (0x00003fffffffffffULL & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__Vfuncout;
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__455__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__455__vector), 8U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__455__Vfuncout 
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__478__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__478__input_1 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__478__input_0 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1);
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__478__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__478__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__478__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__478__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__478__Vfuncout;
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
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__455__Vfuncout;
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1) 
           & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                      >> 0x0000002fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__input_1 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__input_0 
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__477__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__477__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__477__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__477__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__477__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__477__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__477__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__477__Vfuncout;
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
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__Vfuncout;
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__480__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt)));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__480__input_0 
                = ((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                    ^ vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                   >> 0x0000001fU);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__480__input_1 
                = (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__480__input_2 
                = (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__480__input_0) 
                   & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__480__sel));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__480__input_1) 
                      & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__480__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__480__input_2) 
                      & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__480__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__480__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_3 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__480__Vfuncout;
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
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__481__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__481__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__481__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__481__Vfuncout))));
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)) 
                 | (0xffU != (0x000000ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__input_1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__483__vector 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__483__Vfuncout 
        = (0x007fffffU & (- (IData)((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__483__vector))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__483__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__sel 
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__input_2 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__sel)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                   >> 0x0000002fU)) 
                          | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_7.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_7.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_7.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_7.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__484__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)));
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__484__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__484__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__484__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__484__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__484__Vfuncout)));
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
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__456__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__456__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__456__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__456__Vfuncout)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__453__vector 
        = (0x0000ffffffffffffULL & ((QData)((IData)(
                                                    (0x00800000U 
                                                     | (0x007fffffU 
                                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1)))) 
                                    * (QData)((IData)(
                                                      (0x00800000U 
                                                       | (0x007fffffU 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__453__Vfuncout 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__453__vector;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__453__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl 
        = (0x000003ffU & (VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__487__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__487__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__487__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__487__Vfuncout))) 
                          + VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__488__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__488__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__488__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__488__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__486__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__486__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__486__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__486__input_1)
            : 0U);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__486__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__486__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__485__sel 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__485__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__485__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__485__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__485__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__485__Vfuncout)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl 
        = (0x000007ffU & (VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__457__vector 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__457__Vfuncout 
                            = ((0x00000200U & ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__457__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__457__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__457__Vfuncout))) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__458__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__458__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__458__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__458__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__459__vector 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp 
        = (0x000003ffU & VL_SHIFTR_III(10,10,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__459__vector), 9U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__459__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__459__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1) 
           | ((0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
              | (0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__input_1 
        = (1U & (~ ((~ (IData)(((0x7f800000U == (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse)))) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__sel 
        = (0xffU == (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                    >> 0x00000017U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__Vfuncout;
}

void Vsim_HLS_fp32_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_7__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7;
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__449__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__449__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__449__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__449__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__450__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__450__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__450__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__450__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
            ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
               & (IData)(((0x0f00U == (0x0f00U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_dout_pvld))) 
                          & (0x7fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_28)))))
            : ((2U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                   & (IData)(((0x0700U == (0x0700U 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_32))) 
                              & (0x7eU == (0x7eU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_28))))))
                : ((1U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                    ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                       & (IData)(((0x0300U == (0x0300U 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_31))) 
                                  & (0x7cU == (0x7cU 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_28))))))
                    : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                       & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_8.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                          & (0x78U == (0x78U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_28))))))));
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__Vfuncout;
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__input_0 
        = (1U & (~ (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1) 
                        & ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6)) 
                           | (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
                                      >> 0x0000002fU))))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__Vfuncout;
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__449__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__449__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__449__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__input_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__449__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__450__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__450__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__450__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__450__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__Vfuncout;
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__Vfuncout;
}

void Vsim_HLS_fp32_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_8__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_8__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__sel = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__517__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__517__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__517__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__517__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__519__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__519__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__519__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__519__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__523__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__523__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__523__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__523__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__524__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__524__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__524__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__524__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__sel = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__Vfuncout = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__input_0 = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__537__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__537__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__537__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__537__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__537__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__537__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__537__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__537__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__538__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__538__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__538__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__538__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__538__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__538__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__538__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__538__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__539__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__539__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__539__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__539__vector = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__540__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__540__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__540__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__540__input_0 = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__540__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__540__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__540__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__540__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__541__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__541__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__541__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__541__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__541__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__541__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__541__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__541__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__542__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__542__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__542__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__542__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__542__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__542__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__542__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__542__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__543__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__543__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__543__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__543__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__543__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__543__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__543__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__543__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__544__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__544__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__544__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__544__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__544__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__544__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__544__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__544__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__544__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__544__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__547__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__547__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__547__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__547__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__550__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__550__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__550__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__550__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__550__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__550__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__sel = 0;
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__539__vector 
                = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__Vstatic__tmp 
                = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__539__vector), 1U));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__539__Vfuncout 
                = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__Vstatic__tmp));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__539__Vfuncout;
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__537__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__537__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__537__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__537__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__537__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__537__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__537__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__537__Vfuncout;
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__543__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__543__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__543__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__543__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__543__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__543__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__543__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__543__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__540__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__540__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__540__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__540__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__540__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__540__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__540__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__540__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1)))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__538__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__538__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__538__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__538__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__538__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__538__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__538__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__538__Vfuncout;
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
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__518__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__518__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__518__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__518__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__524__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__524__vector), 7U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__524__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__524__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x2fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__input_1 
        = (0x00003fffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__input_0 
        = (0x00003fffffffffffULL & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__Vfuncout;
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__519__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__519__vector), 8U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__519__Vfuncout 
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__542__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__542__input_1 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__542__input_0 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1);
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__542__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__542__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__542__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__542__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__542__Vfuncout;
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
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__519__Vfuncout;
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1) 
           & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                      >> 0x0000002fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__input_1 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__input_0 
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__541__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__541__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__541__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__541__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__541__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__541__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__541__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__541__Vfuncout;
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
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__Vfuncout;
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__544__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt)));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__544__input_0 
                = ((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                    ^ vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                   >> 0x0000001fU);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__544__input_1 
                = (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__544__input_2 
                = (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__544__input_0) 
                   & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__544__sel));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__544__input_1) 
                      & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__544__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__544__input_2) 
                      & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__544__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__544__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_3 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__544__Vfuncout;
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
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__545__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__545__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__545__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__545__Vfuncout))));
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)) 
                 | (0xffU != (0x000000ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__input_1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__547__vector 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__547__Vfuncout 
        = (0x007fffffU & (- (IData)((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__547__vector))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__547__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__sel 
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__input_2 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__sel)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                   >> 0x0000002fU)) 
                          | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_8.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_8.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_8.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_8.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__548__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)));
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__548__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__548__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__548__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__548__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__548__Vfuncout)));
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
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__520__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__520__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__520__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__520__Vfuncout)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__517__vector 
        = (0x0000ffffffffffffULL & ((QData)((IData)(
                                                    (0x00800000U 
                                                     | (0x007fffffU 
                                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1)))) 
                                    * (QData)((IData)(
                                                      (0x00800000U 
                                                       | (0x007fffffU 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__517__Vfuncout 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__517__vector;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__517__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl 
        = (0x000003ffU & (VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__551__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__551__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__551__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__551__Vfuncout))) 
                          + VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__552__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__552__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__552__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__552__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__550__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__550__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__550__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__550__input_1)
            : 0U);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__550__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__550__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__549__sel 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__549__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__549__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__549__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__549__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__549__Vfuncout)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl 
        = (0x000007ffU & (VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__521__vector 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__521__Vfuncout 
                            = ((0x00000200U & ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__521__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__521__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__521__Vfuncout))) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__522__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__522__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__522__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__522__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__523__vector 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp 
        = (0x000003ffU & VL_SHIFTR_III(10,10,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__523__vector), 9U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__523__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__523__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1) 
           | ((0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
              | (0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__input_1 
        = (1U & (~ ((~ (IData)(((0x7f800000U == (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse)))) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__sel 
        = (0xffU == (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                    >> 0x00000017U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__Vfuncout;
}

void Vsim_HLS_fp32_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_8__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_8__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7;
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__513__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__513__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__513__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__513__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__514__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__514__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__514__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__514__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
            ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
               & (IData)(((0x0e00U == (0x0e00U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_dout_pvld))) 
                          & (0xffU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_29)))))
            : ((2U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                   & (IData)(((0x0600U == (0x0600U 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_32))) 
                              & (0xfeU == (0xfeU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_29))))))
                : ((1U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                    ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                       & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_9.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                          & (0xfcU == (0xfcU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_29)))))
                    : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                       & (0xf8U == (0xf8U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_29)))))));
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__Vfuncout;
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__input_0 
        = (1U & (~ (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1) 
                        & ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6)) 
                           | (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
                                      >> 0x0000002fU))))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__Vfuncout;
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__513__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__513__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__513__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__input_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__513__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__514__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__514__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__514__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__514__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__Vfuncout;
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__Vfuncout;
}

void Vsim_HLS_fp32_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_9__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_9__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__sel = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__581__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__581__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__581__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__581__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__583__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__583__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__583__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__583__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__587__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__587__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__587__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__587__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__588__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__588__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__588__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__588__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__sel = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__Vfuncout = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__input_0 = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__601__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__601__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__601__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__601__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__601__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__601__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__601__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__601__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__602__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__602__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__602__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__602__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__602__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__602__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__602__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__602__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__603__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__603__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__603__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__603__vector = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__604__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__604__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__604__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__604__input_0 = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__604__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__604__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__604__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__604__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__605__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__605__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__605__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__605__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__605__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__605__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__605__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__605__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__606__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__606__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__606__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__606__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__606__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__606__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__606__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__606__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__607__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__607__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__607__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__607__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__607__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__607__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__607__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__607__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__608__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__608__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__608__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__608__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__608__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__608__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__608__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__608__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__608__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__608__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__611__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__611__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__611__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__611__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__614__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__614__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__614__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__614__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__614__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__614__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__sel = 0;
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__603__vector 
                = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__Vstatic__tmp 
                = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__603__vector), 1U));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__603__Vfuncout 
                = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__Vstatic__tmp));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__603__Vfuncout;
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__601__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__601__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__601__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__601__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__601__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__601__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__601__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__601__Vfuncout;
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__607__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__607__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__607__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__607__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__607__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__607__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__607__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__607__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__604__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__604__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__604__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__604__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__604__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__604__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__604__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__604__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13)));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1)))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__602__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__602__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__602__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__602__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__602__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__602__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__602__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__602__Vfuncout;
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
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl 
        = (0x000003ffU & ((IData)(0x0141U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__582__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__582__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__582__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__582__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__588__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__588__vector), 7U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__588__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__588__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x2fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__input_1 
        = (0x00003fffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__input_0 
        = (0x00003fffffffffffULL & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__Vfuncout;
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__583__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__583__vector), 8U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__583__Vfuncout 
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__606__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__606__input_1 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__606__input_0 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1);
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__606__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__606__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__606__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__606__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__606__Vfuncout;
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
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__583__Vfuncout;
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
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1) 
           & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                      >> 0x0000002fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__input_1 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__input_0 
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__605__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__605__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__605__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__605__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__605__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__605__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__605__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__605__Vfuncout;
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
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__608__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt)));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__608__input_0 
                = ((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                    ^ vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                   >> 0x0000001fU);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__608__input_1 
                = (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__608__input_2 
                = (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__608__input_0) 
                   & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__608__sel));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__608__input_1) 
                      & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__608__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__608__input_2) 
                      & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__608__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__608__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_3 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__608__Vfuncout;
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
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__609__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__609__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__609__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__609__Vfuncout))));
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
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)) 
                 | (0xffU != (0x000000ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__input_1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__611__vector 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__611__Vfuncout 
        = (0x007fffffU & (- (IData)((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__611__vector))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__611__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__sel 
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__input_2 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__sel)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_9.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_9.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                   >> 0x0000002fU)) 
                          | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_9.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_9.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__612__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)));
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__612__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__612__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__612__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__612__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__612__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
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
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__584__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__584__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__584__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__584__Vfuncout)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__581__vector 
        = (0x0000ffffffffffffULL & ((QData)((IData)(
                                                    (0x00800000U 
                                                     | (0x007fffffU 
                                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1)))) 
                                    * (QData)((IData)(
                                                      (0x00800000U 
                                                       | (0x007fffffU 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__581__Vfuncout 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__581__vector;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__581__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl 
        = (0x000003ffU & (VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__615__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__615__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__615__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__615__Vfuncout))) 
                          + VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__616__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__616__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__616__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__616__Vfuncout)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__614__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__614__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__614__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__614__input_1)
            : 0U);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__614__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__614__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__613__sel 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__613__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__613__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__613__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__613__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__613__Vfuncout)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl 
        = (0x000007ffU & (VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__585__vector 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__585__Vfuncout 
                            = ((0x00000200U & ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__585__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__585__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__585__Vfuncout))) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__586__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__586__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__586__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__586__Vfuncout)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__587__vector 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp 
        = (0x000003ffU & VL_SHIFTR_III(10,10,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__587__vector), 9U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__587__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__587__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1) 
           | ((0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
              | (0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__input_1 
        = (1U & (~ ((~ (IData)(((0x7f800000U == (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse)))) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__sel 
        = (0xffU == (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                    >> 0x00000017U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__Vfuncout;
}

void Vsim_HLS_fp32_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_9__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_9__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7;
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__577__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__577__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__577__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__577__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__578__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__578__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__578__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__578__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
            ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
               & (IData)(((0x0c00U == (0x0c00U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_dout_pvld))) 
                          & (0x01ffU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_30)))))
            : ((2U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                   & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_10.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                      & (0x01feU == (0x01feU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_30)))))
                : ((1U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                    ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                       & (0x01fcU == (0x01fcU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_30))))
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__Vfuncout;
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__input_0 
        = (1U & (~ (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1) 
                        & ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6)) 
                           | (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
                                      >> 0x0000002fU))))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__Vfuncout;
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__577__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__577__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__577__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__input_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__577__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__578__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__578__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__578__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__578__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__Vfuncout;
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__Vfuncout;
}

void Vsim_HLS_fp32_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_10__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_10__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__sel = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__645__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__645__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__645__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__645__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__647__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__647__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__647__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__647__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__651__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__651__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__651__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__651__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__652__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__652__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__652__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__652__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__sel = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__Vfuncout = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__input_0 = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__665__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__665__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__665__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__665__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__665__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__665__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__665__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__665__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__666__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__666__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__666__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__666__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__666__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__666__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__666__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__666__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__667__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__667__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__667__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__667__vector = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__668__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__668__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__668__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__668__input_0 = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__668__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__668__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__668__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__668__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__669__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__669__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__669__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__669__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__669__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__669__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__669__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__669__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__670__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__670__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__670__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__670__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__670__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__670__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__670__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__670__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__671__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__671__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__671__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__671__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__671__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__671__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__671__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__671__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__672__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__672__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__672__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__672__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__672__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__672__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__672__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__672__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__672__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__672__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__675__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__675__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__675__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__675__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__678__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__678__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__678__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__678__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__678__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__678__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__sel = 0;
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__667__vector 
                = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__Vstatic__tmp 
                = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__667__vector), 1U));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__667__Vfuncout 
                = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__Vstatic__tmp));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__667__Vfuncout;
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__665__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__665__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__665__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__665__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__665__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__665__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__665__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__665__Vfuncout;
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__671__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__671__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__671__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__671__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__671__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__671__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__671__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__671__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__668__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__668__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__668__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__668__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__668__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__668__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__668__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__668__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13)));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1)))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__666__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__666__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__666__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__666__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__666__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__666__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__666__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__666__Vfuncout;
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
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl 
        = (0x000003ffU & ((IData)(0x0141U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__646__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__646__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__646__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__646__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__652__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__652__vector), 7U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__652__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__652__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x2fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__input_1 
        = (0x00003fffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__input_0 
        = (0x00003fffffffffffULL & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__Vfuncout;
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__647__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__647__vector), 8U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__647__Vfuncout 
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__670__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__670__input_1 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__670__input_0 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1);
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__670__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__670__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__670__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__670__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__670__Vfuncout;
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
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__647__Vfuncout;
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
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1) 
           & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                      >> 0x0000002fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__input_1 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__input_0 
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
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__669__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__669__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__669__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__669__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__669__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__669__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__669__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__669__Vfuncout;
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
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__672__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt)));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__672__input_0 
                = ((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                    ^ vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                   >> 0x0000001fU);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__672__input_1 
                = (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__672__input_2 
                = (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__672__input_0) 
                   & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__672__sel));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__672__input_1) 
                      & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__672__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__672__input_2) 
                      & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__672__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__672__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_3 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__672__Vfuncout;
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
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__673__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__673__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__673__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__673__Vfuncout))));
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
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)) 
                 | (0xffU != (0x000000ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__input_1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__675__vector 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__675__Vfuncout 
        = (0x007fffffU & (- (IData)((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__675__vector))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__675__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__sel 
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__input_2 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__sel)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_10.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_10.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                   >> 0x0000002fU)) 
                          | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_10.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_10.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__676__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)));
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__676__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__676__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__676__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__676__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__676__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
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
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__648__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__648__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__648__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__648__Vfuncout)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__645__vector 
        = (0x0000ffffffffffffULL & ((QData)((IData)(
                                                    (0x00800000U 
                                                     | (0x007fffffU 
                                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1)))) 
                                    * (QData)((IData)(
                                                      (0x00800000U 
                                                       | (0x007fffffU 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__645__Vfuncout 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__645__vector;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__645__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl 
        = (0x000003ffU & (VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__679__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__679__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__679__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__679__Vfuncout))) 
                          + VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__680__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__680__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__680__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__680__Vfuncout)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__678__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__678__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__678__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__678__input_1)
            : 0U);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__678__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__678__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__677__sel 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__677__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__677__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__677__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__677__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__677__Vfuncout)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl 
        = (0x000007ffU & (VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__649__vector 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__649__Vfuncout 
                            = ((0x00000200U & ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__649__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__649__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__649__Vfuncout))) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__650__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__650__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__650__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__650__Vfuncout)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__651__vector 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp 
        = (0x000003ffU & VL_SHIFTR_III(10,10,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__651__vector), 9U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__651__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__651__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1) 
           | ((0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
              | (0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__input_1 
        = (1U & (~ ((~ (IData)(((0x7f800000U == (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse)))) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__sel 
        = (0xffU == (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                    >> 0x00000017U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__Vfuncout;
}

void Vsim_HLS_fp32_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_10__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_10__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7;
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__641__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__641__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__641__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__641__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__642__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__642__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__642__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__642__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
            ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
               & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_11.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                  & (0x000003ffU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_31))))
            : ((2U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                   & (0x03feU == (0x03feU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_31))))
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__Vfuncout;
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__input_0 
        = (1U & (~ (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1) 
                        & ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6)) 
                           | (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
                                      >> 0x0000002fU))))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__Vfuncout;
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__641__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__641__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__641__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__input_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__641__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__642__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__642__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__642__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__642__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__Vfuncout;
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
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__Vfuncout;
}

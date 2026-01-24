// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__1(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14;
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14 = 0;
    CData/*0:0*/ u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15;
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__306__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__306__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__306__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__306__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__306__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__306__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__307__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__307__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__307__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__307__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__311__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__311__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__311__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__311__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__312__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__312__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__312__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__312__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__sel = 0;
    // Body
    vlSelfRef.__PVT__fp_interp_rdy_d1 = ((IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                         & (IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
              & (IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)));
    vlSelfRef.__PVT__fp_interp_vld_d1 = ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid));
    vlSelfRef.__VdfgRegularize_h098ddedf_0_4 = ((IData)(vlSelfRef.__PVT__fp_interp_vld_d0) 
                                                & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid)) 
                                               | ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d1) 
                                                  & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__fp_mul_sync_in_vld = ((IData)(vlSelfRef.__VdfgRegularize_h098ddedf_0_4) 
                                           & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy_d2)));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy_d1)));
    vlSelfRef.__PVT__fp_interp_rdy_d0 = ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                         & ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                                            & (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d0) 
              & (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid)));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d6 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid)) 
                                               | ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d0) 
                                                  & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d5 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d6)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d4 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d5)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_17 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_4_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_nor_ssc) 
           & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_5_rgt 
        = (1U & ((~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))));
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9)) 
           & ((IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_48_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_50_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_53_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_dcpl_11) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1) 
           & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_15 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
              & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__not_tmp_20 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__input_1 
        = ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9) 
               & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs) 
                  & (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10)))) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_5_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__sel 
        = (((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse) 
                | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4)) 
                   | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_inf_lpi_1_dfm_5)))) 
            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_19_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                       | ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1) 
                              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__input_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
              & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1) 
                 & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                       & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_20_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                       | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4)) 
                       | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_4) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_11_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d4)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_2_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2)) 
           & (IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_3_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2) 
           & (IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_15));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__311__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__311__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__311__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__input_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__311__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__312__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__312__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__312__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__input_0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__312__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_nvdla_float_h_ln670_assert_iExpoWidth_ge_oExpoWidth_sig_mx0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__306__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
              & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__307__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | ((0x0000000eU 
                                             & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2)) 
                                                << 1U)) 
                                            | (1U & 
                                               (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                >> 0x17U))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__307__vector), 4U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__307__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__306__input_0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__307__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__306__input_0) 
           & (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__306__sel));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__306__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__shift_0_prb 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__306__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_16_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_12_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__Vfuncout;
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen));
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_12_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__input_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_13 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_10_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_8_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_2_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_6_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__Vfuncout;
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d2)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_and_cse 
        = ((IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_and_cse 
        = ((IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_11_nl));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__Fp32ToFp17_and_1_cse 
        = ((IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_16_nl));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__input_1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_13;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_14_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__sel 
        = (1U & (~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_8_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_9_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                    | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_2_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_3_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)) 
                    | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_6_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_7_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__Vfuncout;
    vlSelfRef.__PVT__fp_sub_sync_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d1)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4)) 
                       | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_15_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__Vfuncout;
    vlSelfRef.__VdfgRegularize_h098ddedf_0_3 = ((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                                                & (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__0(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__364__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__364__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__364__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__364__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__366__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__366__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__366__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__366__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__368__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__368__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__368__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__368__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__sel = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__383__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__383__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__383__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__383__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__383__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__383__sel = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__input_0 = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__sel = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__402__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__402__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__402__arg1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__402__arg1 = 0;
    CData/*3:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__402__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__402__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__403__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__403__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__403__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__403__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__404__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__404__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__404__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__404__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__405__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__405__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__405__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__405__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__406__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__406__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__406__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__406__arg2 = 0;
    IData/*31:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__input_0 = 0;
    IData/*31:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__sel = 0;
    VlWide<4>/*119:0*/ __VdfgRegularize_h6e95ff9d_0_19372;
    VL_ZERO_W(120, __VdfgRegularize_h6e95ff9d_0_19372);
    QData/*57:0*/ __VdfgRegularize_h6e95ff9d_0_19375;
    __VdfgRegularize_h6e95ff9d_0_19375 = 0;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_10;
    // Body
    vlSelfRef.interp_in_pd = ((IData)((0U != (0x00008080U 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])))
                               ? (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[7U] 
                                                  << 0x00000010U) 
                                                 | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[6U] 
                                                    >> 0x00000010U)))
                               : 0U);
    vlSelfRef.__PVT__int_interp_out_pd = (0x0000ffffU 
                                          & ((0x01000000U 
                                              & vlSelfRef.__PVT__int_add[2U])
                                              ? ((0xffffffffU 
                                                  == 
                                                  ((((vlSelfRef.__PVT__int_add[1U] 
                                                      << 0x00000011U) 
                                                     | (vlSelfRef.__PVT__int_add[0U] 
                                                        >> 0x0000000fU)) 
                                                    & ((vlSelfRef.__PVT__int_add[2U] 
                                                        << 0x00000011U) 
                                                       | (vlSelfRef.__PVT__int_add[1U] 
                                                          >> 0x0000000fU))) 
                                                   & (0xfffffc00U 
                                                      | (0x000003ffU 
                                                         & (vlSelfRef.__PVT__int_add[2U] 
                                                            >> 0x0000000fU)))))
                                                  ? 
                                                 ((0x00008000U 
                                                   & (vlSelfRef.__PVT__int_add[2U] 
                                                      >> 9U)) 
                                                  | (0x00007fffU 
                                                     & vlSelfRef.__PVT__int_add[0U]))
                                                  : 0x8000U)
                                              : ((0U 
                                                  != 
                                                  ((((vlSelfRef.__PVT__int_add[1U] 
                                                      << 0x00000011U) 
                                                     | (vlSelfRef.__PVT__int_add[0U] 
                                                        >> 0x0000000fU)) 
                                                    | ((vlSelfRef.__PVT__int_add[2U] 
                                                        << 0x00000011U) 
                                                       | (vlSelfRef.__PVT__int_add[1U] 
                                                          >> 0x0000000fU))) 
                                                   | (0x000003ffU 
                                                      & (vlSelfRef.__PVT__int_add[2U] 
                                                         >> 0x0000000fU))))
                                                  ? 0x7fffU
                                                  : 
                                                 vlSelfRef.__PVT__int_add[0U])));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantRNE_24U_11U_else_acc_nl 
        = (0x000007ffU & ((0x000003ffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                          >> 0x0dU)) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__399__vector 
                            = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__399__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__399__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__399__Vfuncout)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__402__arg2 
        = (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2) 
            << 1U) | (1U & (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                               >> 0x00000017U))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__402__arg1 
        = (0x00800000U | (0x007fffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = ((0x01000000U & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t) 
           | __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__402__arg1);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x01ffffffU & VL_SHIFTRS_III(25,25,4, vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__402__arg2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__402__Vfuncout 
        = (0x00ffffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_itm 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__402__Vfuncout;
    __VdfgRegularize_h6e95ff9d_0_19372[0U] = 0U;
    __VdfgRegularize_h6e95ff9d_0_19372[1U] = (IData)(vlSelfRef.__PVT__int_mul);
    __VdfgRegularize_h6e95ff9d_0_19372[2U] = (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__int_mul 
                                                                      >> 0x00000038U))))) 
                                               << 0x00000019U) 
                                              | (IData)(
                                                        (vlSelfRef.__PVT__int_mul 
                                                         >> 0x00000020U)));
    __VdfgRegularize_h6e95ff9d_0_19372[3U] = (0x00ffffffU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.__PVT__int_mul 
                                                                        >> 0x00000038U))))) 
                                                 >> 7U));
    vlSelfRef.__PVT__interp_in_shift_abs = (0x0000003fU 
                                            & ((0x00000020U 
                                                & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (0x0000001fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__interp_in_shift_d1))))
                                                : (IData)(vlSelfRef.__PVT__interp_in_shift_d1)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva 
        = (0x0000003fU & ((IData)(0x0dU) + VL_EXTEND_II(6,5, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__370__vector 
                            = (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2) 
                                << 1U) | (1U & (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                   >> 0x17U))));
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__370__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__370__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__370__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva 
        = (0x00000fffU & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_slc_FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_23_13_itm_2) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__369__vector 
                            = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_carry_and_itm_2;
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__369__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__369__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__369__Vfuncout)))));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3 
        = (0x0000007fU & ((IData)(1U) + ((0x00000020U 
                                          & ((~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                 >> 0x0000001cU)) 
                                             << 5U)) 
                                         | (0x0000001fU 
                                            & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                               >> 0x00000017U)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_nor_itm_2));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__input_0 
        = (((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_31) 
            << 0x0000001fU) | (((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23) 
                                << 0x00000017U) | vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__sel)
            ? __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__input_1
            : __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__input_0);
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_iswt0));
    if ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])) {
        if ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_uflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_le_min;
        } else if ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_oflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_75;
        } else {
            vlSelfRef.interp_in_scale = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U] 
                                         >> 0x00000010U);
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_85;
        }
        vlSelfRef.interp_in1_pd = ((IData)((0U != (3U 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_7
                                    : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_93);
    } else if ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])) {
        if ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_uflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_77;
        } else if ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_oflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_78;
        } else {
            vlSelfRef.interp_in_scale = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U] 
                                         >> 0x00000010U);
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_85;
        }
        vlSelfRef.interp_in1_pd = ((IData)((0U != (0x0000000cU 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_7
                                    : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_93);
    } else {
        vlSelfRef.interp_in_scale = 0U;
        vlSelfRef.interp_in0_pd = 0ULL;
        vlSelfRef.interp_in1_pd = 0ULL;
    }
    VL_SHIFTL_WWI(120,120,6, __Vtemp_9, __VdfgRegularize_h6e95ff9d_0_19372, (IData)(vlSelfRef.__PVT__interp_in_shift_abs));
    VL_SHIFTR_WWI(120,120,6, __Vtemp_10, __VdfgRegularize_h6e95ff9d_0_19372, (IData)(vlSelfRef.__PVT__interp_in_shift_abs));
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[0U] 
            = __Vtemp_9[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[1U] 
            = __Vtemp_9[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[2U] 
            = __Vtemp_9[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[3U] 
            = (0x00ffffffU & __Vtemp_9[3U]);
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[0U] 
            = __Vtemp_10[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[1U] 
            = __Vtemp_10[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[2U] 
            = __Vtemp_10[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[3U] 
            = (0x00ffffffU & __Vtemp_10[3U]);
    }
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__403__arg2 
        = (0x0000001fU & ((IData)(0x1fU) + (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__404__arg2 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__403__arg2;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = (1U | (0x00fffffcU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__404__arg2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__404__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__403__Vfuncout 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__404__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_sva 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__403__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__405__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__406__arg2 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__405__arg2;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = (1U | (0x00fffffcU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__406__arg2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__406__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__405__Vfuncout 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__406__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_sva 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__405__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2 
        = (((~ (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva) 
                 >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4))) 
            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_9_0_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_mux_1_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3) 
                 >> 5U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__input_0 
        = (1U & (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                    >> 0x1cU)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_else_mux_2_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp 
        = (1U & (~ ((0x3fU == (0x0000003fU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3))) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2) 
                       & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1) 
                     & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11))) 
                 | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__input_1 
        = (1U & (~ ((~ ((~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3)) 
                            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3))) 
                        | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)) 
                           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_st_2)))) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                       | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_4_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_mx0w0 
        = ((vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
            >> 0x0000000cU) & (0U != (0x00002fffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9 
        = (IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x007fffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__364__vector 
        = (0x000001ffU & ((IData)(0x0061U) + (0x00000100U 
                                              | (0x000000ffU 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                     >> 0x00000017U))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__364__vector), 8U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__364__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__364__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_nl 
        = (0x000001ffU & ((IData)(0x00d5U) + VL_EXTEND_II(9,8, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__365__vector 
                            = (0x0000007fU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x18U));
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__365__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__365__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__365__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_nl 
        = (0x000003ffU & ((IData)(0x0161U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__367__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__367__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__367__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__367__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    __VdfgRegularize_h6e95ff9d_0_19375 = (((QData)((IData)(
                                                           (1U 
                                                            & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[2U] 
                                                               >> 0x00000018U)))) 
                                           << 0x00000039U) 
                                          | (0x01ffffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[2U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[1U])))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__383__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__383__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_mux1h_itm_1_4_0_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__383__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__383__input_1)
            : 0U);
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__383__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_and_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__383__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__385__sel 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_inf_lpi_1_dfm_5;
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__385__input_0 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_mux_1_nl;
                    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__385__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__385__input_0));
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__385__Vfuncout 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__385__Vfuncout))));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3) 
                       & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3)) 
                          & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_mx0w0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_mx0w0) 
           & (0x007fe000U == (0x007fe000U & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__366__vector 
        = (0x000000ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_nl));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__366__vector), 7U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__366__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__366__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__368__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_nl));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__368__vector), 8U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__368__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__368__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__int_mul_for_Rshift = (0x03ffffffffffffffULL 
                                           & ((0x01000000U 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[2U])
                                               ? ((
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[0U] 
                                                   >> 0x0000001fU)
                                                   ? 
                                                  ((0U 
                                                    != 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[0U]))
                                                    ? 
                                                   (1ULL 
                                                    + 
                                                    VL_EXTENDS_QQ(58,57, 
                                                                  (0x01ffffffffffffffULL 
                                                                   & (((QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[2U])) 
                                                                       << 0x00000020U) 
                                                                      | (QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[1U]))))))
                                                    : __VdfgRegularize_h6e95ff9d_0_19375)
                                                   : __VdfgRegularize_h6e95ff9d_0_19375)
                                               : (VL_EXTENDS_QQ(58,57, 
                                                                (0x01ffffffffffffffULL 
                                                                 & (((QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[2U])) 
                                                                     << 0x00000020U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[1U]))))) 
                                                  + 
                                                  VL_EXTENDS_QQ(58,57, (QData)((IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[0U] 
                                                                                >> 0x0000001fU)))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_1_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__386__sel 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2;
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__386__input_0 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_nl;
                    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__386__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__386__input_0));
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__386__Vfuncout 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__386__Vfuncout))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_nor_ssc 
        = (1U & (~ ((~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1)));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1)));
    vlSelfRef.__PVT__fp_interp_vld_d0 = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_dcpl_11 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__1(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14;
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14 = 0;
    CData/*0:0*/ u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15;
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__357__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__357__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__357__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__357__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__357__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__357__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__358__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__358__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__358__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__358__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__362__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__362__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__362__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__362__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__363__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__363__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__363__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__363__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__sel = 0;
    // Body
    vlSelfRef.interp_out_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                                 ? ((IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                    & (IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt))
                                 : (IData)(vlSelfRef.__PVT__int_vld_d2));
    vlSelfRef.__PVT__fp_interp_rdy_d1 = ((IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                         & (IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
              & (IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)));
    vlSelfRef.__PVT__fp_interp_vld_d1 = ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid));
    vlSelfRef.__VdfgRegularize_h098ddedf_0_4 = ((IData)(vlSelfRef.__PVT__fp_interp_vld_d0) 
                                                & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid)) 
                                               | ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d1) 
                                                  & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__fp_mul_sync_in_vld = ((IData)(vlSelfRef.__VdfgRegularize_h098ddedf_0_4) 
                                           & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy_d2)));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy_d1)));
    vlSelfRef.__PVT__fp_interp_rdy_d0 = ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                         & ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                                            & (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d0) 
              & (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid)));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d6 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid)) 
                                               | ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d0) 
                                                  & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d5 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d6)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d4 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d5)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_17 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_4_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_nor_ssc) 
           & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_5_rgt 
        = (1U & ((~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))));
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9)) 
           & ((IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_48_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_50_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_53_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_dcpl_11) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1) 
           & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_15 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
              & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__not_tmp_20 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__input_1 
        = ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9) 
               & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs) 
                  & (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10)))) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_5_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__sel 
        = (((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse) 
                | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4)) 
                   | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_inf_lpi_1_dfm_5)))) 
            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_19_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                       | ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1) 
                              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__input_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
              & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1) 
                 & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                       & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_20_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                       | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4)) 
                       | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_4) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_11_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d4)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_2_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2)) 
           & (IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_3_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2) 
           & (IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_15));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__362__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__362__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__362__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__input_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__362__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__363__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__363__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__363__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__input_0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__363__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_nvdla_float_h_ln670_assert_iExpoWidth_ge_oExpoWidth_sig_mx0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__357__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
              & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__358__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | ((0x0000000eU 
                                             & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2)) 
                                                << 1U)) 
                                            | (1U & 
                                               (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                >> 0x17U))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__358__vector), 4U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__358__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__357__input_0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__358__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__357__input_0) 
           & (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__357__sel));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__357__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__shift_0_prb 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__357__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_16_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_12_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__Vfuncout;
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen));
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_12_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__input_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_13 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_10_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_8_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_2_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_6_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__Vfuncout;
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d2)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_and_cse 
        = ((IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_and_cse 
        = ((IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_11_nl));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__Fp32ToFp17_and_1_cse 
        = ((IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_16_nl));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__input_1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_13;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_14_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__sel 
        = (1U & (~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_8_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_9_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                    | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_2_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_3_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)) 
                    | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_6_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_7_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__Vfuncout;
    vlSelfRef.__PVT__fp_sub_sync_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d1)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4)) 
                       | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_15_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__Vfuncout;
    vlSelfRef.__VdfgRegularize_h098ddedf_0_3 = ((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                                                & (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_INTP_unit___ctor_var_reset(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->nvdla_op_gated_clk_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8678371800785696597ull);
    vlSelf->nvdla_core_rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15781730201853965120ull);
    vlSelf->fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1520350420547626687ull);
    vlSelf->interp_in0_pd = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 8124915037163009350ull);
    vlSelf->interp_in1_pd = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 9293356909728888962ull);
    vlSelf->interp_in_pd = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 14269848144785245221ull);
    vlSelf->interp_in_scale = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6437606013485728637ull);
    vlSelf->interp_in_shift = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7231218552652448369ull);
    vlSelf->interp_in_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17502413313133456847ull);
    vlSelf->interp_out_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 523810515665236993ull);
    vlSelf->nvdla_op_gated_clk_fp16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11945653109852095966ull);
    vlSelf->interp_in_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18030009591942710404ull);
    vlSelf->interp_out_pd = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 9004217779332590612ull);
    vlSelf->interp_out_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8241154020655623420ull);
    VL_SCOPED_RAND_RESET_W(89, vlSelf->__PVT__int_add, __VscopeHash, 13959228129637726143ull);
    vlSelf->__PVT__int_mul = VL_SCOPED_RAND_RESET_Q(57, __VscopeHash, 2677131525530610765ull);
    vlSelf->__PVT__int_mul_for_Rshift = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 8419197733327698701ull);
    vlSelf->__PVT__int_sub = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 18131558663502375385ull);
    vlSelf->__PVT__int_vld_d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8739797700605128452ull);
    vlSelf->__PVT__int_vld_d1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14047771573618710133ull);
    vlSelf->__PVT__int_vld_d2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12632186464782814076ull);
    vlSelf->__PVT__interp_in0_pd_d0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10901979051277278721ull);
    vlSelf->__PVT__interp_in0_pd_d1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6287946571472186281ull);
    vlSelf->__PVT__interp_in_offset_d0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 4731493291051967286ull);
    vlSelf->__PVT__interp_in_shift_d0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9756344363524809281ull);
    vlSelf->__PVT__interp_in_shift_d1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11704496337193344859ull);
    vlSelf->__PVT__fp_in_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12302789360169869441ull);
    vlSelf->__PVT__fp_interp_rdy_d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9194369420455091627ull);
    vlSelf->__PVT__fp_interp_rdy_d1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18182631937784911457ull);
    vlSelf->__PVT__fp_interp_vld_d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1832325017331240548ull);
    vlSelf->__PVT__fp_interp_vld_d1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4154294714633498992ull);
    vlSelf->__PVT__fp_mul_sync_in_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1029557450888702680ull);
    vlSelf->__PVT__fp_mul_sync_in_rdy_d1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6061275997730748752ull);
    vlSelf->__PVT__fp_mul_sync_in_rdy_d2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18094491334241113806ull);
    vlSelf->__PVT__fp_mul_sync_in_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6082761611029826988ull);
    vlSelf->__PVT__fp_sub_sync_in_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16724159928943349261ull);
    vlSelf->__PVT__fp_sub_sync_in_rdy_d1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 446488488067332539ull);
    vlSelf->__PVT__fp_sub_sync_in_rdy_d2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5304794628445802567ull);
    vlSelf->__PVT__fp_sub_sync_in_rdy_d3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8015375829502767679ull);
    vlSelf->__PVT__fp_sub_sync_in_rdy_d4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10189008073278399278ull);
    vlSelf->__PVT__fp_sub_sync_in_rdy_d5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3905075943823758375ull);
    vlSelf->__PVT__fp_sub_sync_in_rdy_d6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13847610877540150473ull);
    vlSelf->__PVT__fp_sub_sync_in_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3871453545130891815ull);
    vlSelf->__PVT__int_in_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5287240369612524234ull);
    vlSelf->__PVT__int_in_load_d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11640578591068328774ull);
    vlSelf->__PVT__int_in_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2107265582549787701ull);
    vlSelf->__PVT__int_in_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10690215193047402241ull);
    vlSelf->__PVT__int_interp_out_pd = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8518637116448581716ull);
    vlSelf->__PVT__int_interp_out_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15089502738176609891ull);
    vlSelf->__PVT__int_rdy_d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14526532776086651955ull);
    vlSelf->__PVT__int_rdy_d1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2040837266802420674ull);
    vlSelf->__PVT__interp_in_shift_abs = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13184172384370663271ull);
    vlSelf->__VdfgRegularize_h098ddedf_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14984781221342513122ull);
    vlSelf->__VdfgRegularize_h098ddedf_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16011517529670986496ull);
    vlSelf->__VdfgRegularize_h098ddedf_0_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11733294504713985251ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__chn_a_rsci_unreg_inst__DOT__in_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1867465613345588450ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16226635408752305449ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8364673299584491277ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3417198242658018084ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15232787591060339313ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__core_wten = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7073015168877222975ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_iswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2396289315405158959ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12031664990168785849ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15669824084510237453ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4754451023101930417ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_14_10 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16253180011586592538ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8850241669342515644ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5914216226437479356ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6936792635792468403ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3477633728070060206ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8606985173106781325ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9419468840399702907ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9639437358261902620ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8711196489469393518ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10069484708221419786ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5170581972206858109ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__not_tmp_20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 790494839923202839ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9791261979602404878ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17931049984885882200ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16751070916593481668ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2316888539163488452ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_29 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11745943314369704651ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_dcpl_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5095055580471037353ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4150511623252397303ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 621667857182313911ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5214664580265428568ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10856922572070108838ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1710567736235683876ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6965893156866461325ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8373843805919358652ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12804719672467630674ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1432009480524805716ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 881473473624548600ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3517033935694393902ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 356555497788692924ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_inf_lpi_1_dfm_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2821435023813508348ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14533624844212426509ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_slc_FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_23_13_itm_2 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14084765133463194275ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_carry_and_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1263516826404925892ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_nor_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12905446352212252295ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nand_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12524953511756536106ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 493148718121693017ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3770067526731664198ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6352141672437515365ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14274334306422475188ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 942522755766939555ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_st_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7912374035909874526ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_31_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14880196117477943027ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 739427432107023455ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_31_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10307462309748767040ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_9_0_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14680583335551413803ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_mux1h_itm_1_5_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6991224084935569507ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_mux1h_itm_1_4_0_1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5968091645226949402ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 815771482334331465ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_mx0w0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6360328219596639382ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_nor_ssc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10364539603304309780ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18440708375089170095ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6598593467849710686ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1821811778251107039ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17883390888381164138ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15898413033574689694ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1559298932853239891ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 980249525182730588ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_48_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3478353522695188150ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_4_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13865735283650508396ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_2_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7412572927119856322ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_3_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4720643609453486114ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_5_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8908612365725650713ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_50_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10134453703101019908ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_53_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5263559123233188324ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_itm = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13472655518953529150ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_nvdla_float_h_ln670_assert_iExpoWidth_ge_oExpoWidth_sig_mx0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12252156389716322541ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2131619299673939773ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8185471534000298829ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15424521834927548969ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_mx0w0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12540844724096739316ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2526774493564782425ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4246185653572897138ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 476136212597707965ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_sva = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12771182527843810751ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_sva = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9383097067202933894ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12108862686830026512ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9940883356348404592ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__Fp32ToFp17_and_1_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3996489760653882204ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1193112779630835614ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6751224893073743748ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10054727339519078596ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17075205922445452228ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__shift_0_prb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 46299637715768256ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_and_nl = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13625033986419625058ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_1_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14227399246328356578ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9375826631741792172ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_mux_1_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15037423209921485819ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_3_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17452903797963400336ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_2_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15262535615160706934ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5933806753471610510ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_5_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12904540636903700000ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_4_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1224128227899137696ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_7_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5123351845020919566ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_6_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3633908058533858479ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16355200682117995500ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_9_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6979360972638484000ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_8_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1265958874144378803ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_10_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17686909711776820895ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_11_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8202996524053916067ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_15_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8835501839400060856ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_14_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7814772629772176998ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_16_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 584090298048076426ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantRNE_24U_11U_else_acc_nl = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 997676921663297725ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_19_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9109628891109307984ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_else_mux_2_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2378293256058889306ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_20_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4005207092458763480ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_nl = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11123402931097020496ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2900516280891211379ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_12_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4084579289378671087ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4149827110863647070ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17595274130750099723ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5717453767310770308ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5174508934688267456ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3786432962148860442ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9192336433792538708ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9435163564623343387ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16746735397678652274ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9530291253183593205ull);
    vlSelf->u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2116362226695971573ull);
    vlSelf->u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7347616071212097200ull);
    vlSelf->u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7739570158964480939ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 11991477517089793874ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 16280133203484487749ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16130149302379298856ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 5865821444172850449ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15877898412775524699ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 164585724329902984ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16162399400832969109ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 667246761162158615ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15276441157800099031ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 117415500081188470ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3465579970095969058ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15430149853114975652ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15076416521992302078ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11215734829306131756ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7027162318662001018ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11754530229528067789ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13853256015444540131ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 323594611558884602ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8975372887110364054ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7490096778774719397ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13895654957174203024ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16040726251981659040ull);
    vlSelf->__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4136928368027555491ull);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 17633712268433854607ull);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7275116386423144664ull);
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 2436424408303884369ull);
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4219242389160901449ull);
    vlSelf->__PVT__pipe_p3__DOT__p3_pipe_data = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 1719927844608622197ull);
    vlSelf->__PVT__pipe_p3__DOT__p3_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15736517410706576585ull);
    vlSelf->__PVT__pipe_p4__DOT__p4_pipe_data = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 15886778822496722761ull);
    vlSelf->__PVT__pipe_p4__DOT__p4_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13374981015437249148ull);
    vlSelf->__PVT__pipe_p5__DOT__p5_pipe_data = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 16202532659588738797ull);
    vlSelf->__PVT__pipe_p5__DOT__p5_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5434505801443907223ull);
    vlSelf->__PVT__pipe_p6__DOT__p6_pipe_data = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 3020811739688175252ull);
    vlSelf->__PVT__pipe_p6__DOT__p6_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11789893149725943249ull);
    vlSelf->__PVT__pipe_p7__DOT__p7_pipe_data = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 16313206014477080733ull);
    vlSelf->__PVT__pipe_p7__DOT__p7_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8776524838196860691ull);
    vlSelf->__PVT__pipe_p8__DOT__p8_pipe_data = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8612616540718457029ull);
    vlSelf->__PVT__pipe_p8__DOT__p8_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13397125401666859888ull);
    vlSelf->__PVT__pipe_p9__DOT__p9_pipe_data = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 9437216765233847660ull);
    vlSelf->__PVT__pipe_p9__DOT__p9_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10452032817900268538ull);
    vlSelf->__PVT__pipe_p10__DOT__p10_pipe_data = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 1935457215368947954ull);
    vlSelf->__PVT__pipe_p10__DOT__p10_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17740447498186841233ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__8__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5571088514927243396ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__8__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2387355430725921834ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__10__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7990784005161187436ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__10__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1623800604813586074ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__12__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6025184070622374261ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__12__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8232130127079067062ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__13__Vfuncout = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12895724996311874969ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__13__vector = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4263993272307232582ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__28__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16031194098548283671ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__28__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14259301039926165386ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__28__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13177053483248058400ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__29__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10327793059300620460ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__29__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5278197952427108777ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__29__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13841629531879817400ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__42__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13288545545948439428ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__42__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6149355931901924417ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__59__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3653101717657141153ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__59__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10404447146732460437ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__61__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13604066845158697321ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__61__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12824627195378099409ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__63__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8549569201370363180ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__63__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13893254651166579243ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__64__Vfuncout = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6871403617388325485ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__64__vector = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1146851328789254074ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__79__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 41887163380110208ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__79__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10066827628700297842ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__79__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11553021821824124453ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__80__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3070685050250791091ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__80__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12577276696336941055ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__80__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5214262972519927527ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__93__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17651788172115825936ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__93__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16806496569915213505ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__110__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16909392012150222934ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__110__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6414301144645708395ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__112__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10650124908094003106ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__112__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9598972819710455867ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__114__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10349085108616349680ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__114__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9109526463875277147ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__115__Vfuncout = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5286846848079880501ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__115__vector = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15689823142692758384ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__130__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4183169465699173635ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__130__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7005748660718262382ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__130__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8466049893326570117ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__131__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14873106277406143361ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__131__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11999097539013829003ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__131__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13939924198266744304ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__144__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 752439024755928855ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__144__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 278625997794607947ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__161__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 761540756247861185ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__161__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14477594113723762278ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__163__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16095162404145002199ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__163__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2030998190196852207ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__165__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3302269826849481713ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__165__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5972024501912811879ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__166__Vfuncout = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15369887747999028844ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__166__vector = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13116547458018139366ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__181__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8792351462807025741ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__181__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14739110509219143069ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__181__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11565421778779987971ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__182__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13896448269000690689ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__182__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12295043108616838104ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__182__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17618956184941279562ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__195__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10022105978316994103ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__195__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8001426082406780616ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__212__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6988081105204428969ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__212__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2147291531516797251ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__214__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2581115421465462702ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__214__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1120523168189926138ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__216__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 320728282626117696ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__216__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2704746603938161394ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__217__Vfuncout = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12302834720780761543ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__217__vector = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9322135085601407887ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__232__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6484345597628588401ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__232__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8790523706373029425ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__232__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4350795316416644544ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__233__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9669336665355368919ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__233__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7458927373977761575ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__233__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7582121545561952753ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__246__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16647654044453572581ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__246__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2361524287038460550ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__263__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9118561897917159537ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__263__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7938143130778815688ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__265__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1730825474892784812ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__265__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16720050282230558729ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__267__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6355586275994690784ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__267__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17817877980068151352ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__268__Vfuncout = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16505653271448089110ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__268__vector = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9091484178180716231ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__283__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12726486606934831414ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__283__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18285729281336114830ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__283__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4979533047439761821ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__284__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15170992054557287135ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__284__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6546160509372053307ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__284__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12292271344705391316ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__297__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2680271199365209243ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__297__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17564136880153784715ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__314__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17215281198646415042ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__314__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8878586371840108236ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__316__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17091189191129302516ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__316__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7518670101395007285ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__318__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14743730421965741527ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__318__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6585821659635484329ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__319__Vfuncout = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5635691017163974130ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__319__vector = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 263571549790891603ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__334__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13699054609239118016ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__334__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18140219815892465758ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__334__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4532709504529708982ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__335__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7512468082884211163ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__335__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2623339757335220679ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__335__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7358399841453630930ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__348__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15325500330005762105ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__348__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13856385745674970862ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__365__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13567409381049387278ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__365__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12188040105825124166ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__367__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12818703077601166649ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__367__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13978330429652569510ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__369__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6409005293863425704ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__369__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3549276383598587510ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__370__Vfuncout = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11837129209599432480ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__370__vector = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16180802098770231596ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__385__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9320806574538555358ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__385__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3523030224858524821ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__385__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10829677361348195921ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__386__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13695365628022458286ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__386__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3097966725840669168ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__386__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14429744701221109736ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__399__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9494323827703490394ull);
    vlSelf->__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__399__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10723903001558962567ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->__VdfgRegularize_h6e95ff9d_0_19338, __VscopeHash, 4921923073127417213ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->__VdfgRegularize_h6e95ff9d_0_19343, __VscopeHash, 16907095026434979675ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->__VdfgRegularize_h6e95ff9d_0_19348, __VscopeHash, 18374870227597099754ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->__VdfgRegularize_h6e95ff9d_0_19353, __VscopeHash, 3551397983117747727ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->__VdfgRegularize_h6e95ff9d_0_19358, __VscopeHash, 822638252853477977ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->__VdfgRegularize_h6e95ff9d_0_19363, __VscopeHash, 18049299804500905267ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->__VdfgRegularize_h6e95ff9d_0_19368, __VscopeHash, 7258849296272779385ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->__VdfgRegularize_h6e95ff9d_0_19373, __VscopeHash, 3563797580878062506ull);
}

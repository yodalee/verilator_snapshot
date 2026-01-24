// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_HLS_cdp_ocvt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_3__0(Vsim_HLS_cdp_ocvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_ocvt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__463__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__463__Vfuncout = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__463__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__463__vector = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__476__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__476__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__476__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__476__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__476__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__476__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__492__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__492__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__492__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__492__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__494__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__494__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__494__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__494__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__496__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__496__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__496__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__496__vector = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__538__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__538__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__538__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__538__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__538__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__538__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__539__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__539__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__539__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__539__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__539__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__539__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__sel = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__598__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__598__Vfuncout = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__598__arg1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__598__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__598__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__598__arg2 = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__599__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__599__Vfuncout = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__599__arg1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__599__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__599__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__599__arg2 = 0;
    SData/*10:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__600__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__600__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__600__arg1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__600__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__600__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__600__arg2 = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__601__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__601__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__601__arg1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__601__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__601__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__601__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__arg1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__sbit;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__sbit = 0;
    VlWide<4>/*112:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__Vfuncout;
    VL_ZERO_W(113, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__Vfuncout);
    VlWide<4>/*112:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg1;
    VL_ZERO_W(113, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg1);
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg2 = 0;
    VlWide<4>/*104:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__Vfuncout;
    VL_ZERO_W(105, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__Vfuncout);
    VlWide<4>/*104:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg1;
    VL_ZERO_W(105, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg1);
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg2 = 0;
    VlWide<4>/*104:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__Vfuncout;
    VL_ZERO_W(105, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__Vfuncout);
    VlWide<4>/*104:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg1;
    VL_ZERO_W(105, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg1);
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg2 = 0;
    SData/*10:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__609__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__609__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__609__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__609__arg2 = 0;
    SData/*10:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__610__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__610__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__610__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__610__arg2 = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__sel = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__598__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__598__arg1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__598__arg1;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x000003ffffffffffULL & VL_SHIFTRS_QQI(42,42,6, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__598__arg2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__598__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__598__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__599__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__599__arg1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__599__arg1;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x000003ffffffffffULL & VL_SHIFTRS_QQI(42,42,6, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__599__arg2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__599__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__599__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__463__vector 
        = (0x000003ffffffffffULL & VL_MULS_QQQ(42, 
                                               (0x000003ffffffffffULL 
                                                & VL_EXTENDS_QI(42,26, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_acc_itm_2)), 
                                               (0x000003ffffffffffULL 
                                                & VL_EXTENDS_QI(42,16, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_mul_in_1_sva_3)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__463__Vfuncout 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__463__vector;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_1_o_mul_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__463__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_50U_6U_16U_oif_1_acc_nl 
        = (0x0003ffffU & ((IData)(0x0001ffffU) + VL_EXTEND_II(18,17, 
                                                              ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__564__vector 
                            = ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_3) 
                                 << 0x0000000fU) | 
                                ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_itm) 
                                 << 0x0000000cU)) | 
                               (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm) 
                                 << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_3)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__564__Vfuncout 
                            = ((0x00010000U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__564__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__564__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__564__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_50U_6U_16U_oif_acc_nl 
        = (0x0003ffffU & ((IData)(1U) + VL_EXTEND_II(18,17, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__565__vector 
                            = ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_3) 
                                 << 0x0000000fU) | 
                                ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_itm) 
                                 << 0x0000000cU)) | 
                               (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm) 
                                 << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_3)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__565__Vfuncout 
                            = ((0x00010000U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__565__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__565__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__565__Vfuncout))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__538__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_6;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__538__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_1_itm;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__538__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__538__input_1)
            : 0x0eU);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__538__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_mux_6_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__538__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s 
        = ((0x0000003eU & (((IData)(9U) + (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                              >> 0x0000000bU))) 
                           << 1U)) | (1U & (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                               >> 0x0000000aU))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg_s 
        = (0x000000ffU & ((IData)(0x7fU) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__459__vector 
                            = ((0x0000003eU & (((IData)(9U) 
                                                + (~ 
                                                   (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                                    >> 0x0000000bU))) 
                                               << 1U)) 
                               | (1U & (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                           >> 0x0aU))));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__459__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__459__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__459__Vfuncout)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3273 = (
                                                   (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_9) 
                                                     << 9U) 
                                                    | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_8) 
                                                        << 8U) 
                                                       | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_7) 
                                                          << 7U))) 
                                                   | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_6_1) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_0)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_39 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_IsNaN_6U_10U_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_nor_itm_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva 
        = (0x00000fffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm_2) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__511__vector 
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
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__511__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__511__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__511__Vfuncout)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__601__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_3;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__601__arg1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__601__arg1;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x0003ffffffffffffULL & VL_SHIFTRS_QQI(50,50,6, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__601__arg2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__601__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_sva_mx0w0 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__601__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__input_0 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
            >> 1U) & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4) 
                      & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_4)) 
                         & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__input_0 
        = (1U & (~ ((2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_40_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__Vfuncout;
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_112_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)) 
                 | (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4))));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_14 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_5)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_5 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                 | (2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg1[0U] = 0U;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg1[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg1[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg1[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg1[3U];
    VL_SHIFTRS_WWI(105,105,6, __Vtemp_2, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x000001ffU & __Vtemp_2[3U]);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__Vfuncout[0U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__Vfuncout[1U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__Vfuncout[2U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__Vfuncout[3U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__Vfuncout[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__Vfuncout[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__Vfuncout[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__Vfuncout[3U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_29 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_2 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)) 
                 | (2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_146_nl 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4) 
            >> 1U) & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_209_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42) 
           | (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_11 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_57 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                    & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_7_cse 
        = (1U & ((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_137_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_42_1) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nand_itm_2));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__input_0 
        = (0x0003ffffffffffffULL & (((QData)((IData)(
                                                     vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_data[6U])) 
                                     << 0x0000002aU) 
                                    | (((QData)((IData)(
                                                        vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_data[5U])) 
                                        << 0x0000000aU) 
                                       | ((QData)((IData)(
                                                          vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_data[4U])) 
                                          >> 0x00000016U))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__sel)
            ? __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__input_1
            : __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__input_0);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg1[0U] = 0U;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg1[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg1[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg1[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg1[3U];
    VL_SHIFTRS_WWI(105,105,6, __Vtemp_4, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_4[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x000001ffU & __Vtemp_4[3U]);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__Vfuncout[0U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__Vfuncout[1U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__Vfuncout[2U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__Vfuncout[3U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__Vfuncout[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__Vfuncout[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__Vfuncout[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__Vfuncout[3U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_135_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_42_1) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nand_itm_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_69_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3)) 
                 | (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_3;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg1[0U] = 0U;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg1[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg1[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg1[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg1[3U];
    VL_SHIFTRS_WWI(113,113,6, __Vtemp_6, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_6[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x0001ffffU & __Vtemp_6[3U]);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__Vfuncout[0U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__Vfuncout[1U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__Vfuncout[2U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__Vfuncout[3U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__Vfuncout[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__Vfuncout[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__Vfuncout[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__Vfuncout[3U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_iswt0));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_iswt0));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_if_IntShiftRightSat_50U_6U_16U_if_or_1_nl 
        = (1U & (((((QData)((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_itm)) 
                    << 0x0000002aU) | vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm) 
                  == ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__566__vector 
                            = (0x0001ffffU & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_50U_6U_16U_oif_1_acc_nl);
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__566__Vfuncout 
                            = ((0x0003fffffffe0000ULL 
                                & ((- (QData)((IData)(
                                                      (1U 
                                                       & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__566__vector 
                                                          >> 0x10U))))) 
                                   << 0x00000011U)) 
                               | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__566__vector)));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__566__Vfuncout)) 
                 | (~ (((((QData)((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_itm)) 
                          << 0x0000002aU) | vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm) 
                        != ([&]() {
                                vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__567__vector 
                                    = (0x0001ffffU 
                                       & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_50U_6U_16U_oif_acc_nl);
                                vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__567__Vfuncout 
                                    = ((0x0003fffffffe0000ULL 
                                        & ((- (QData)((IData)(
                                                              (1U 
                                                               & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__567__vector 
                                                                  >> 0x10U))))) 
                                           << 0x00000011U)) 
                                       | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__567__vector)));
                            }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__567__Vfuncout)) 
                       & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_4)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__539__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_5;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__539__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_mux_6_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__539__sel)
            ? 0x0fU : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__539__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__539__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_or_3_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__539__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__600__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__600__arg1 
        = (0x00000400U | (0x000003ffU & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = ((0x0800U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t)) 
           | (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__600__arg1));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x00000fffU & VL_SHIFTRS_III(12,12,6, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t), (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__600__arg2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__600__Vfuncout 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__600__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__609__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__610__arg2 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__609__arg2;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = (1U | (0x07fcU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000007ffU & VL_SHIFTL_III(11,11,6, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t), (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__610__arg2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__610__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__609__Vfuncout 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__610__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__609__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__sbit = 0U;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__arg2 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg_s));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__arg1 = 1U;
    if ((0x00000040U & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__arg2))) {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__sbit) 
                << 1U) | (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__arg1));
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__603__sbit 
            = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__sbit;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__603__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__arg2)));
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__603__arg1 
            = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                     >> 1U));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x000007ffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__603__sbit))));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x07feU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t)) 
               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__603__arg1));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x000007ffU & VL_SHIFTRS_III(11,11,7, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__603__arg2)));
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__603__Vfuncout 
            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__603__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__604__sbit 
            = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__sbit;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__604__arg2 
            = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__arg2;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__604__arg1 
            = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__arg1;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__605__sbit 
            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__604__sbit;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__605__arg2 
            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__604__arg2;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__605__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__604__sbit) 
                << 1U) | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__604__arg1));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x000007ffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__605__sbit))));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x07fcU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t)) 
               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__605__arg1));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x000007ffU & VL_SHIFTL_III(11,11,7, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__605__arg2)));
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__605__Vfuncout 
            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__604__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__605__Vfuncout;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__604__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva_mx0w0 
        = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__Vfuncout;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3274 = (
                                                   ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_14) 
                                                    << 0x0000000eU) 
                                                   | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_13_10) 
                                                       << 0x0000000aU) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3273)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__input_1 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1) 
                          >> 0x0aU));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva) 
                 >> 0x0000000aU));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_6_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_91_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3)) 
                 | (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[3U] 
                                           >> 8U)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_8_nl 
        = (1U & ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_2) 
                 | ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_146_nl) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_26 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_209_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_94 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_57) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_7_sva 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_7_1) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_137_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_2))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_0_sva 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_0_1) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_2))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_137_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__504__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_137_cse;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__504__input_0 
                        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_itm) 
                            << 4U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_1_itm));
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__504__sel)
                            ? 0x3fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__504__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__504__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__504__Vfuncout))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__492__vector 
        = (0x0000007fU & ((IData)(0x11U) + (0x00000040U 
                                            | (0x0000003fU 
                                               & (~ (IData)(
                                                            (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
                                                             >> 0x0000000aU)))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__492__vector), 6U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__492__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__492__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_33U_32U_34U_o_acc_nl 
        = (0x00000007ffffffffULL & (VL_EXTEND_QQ(35,34, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__589__vector 
                            = (0x00000001ffffffffULL 
                               & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt);
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__589__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__589__vector 
                                                            >> 0x20U))))) 
                                << 0x00000021U) | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__589__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__589__Vfuncout)) 
                                    - VL_EXTEND_QQ(35,34, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__590__vector 
                            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_offset_use;
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__590__Vfuncout 
                            = (((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__590__vector 
                                                               >> 0x1fU)))))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__590__vector)));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__590__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_25U_25U_26U_1_o_acc_itm_2 
        = (0x07ffffffU & (VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__594__vector 
                            = (0x01ffffffU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
                                                      >> 0x19U)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__594__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__594__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__594__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__594__Vfuncout)) 
                          - VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__595__vector 
                            = (0x01ffffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_offset_use);
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__595__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__595__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__595__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__595__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_25U_25U_26U_o_acc_itm_2 
        = (0x07ffffffU & (VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__596__vector 
                            = (0x01ffffffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__596__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__596__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__596__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__596__Vfuncout)) 
                          - VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__597__vector 
                            = (0x01ffffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_offset_use);
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__597__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__597__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__597__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__597__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_nl 
        = (0x0000007fU & ((IData)(0x3dU) + VL_EXTEND_II(7,6, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__493__vector 
                            = (0x0000001fU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
                                                      >> 0x0bU)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__493__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__493__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__493__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_nl 
        = (0x000000ffU & ((IData)(0x51U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__495__vector 
                            = (0x0000003fU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
                                                      >> 0x0aU)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__495__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__495__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__495__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[3U] 
                                           >> 8U)))));
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
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__503__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_135_cse;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__503__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_2_itm_2;
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__503__sel)
                            ? 0x3fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__503__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__503__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__503__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[3U] 
                                           >> 0x00000010U)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__583__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4)));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__583__input_1 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_nl;
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__583__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__583__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__583__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__583__Vfuncout))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__476__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__476__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_6_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__476__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__476__input_1)
            : 0U);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__476__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_FpExpoWidthDec_6U_5U_10U_1U_1U_else_and_2_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__476__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
        = (0x00000fffffffffffULL & (VL_EXTEND_QQ(44,43, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__507__vector 
                            = (0x000003ffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__507__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__507__vector 
                                                            >> 0x29U))))) 
                                << 0x0000002aU) | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__507__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__507__Vfuncout)) 
                                    + VL_EXTEND_QQ(44,43, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__508__vector 
                            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__508__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__508__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__508__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_1_oif_1_acc_nl 
        = (0x000003ffU & ((IData)(0x01ffU) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__546__vector 
                            = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_7_sva) 
                                << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_0_sva)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__546__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__546__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__546__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__546__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_1_oif_acc_nl 
        = (0x000003ffU & ((IData)(1U) + VL_EXTEND_II(10,9, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__500__vector 
                            = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_7_sva) 
                                << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_0_sva)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__500__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__500__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__500__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__500__Vfuncout)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__494__vector 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__494__vector), 5U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__494__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__494__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__496__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__496__vector), 6U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__496__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__496__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
        = (0x00000fffffffffffULL & (VL_EXTEND_QQ(44,43, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__505__vector 
                            = (0x000003ffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__505__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__505__vector 
                                                            >> 0x29U))))) 
                                << 0x0000002aU) | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__505__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__505__Vfuncout)) 
                                    + VL_EXTEND_QQ(44,43, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__506__vector 
                            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__506__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__506__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__506__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_oif_1_acc_nl 
        = (0x000003ffU & ((IData)(0x01ffU) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__540__vector 
                            = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_7_sva) 
                                << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_6_1_sva) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_0_sva)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__540__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__540__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__540__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__540__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_oif_acc_nl 
        = (0x000003ffU & ((IData)(1U) + VL_EXTEND_II(10,9, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__541__vector 
                            = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_7_sva) 
                                << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_6_1_sva) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_0_sva)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__541__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__541__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__541__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__541__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
        = (0x000fffffffffffffULL & (VL_EXTEND_QQ(52,51, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__509__vector 
                            = (0x0003ffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__509__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__509__vector 
                                                            >> 0x31U))))) 
                                << 0x00000032U) | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__509__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__509__Vfuncout)) 
                                    + VL_EXTEND_QQ(52,51, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__510__vector 
                            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__510__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__510__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__510__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__584__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_5;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__584__input_1 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl;
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__584__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__584__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__584__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__584__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_mx0w0 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                             >> 0x0000002aU)) | (0ULL 
                                                 == 
                                                 (0x00000007ffffffffULL 
                                                  & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                                                     >> 7U))))));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_13 
        = (1U & (((0x00000007ffffffffULL != (0x00000007ffffffffULL 
                                             & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                                                >> 7U))) 
                  & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                             >> 0x0000002aU))) | ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                                                  | (0U 
                                                     != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm_mx1w0 
        = ((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_sva_2 
            == ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__501__vector 
                        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_1_oif_acc_nl));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__501__Vfuncout 
                        = ((0x000003fffffffe00ULL & 
                            ((- (QData)((IData)((1U 
                                                 & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__501__vector) 
                                                    >> 8U))))) 
                             << 9U)) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__501__vector)));
                }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__501__Vfuncout)) 
           | (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_sva_2 
              == ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__502__vector 
                        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_7_sva) 
                            << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_0_sva)));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__502__Vfuncout 
                        = ((0x000003ffffffff00ULL & 
                            ((- (QData)((IData)((1U 
                                                 & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__502__vector) 
                                                    >> 7U))))) 
                             << 8U)) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__502__vector)));
                }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__502__Vfuncout)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_13_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
                 | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))));
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
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_if_IntShiftRightSat_42U_6U_8U_if_or_1_nl 
        = (((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_sva_2 
             == ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__542__vector 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_oif_1_acc_nl));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__542__Vfuncout 
                            = ((0x000003fffffffe00ULL 
                                & ((- (QData)((IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__542__vector) 
                                                          >> 8U))))) 
                                   << 9U)) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__542__vector)));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__542__Vfuncout)) 
            | (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_sva_2 
               == ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__543__vector 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_oif_acc_nl));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__543__Vfuncout 
                            = ((0x000003fffffffe00ULL 
                                & ((- (QData)((IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__543__vector) 
                                                          >> 8U))))) 
                                   << 9U)) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__543__vector)));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__543__Vfuncout))) 
           | (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_sva_2 
              == ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__544__vector 
                        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_7_sva) 
                            << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_6_1_sva) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_0_sva)));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__544__Vfuncout 
                        = ((0x000003ffffffff00ULL & 
                            ((- (QData)((IData)((1U 
                                                 & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__544__vector) 
                                                    >> 7U))))) 
                             << 8U)) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__544__vector)));
                }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__544__Vfuncout)));
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
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm_mx1w0;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_oelse_mux_1_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_11_nl 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_13_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__477__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_mx0w0;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__477__input_0 
                        = (0x0000003fU & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                                  >> 1U)));
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__477__sel)
                            ? 0x3fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__477__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__477__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__477__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_164 
        = (IData)((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                    >> 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_6;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_if_IntShiftRightSat_42U_6U_8U_if_or_1_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_mx0w0 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
                                 >> 0x0000000fU)) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_unfl_sva))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_ovfl_sva))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_mx0w0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_ovfl_sva) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_unfl_sva))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_2_nl 
        = (0x00003fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__498__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__498__input_0 
                        = (0x00003fffU & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__498__sel)
                            ? 0x3fffU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__498__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__498__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__498__Vfuncout))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp)) 
                    | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                       >> 1U))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_164;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_87_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_14_1_sva_mx0w0 
        = (0x00003fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__499__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__499__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__499__sel)
                            ? 0x3fffU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__499__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__499__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__499__Vfuncout))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42) 
           | (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_14));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_164;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_87_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_88_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_IntShiftRightSat_50U_6U_16U_oelse_IntShiftRightSat_50U_6U_16U_if_unequal_tmp 
        = (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_sva_mx0w0 
           != ([&]() {
                vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__497__vector 
                    = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_mx0w0) 
                        << 0x0000000fU) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_14_1_sva_mx0w0) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_mx0w0)));
                vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__497__Vfuncout 
                    = ((0x0003ffffffff0000ULL & ((- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__497__vector) 
                                                                        >> 0x0fU))))) 
                                                 << 0x00000010U)) 
                       | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__497__vector)));
            }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__497__Vfuncout));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_IntShiftRightSat_50U_6U_16U_oelse_IntShiftRightSat_50U_6U_16U_if_unequal_tmp;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4) 
                    >> 1U)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_85_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_cdp_ocvt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_3__1(Vsim_HLS_cdp_ocvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_ocvt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16;
    HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__460__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__460__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__460__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__460__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__460__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__460__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__461__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__461__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__461__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__461__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__462__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__462__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__462__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__462__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__sel = 0;
    SData/*13:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__Vfuncout = 0;
    SData/*13:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__input_0 = 0;
    SData/*13:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__490__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__490__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__490__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__490__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__491__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__491__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__491__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__491__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cdp_cvtout_output_rdy) 
              & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT____VdfgRegularize_hcdf09104_0_4)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT____VdfgRegularize_hcdf09104_0_1) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_2.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt));
    vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_94;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_94)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_63_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_29;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_29)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_61_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_25 
        = (1U & ((2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                 | ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse) 
                        & (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_11))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_26;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_26)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_50 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_41 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__Vfuncout;
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_15 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2) 
                     & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_15 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_9 
        = ((2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_25 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_10 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_25 
        = (1U & (~ ((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                    | (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_15))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_86_tmp 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_89_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_24 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_92_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
              | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1)));
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
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__460__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_3) 
                  | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3))) 
              & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4) 
                 & ((2U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                    & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__461__vector 
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
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__461__vector), 6U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__461__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__460__input_0 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__461__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__460__input_0) 
           & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__460__sel));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__460__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__shift_0_prb 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__460__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_17_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_135_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_69_nl));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                    | (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_13))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__input_0 
        = (1U & (~ ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_13) 
                    & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_56_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__input_1 
        = (1U & (~ ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_5) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_91_nl) 
                    | (2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_42_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_29)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_61_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_62_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_40_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__input_0 
        = (((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                | ((2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6)) 
                   | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_5)))) 
            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_41_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_41 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__input_1 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_8_nl) 
               | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_3) 
                  | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_3) 
                     | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_3))))) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_39));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__input_0 
        = (1U & (~ ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_5) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4)) 
                       | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_4) 
                          | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_4) 
                             | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42) 
                                | ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_14) 
                                   | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4) 
                                      | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4))))))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_70_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__sel 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6) 
                 >> 1U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__input_1 
        = (IData)((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                    >> 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__input_0 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
            >> 1U) & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_83_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_26)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_50;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_59_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_94;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_7_cse;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_65_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_153_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__input_0 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42) 
                     & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_81_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_144_nl 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__sel 
        = (2U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                    & (~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_11)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__Vfuncout;
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
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
              & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                    | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__input_0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_7_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_11 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_16 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_15));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_tmp_6 
        = ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_9) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
            & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_35));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_FpExpoWidthDec_6U_5U_10U_1U_1U_if_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_40) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_41));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_83_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_FpExpoWidthDec_6U_5U_10U_1U_1U_else_and_2_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_mux1h_4_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_59_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_50;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_60_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_65_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_94));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_66_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_153_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_41;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_84_tmp 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_91_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_57) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_153_nl));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_63_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_64_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_144_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_80_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_144_nl) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_81_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_82_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_146_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_19_nl)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_25;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_20_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_71;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_41;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_57_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__sel 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                 >> 1U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_71;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_50_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_28;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__input_0 
        = (1U & (~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_15)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_39_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_28;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_71_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_28;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse) 
                        & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_7_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_117;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_73_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_70_cse;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_42;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_43_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_42;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_44_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_69_nl)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_45_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__462__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1) 
            & ((2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)) 
               & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_10) 
                                           & (2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__462__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__462__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__iExpoWidth_oExpoWidth_prb 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__462__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__490__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1) 
            & ((0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)) 
               & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_10) 
                                           & (0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__490__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__490__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_nvdla_int_h_ln346_assert_oWidth_ge_aWidth_p_bWidth_1_sig_mx0w1 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__490__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_17 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1)) 
                 | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_11;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_11_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_13_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__sel 
        = (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_77_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__491__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_16) 
            & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                 ? 2U : 1U) >> 1U)) | ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
                                       & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_15)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__491__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__491__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_nvdla_int_h_ln346_assert_oWidth_ge_aWidth_p_bWidth_2_sig_mx0w1 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__491__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__input_1 
        = (1U & (~ ((~ ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use) 
                        & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) 
                    & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_16;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_67_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__sel 
        = (2U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_tmp_6;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_9)) 
                    & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_68_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_80_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_sva_mx0w0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_1_o_mul_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__sel)
            ? __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__input_1
            : __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__input_0);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_mux1h_1_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_82_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva_mx0w0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_14_1_sva_mx0w0;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_mux1h_2_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_20_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_21_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_69_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_41)) 
                    | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                       >> 1U))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_50_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_51_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_112_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__input_1 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                    | (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_15))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_71_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_72_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_25;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__sel 
        = (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_117;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_73_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_66 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_28_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_22 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__sel 
        = (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_45_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_46_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__Vfuncout;
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
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_8_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_11_nl))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1) 
           & ((2U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_11_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1) 
           & ((2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_112_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1)) 
                    | (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_77_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_78_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_68_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_tmp_6;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_69_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_51_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_52_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_23_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_25;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_66;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_17;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_75_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_66;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_17;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_76_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_22;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_70_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_44_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_46_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_47_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_173_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_39_nl));
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
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_and_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_78_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_and_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_52_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_and_cse 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_76_nl)) 
           & (IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_22;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_32_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_43_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_47_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_48_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_and_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_33_nl));
}

VL_ATTR_COLD void Vsim_HLS_cdp_ocvt___ctor_var_reset(Vsim_HLS_cdp_ocvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_ocvt___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->nvdla_core_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13795098205236914507ull);
    vlSelf->nvdla_core_rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15781730201853965120ull);
    vlSelf->chn_data_in_rsc_z = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 3778744464747032861ull);
    vlSelf->chn_data_in_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6411156219638407287ull);
    vlSelf->chn_data_in_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12610757762809989475ull);
    vlSelf->cfg_alu_in_rsc_z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3201858243794996197ull);
    vlSelf->cfg_mul_in_rsc_z = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7222867562811567290ull);
    vlSelf->cfg_truncate_rsc_z = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7587395491218575582ull);
    vlSelf->cfg_precision_rsc_z = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1006618378060035410ull);
    vlSelf->chn_data_out_rsc_z = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 2105024845041982187ull);
    vlSelf->chn_data_out_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8836941278150431517ull);
    vlSelf->chn_data_out_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9527688675389731580ull);
    vlSelf->__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17467643274957857714ull);
    vlSelf->__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8550095718453778785ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_iswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7375913589458370497ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7301640568869526ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 11888572399150459934ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__core_wten = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3452525326521068982ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_iswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17472018981542298507ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5937552464174997388ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2258957204764328646ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4728085661042302483ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12914104167535498540ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_13_10 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4131170449990822635ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2903688909789217861ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12334839411801536870ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14478982272472068873ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_6_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18007396640839077468ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10019643618082218106ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_IntShiftRightSat_50U_6U_16U_oelse_IntShiftRightSat_50U_6U_16U_if_unequal_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6995910800944918692ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp = VL_SCOPED_RAND_RESET_Q(44, __VscopeHash, 4446849833774775271ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp = VL_SCOPED_RAND_RESET_Q(44, __VscopeHash, 3727623058592695513ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5934942030498267719ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7348506204752767191ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17769687279407723049ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9904732156418272430ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3853257983669857816ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1495463590473123465ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_28 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 668795317068250233ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7609046332572754298ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17759995047448860062ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_39 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9018305246130726967ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13440075650558120323ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_42 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1483142386958283391ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_41 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6669635961067423801ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_71 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1396861419938315282ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_26 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15072230278191752490ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_50 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3207175059703338624ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_29 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15086218772746948366ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_57 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4742697716843469140ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_94 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11657209454581244301ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__and_tmp_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1719550418409786794ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_117 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18414946578491270905ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_66 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17190789101678583888ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2094516393569399749ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1988095207285253799ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17330377471414042413ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_35 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3628989079318021715ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_40 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3233422327697617947ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_41 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3102358561668735301ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11812579334056427288ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16254604271770004402ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2878526791732670579ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14123113832587283335ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18323828422887004219ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6010858780346310196ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14393018018651209902ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15789795072822411179ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13801667343956240971ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 463629044046247653ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9546053929311004857ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3862012457140339005ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3408050501495238354ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 960437090049674965ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1762305893634637031ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_mul_in_1_sva_3 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7213289984256144256ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_3 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16143526450273106662ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7506861776882301056ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 285054657511242272ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12105650965580669518ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3125907382504301849ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 104554229220458504ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8168879994232128795ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3644970285070000573ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10489768475301193280ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_bits_9_0_sva_2 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2339823285770112491ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2 = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 7517963830264208704ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17925626350658349297ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_sva_2 = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 10824941280066678106ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4512072611654545446ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_sva_2 = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 6788311391014417363ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 15419055754532399932ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm_2 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4886601592176556874ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_or_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14149907385033026536ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_bits_slc_FpMantDecShiftRight_10U_6U_10U_least_mask_10_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7034712391002681919ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_nor_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2144902339412850015ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_IsNaN_6U_10U_nand_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15212990502337341313ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_o_acc_itm_2 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 1616100152521575384ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_25U_25U_26U_o_acc_itm_2 = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 5945096846148263664ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nand_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14571763790977719240ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_2_itm_2 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6861270534892470929ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_acc_itm_2 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 11431050564967047898ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_25U_25U_26U_1_o_acc_itm_2 = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 5934047938050184791ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nand_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9384379337880360118ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_or_2_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9670455236228312464ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10247188277915328610ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4673978034920753111ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1041681358881199089ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11866196313619968518ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4740479142911352101ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11386939507582049818ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2557518809708660968ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5071823433858154582ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 5714599488918006697ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_16_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13850781634232214151ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17593745342462171991ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_42_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2408926311509180697ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_7_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15428685486025264481ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9570022783093094730ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_42_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1383459057436635958ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_7_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3237807837562747994ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11843848171591862356ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5523752045376881454ull);
    VL_SCOPED_RAND_RESET_W(113, vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva, __VscopeHash, 10929204712176552027ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 7748940018160182886ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_7_sva = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13252064336362796417ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_7_sva = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14025334834036979856ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8960957371990823740ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_0_sva = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8899848484865743606ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_6_1_sva = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16054022921949743329ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_0_sva = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18374580167234311984ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14598147409430915091ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13315949605911770205ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__and_137_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4759756614408140335ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__and_135_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6296702806031629421ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__or_112_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15064651499575442550ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__and_70_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6447444472424726918ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__or_7_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11771337568952497921ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_52 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13286090953661754942ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9968172722031882480ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_164 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9981987453155941855ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__and_89_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1709004986219966072ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__and_92_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6424615284705911531ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_mux1h_1_itm = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 10851530239014521125ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_itm = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11880285075011077541ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 4135711780866603954ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_mux1h_2_itm = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 12435971557292638234ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_itm = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11866841014935317898ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12880660063746494304ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_itm = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 9606562545285612209ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_itm = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 13579318052005038498ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_mux1h_4_itm = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2220388338597271061ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_itm = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14894905586821117342ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_1_itm = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7717433717390586044ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1713982258788807354ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12049752100745334331ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_75_itm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11590730755316942497ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct_mx0c0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8757268597482541754ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_nvdla_int_h_ln346_assert_oWidth_ge_aWidth_p_bWidth_1_sig_mx0w1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1835610742885408300ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_nvdla_int_h_ln346_assert_oWidth_ge_aWidth_p_bWidth_2_sig_mx0w1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14412849442254816461ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9265123435260808652ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 171337966980963482ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_sva_mx0w0 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 9878491485967886724ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_mx0w0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11631558098090675028ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_14_1_sva_mx0w0 = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 9797193909557115281ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_mx0w0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5372029501114778676ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3887839856564516174ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm_mx1w0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5376852164615016739ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_mx0w0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10577947731482569864ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_mx0w0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9749383219172176208ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva_mx0w0 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5973334060920360054ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_unfl_sva = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7490157812079350632ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_ovfl_sva = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7310056095436130398ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 250017324742592713ull);
    VL_SCOPED_RAND_RESET_W(105, vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva, __VscopeHash, 8826512257061340929ull);
    VL_SCOPED_RAND_RESET_W(105, vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva, __VscopeHash, 18203272365391522835ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4481214492052503603ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_84_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16367102528122167629ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__and_86_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 916965558879810141ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__and_187_ssc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13760634512105717857ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_3_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3563603400381890220ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14270879988965930574ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_or_1_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1803206535064375716ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7401521899784891266ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3972705933436253466ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__and_183_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15721599700288090425ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_FpExpoWidthDec_6U_5U_10U_1U_1U_if_or_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16881614086738022594ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_and_3_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4389002952239573664ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__and_173_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15433259635460633582ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17295886261435942438ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_and_1_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4876836541277157572ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15263941878350833307ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15019188370964306942ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__or_209_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9295444356876991230ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16971674771121664971ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7994886564512749059ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10210238083273089424ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__shift_0_prb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6574298585797614442ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__iExpoWidth_oExpoWidth_prb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10110392365290524653ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_or_3_nl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5043967189551352426ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_mux_6_nl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8396986621782934705ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3303912046187043382ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_if_IntShiftRightSat_42U_6U_8U_if_or_1_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14334108062040674036ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_oif_1_acc_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16151625708577474290ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_oif_acc_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5515729612194049529ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_1_oif_1_acc_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16200474405615944968ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_oelse_mux_1_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7666140293189467660ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_8_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15893757594211280283ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_10_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5973053008989427970ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_9_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2841222437673724073ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__or_11_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16307673295524350760ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__or_8_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1564733229723494024ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_12_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15808778689685241632ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_11_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2877134489752022530ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__or_13_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17766878967230933209ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_15_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1708983205178421652ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_18_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16901765486651139424ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_16_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7677124209124257853ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_17_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15277662338751785662ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_21_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11922527757461233593ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_20_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12098192202123906438ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_19_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15970518416188715662ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__and_146_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18021068032047593682ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_24_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14411983084940875491ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_23_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 737438170272077294ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_22_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11514505430649114523ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_1_o_mul_nl = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 10186008145169648428ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_80_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15134982279902899127ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__or_144_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4252751359572041232ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_85_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6034964173453240041ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_33_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18377450748637709056ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_32_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11444736572270876048ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_82_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6871972290638320132ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_81_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9357132490584938144ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_39_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3239250673881204751ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_if_IntShiftRightSat_50U_6U_16U_if_or_1_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13904203329868899157ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_50U_6U_16U_oif_1_acc_nl = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 2987036670527247609ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_50U_6U_16U_oif_acc_nl = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 17742231817314376875ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_41_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13611290909554881388ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_40_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2865245765584941249ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_42_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9068801346209559193ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_48_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11470250517163698746ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_43_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14182111927609854833ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_47_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 544795226117898072ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_44_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13211346494297651049ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_46_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14170570811893830417ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_45_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12494346551751401345ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_52_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17031601786980310732ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_51_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3856744894081610504ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_50_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15593001291192175018ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__or_69_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11863557146658682315ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_FpExpoWidthDec_6U_5U_10U_1U_1U_else_and_2_nl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18000078864956693758ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_6_nl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4237825120638883109ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_nl = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11343159525287517052ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_83_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16640452007457413629ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_88_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 686760659282791934ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_87_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12076305896581301493ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_56_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3236742619146482126ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_57_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11342237943579680573ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_60_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2196293199824214481ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_59_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 658162286580838749ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__or_153_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13355181980326598040ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10442436528752415008ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10156067275141247974ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11057414973264402479ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_62_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5197272339448077064ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_61_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4137363022528935800ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_64_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16282247438437018006ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_63_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11808468669174263690ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__or_91_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13782862672940612308ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_66_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2885025820543036084ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_65_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13629233177294831043ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_33U_32U_34U_o_acc_nl = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 13710518518281280776ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_67_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3111920206536562301ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_69_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16115655340793997264ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_68_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16191561329821805997ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_70_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15004821838211405039ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_72_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16903527938240440239ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_71_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15950059733361270497ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_76_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9152976428158009122ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_78_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14508020289001668116ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_77_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5352317425381291230ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_nl = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7546571913430787932ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_nl = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4123824244516017858ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_2_nl = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 14157966097640273089ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_1_oif_acc_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10967849563852098054ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_and_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10575319915408744120ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_and_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 574672586729695987ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16251206901537671594ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_28_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12858364992691991827ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_73_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10338399079855700579ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg_s = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12058625123696738448ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18141756473849665964ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6606498969533515181ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14198447877544509740ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11686335453042071833ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15478084217686179130ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9158404326397556596ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9598779575395019283ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 11511123880006501990ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6249140090481904153ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 866174107918387631ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2107030512571211943ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15906827882562648687ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6647417783742814490ull);
    vlSelf->HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5455731687253327ull);
    vlSelf->HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3224714105779710877ull);
    vlSelf->HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15716144882795671359ull);
    vlSelf->HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10938730796698633495ull);
    vlSelf->HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3902065900479767277ull);
    vlSelf->HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12128967103704803762ull);
    vlSelf->HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2919993249935868747ull);
    vlSelf->HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10159245554960836160ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__Vstatic__result = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 8791465791054910287ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__Vstatic__result_t = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 7204376679855376381ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__Vstatic__result = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 7591589492430379873ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__Vstatic__result_t = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 16610385575070383685ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15197291990552808795ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6114997695004072561ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2064157496722400103ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__Vstatic__result = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 1583408732553936892ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__Vstatic__result_t = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 773882080754952089ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9592325303298737290ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 323740889952733347ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7716150224502086600ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13432235722324152322ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16205584775819637772ull);
    VL_SCOPED_RAND_RESET_W(113, vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result, __VscopeHash, 3318451207928799409ull);
    VL_SCOPED_RAND_RESET_W(113, vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, __VscopeHash, 14544614747637704972ull);
    VL_SCOPED_RAND_RESET_W(105, vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result, __VscopeHash, 5671975848567160287ull);
    VL_SCOPED_RAND_RESET_W(105, vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, __VscopeHash, 5134881674383778073ull);
    VL_SCOPED_RAND_RESET_W(105, vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result, __VscopeHash, 15121468470697951192ull);
    VL_SCOPED_RAND_RESET_W(105, vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, __VscopeHash, 12339848901992819614ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4086811985676443364ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17320097238446165996ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4506913140090426149ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 491854158654666348ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 943674551194894507ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4657717276157808155ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16701717277510287012ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15476512698488268834ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12646960185762726549ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 14340793338231349755ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 18241365568550603698ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 357830639928457470ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10985556985384663031ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13291007587650957517ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18428416019432233357ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13174320145148777100ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15670931903607513303ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10424254082675077006ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1111923495555201514ull);
    vlSelf->__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5919742279875324852ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__0__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16320803841253728834ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__0__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12129282999493899770ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__18__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2228416349095240073ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__18__input_0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15605831036656994443ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__18__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13354792464993500322ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__34__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16479622316585384710ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__34__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8269927743089230365ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__36__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10337584041484055716ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__36__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16674991436893296445ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__38__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 14097780247439284770ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__38__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9962219719389625762ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__39__Vfuncout = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 11884875853354820384ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__39__input_0 = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 5781693878393473462ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__39__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11741286714625075263ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__40__Vfuncout = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 7209281479762436586ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__40__input_0 = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 6734650853457111345ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__40__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2133765988689146647ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__41__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5924708647043146038ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__41__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15513787483723418895ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__42__Vfuncout = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 249266735660336046ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__42__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16254071464521071656ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__43__Vfuncout = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 9223106162899896777ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__43__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2729748650909171162ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__44__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12840477192053368213ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__44__input_0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3584139803832864605ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__44__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11563386198812918789ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__45__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1205079806266347042ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__45__input_0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6919193888281491981ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__45__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8234213163811643170ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__46__Vfuncout = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 16478940730415267719ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__46__vector = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 15220582964208866980ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__47__Vfuncout = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 10079010295358824205ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__47__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11215334620419921714ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__48__Vfuncout = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 16336478705976393906ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__48__vector = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 17399352339137439443ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__49__Vfuncout = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 1649814482500574566ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__49__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16808155263216903984ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__50__Vfuncout = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 8314111547962980111ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__50__vector = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 18042756597855422039ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__51__Vfuncout = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 314034364240662503ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__51__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11451639662831023208ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__52__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4319067770962414641ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__52__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13850607361821814651ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__81__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 505777578208787109ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__81__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 521905710778187551ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__82__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5681737360223245749ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__82__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2973365992327439755ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__83__Vfuncout = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 14805662617295124740ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__83__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17312878745523001370ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__84__Vfuncout = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 9764959473660383647ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__84__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7322673335532913122ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__85__Vfuncout = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 11463722239857120147ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__85__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14142288671919452973ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__87__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10938985470616935404ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__87__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16022368428239575914ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__105__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 44713755267029893ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__105__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17709368516703009663ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__106__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 16199378011979795443ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__106__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9220632339807957437ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__107__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 7105089198580006872ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__107__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15856639762248881539ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__108__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 2286592889371336727ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__108__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 5075503900603280734ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__124__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9179569542003898861ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__124__input_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2402702203247878013ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__124__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3513625646164644465ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__125__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1830343552206547891ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__125__input_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13770818230601391447ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__125__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5947798759405271684ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__130__Vfuncout = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 9168336879626342298ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__130__vector = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 1646751581451632268ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__131__Vfuncout = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 434536225082028695ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__131__vector = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4708320282474376857ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__135__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 5863444246756053882ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__135__vector = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 5677224572173278528ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__136__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 2877832394014130612ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__136__vector = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 3513593574214033360ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__137__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 725898498023050038ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__137__vector = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 2113917930760397544ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__138__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 4270480159955826045ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__138__vector = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 9422566173986533108ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__143__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9038309963956916567ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__144__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7662194770256134282ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__144__arg1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7513628970907554834ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__144__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9319885260177747777ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__144__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14939361169256479632ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__145__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14490875923467767115ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__145__arg1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9367881817284736219ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__145__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7042980613758502401ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__145__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17940260357525305958ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__146__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6955015138178331594ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__146__arg1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2802986076872576981ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__146__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8541187871086685355ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__146__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3779548469307732138ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__153__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4116513398282323794ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__153__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15834948084038165156ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__171__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4888249649611011046ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__171__input_0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4261542287202954389ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__171__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14641615655975492182ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__187__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17047961910749242202ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__187__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14853248864799674678ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__189__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15704715733010955266ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__189__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14905075301640188069ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__191__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 17015850784015256121ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__191__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1781971244287963026ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__192__Vfuncout = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 5815490533506125855ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__192__input_0 = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 11243957795229567054ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__192__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1669249341831360349ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__193__Vfuncout = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 9292702321496911247ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__193__input_0 = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 2975922195309986792ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__193__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4752643365416899815ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__194__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6046406220915365213ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__194__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13812197495746342769ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__195__Vfuncout = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 3263095541577322921ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__195__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1695130451180720275ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__196__Vfuncout = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 9863087111965884112ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__196__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12021127742986407502ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__197__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17908348253153406009ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__197__input_0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3268370520727591647ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__197__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10646185287116591746ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__198__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6110583318372482688ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__198__input_0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3814720079265866481ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__198__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18190253410600526862ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__199__Vfuncout = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 8109352327028998705ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__199__vector = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 6218866249258714103ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__200__Vfuncout = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 3895695020151958230ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__200__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7891141157807927835ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__201__Vfuncout = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 16055746964551649911ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__201__vector = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 10358060317777030428ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__202__Vfuncout = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 16930788300118911509ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__202__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6852172776893343388ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__203__Vfuncout = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 722942756439980553ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__203__vector = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 6643673507064231241ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__204__Vfuncout = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 16943988597264198899ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__204__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13076503426747166399ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__205__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3073647271640135848ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__205__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14314104116835826866ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__234__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14773889961862704977ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__234__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1949964842034773583ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__235__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15260424139769508336ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__235__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4700974325927224162ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__236__Vfuncout = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 5412894097527179864ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__236__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4779856410914208151ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__237__Vfuncout = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 17205839430510257582ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__237__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8820791285461691305ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__238__Vfuncout = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 14119006011565562605ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__238__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16804279687744448615ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__240__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3010859233548703566ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__240__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6980582372635916229ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__258__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8836691773452299452ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__258__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13870823909628008224ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__259__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 16686239462127767968ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__259__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17903154011816927497ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__260__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 9890256613250244366ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__260__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7082919471014617835ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__261__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 7565540895829484181ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__261__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 12820108170057291483ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__277__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11743920163113793093ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__277__input_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17627424159365911194ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__277__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16496147149599688838ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__278__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14521810708230720182ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__278__input_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11250340384875581740ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__278__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4924639335235321225ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__283__Vfuncout = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 13114438223223511430ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__283__vector = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 15245445528750509527ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__284__Vfuncout = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 778910140475303698ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__284__vector = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12922063193743062717ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__288__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 6137951236730353937ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__288__vector = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 15179281480966020884ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__289__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 15351480929630734532ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__289__vector = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 1013016262957907168ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__290__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 11513738452641304886ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__290__vector = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 14714634873653140778ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__291__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 8244182208058709223ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__291__vector = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 1308477192041457236ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__296__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5127857945543441960ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__297__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10537302742877036063ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__297__arg1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14739205846666893624ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__297__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4646675194765241536ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__297__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16124341856307119489ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__298__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13383402972879895747ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__298__arg1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5382675801686208860ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__298__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6412734609156057082ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__298__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11268862607058904773ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__299__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16470387622771363545ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__299__arg1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15385486286246831531ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__299__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7446193149225715323ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__299__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14960567272304794504ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__306__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12065516739057447808ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__306__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17976221947359471070ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__324__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1006289612405858673ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__324__input_0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4647586005134150190ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__324__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13721205508187359765ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__340__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4977757261292077792ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__340__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 784691298293309492ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__342__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4497117481674784170ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__342__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16627257118648908239ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__344__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 6854065345619659744ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__344__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13030683841997478969ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__345__Vfuncout = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 13896692709726126951ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__345__input_0 = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 11778624659366684953ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__345__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6778633205001154502ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__346__Vfuncout = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 1259991683735466544ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__346__input_0 = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 7609796535232943170ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__346__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9434882588511741070ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__347__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16069605976923021400ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__347__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14930116354201229241ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__348__Vfuncout = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 5399476362511148018ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__348__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2253361875423873363ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__349__Vfuncout = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 1976879109805420506ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__349__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16089527091159344553ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__350__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14812086333802831420ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__350__input_0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16781579356783777644ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__350__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5160595449848474866ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__351__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7918079222950518975ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__351__input_0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10904871821410707003ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__351__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17586881851307322701ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__352__Vfuncout = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 13478657760289593622ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__352__vector = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 5577085570094501099ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__353__Vfuncout = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 7462570833045066428ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__353__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11225099146885411980ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__354__Vfuncout = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 11726871627575876215ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__354__vector = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 8807778864413013974ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__355__Vfuncout = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 18031079908227115457ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__355__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9424228507562396684ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__356__Vfuncout = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 10648875166646623001ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__356__vector = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 503298276724887076ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__357__Vfuncout = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 17138290314452849657ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__357__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11299849738258531458ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__358__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16747449489015386528ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__358__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10782129424731797669ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__387__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14700909559676418134ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__387__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8434269932137946306ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__388__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17223512160985599211ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__388__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16429130144939493564ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__389__Vfuncout = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 8400593870267968103ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__389__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2032712189576495698ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__390__Vfuncout = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 18253660568909795648ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__390__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9084137691684156643ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__391__Vfuncout = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 17740606240345577135ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__391__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14473161722875522367ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__393__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 419619864390370920ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__393__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6119569565542350464ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__411__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 13483189093507640533ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__411__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2603728450578774352ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__412__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10466129449063802136ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__412__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12823491661076080102ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__413__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 8721200996880505304ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__413__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 14749947913906737521ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__414__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 16813669168126953566ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__414__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 9624730047233275888ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__430__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4098423841536028410ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__430__input_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15832165657052778859ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__430__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5000271233041307664ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__431__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1626037032125299934ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__431__input_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7415827525015872553ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__431__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11634857433130254224ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__436__Vfuncout = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 12676116721074462991ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__436__vector = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 16274286817595115980ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__437__Vfuncout = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 16197826298139901785ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__437__vector = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6964479038655784022ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__441__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 259659999293814037ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__441__vector = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 6894062005721366288ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__442__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 10602571846586196702ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__442__vector = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 5503449318737529382ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__443__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 3435082242662299244ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__443__vector = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 17806641523477326437ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__444__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 6934232429089542189ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__444__vector = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 5979028558927324436ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__449__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16929036925681625061ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__450__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7839736246255618373ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__450__arg1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17559844592705925107ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__450__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2058457061827110092ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__450__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17350207013468718936ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__451__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7525840183158370770ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__451__arg1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4711333421980405426ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__451__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16385804063293817365ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__451__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2285829493129232045ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__452__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16891222431205981703ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__452__arg1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15246939887522940701ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__452__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7219826071150030924ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__452__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2608874202059234021ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__459__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5293414289182265671ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__459__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7330765695221599153ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__477__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12284214396956794721ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__477__input_0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18074988110938847882ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__477__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14724008081477748169ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__493__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15508457996858802742ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__493__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4009095897837729350ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__495__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4046772790262300771ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__495__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10439969065124255990ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__497__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 17300661524744024769ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__497__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 352625056405805156ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__498__Vfuncout = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 10281010870177796910ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__498__input_0 = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 12205228947056389703ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__498__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14245248495009695871ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__499__Vfuncout = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 6847674253528701942ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__499__input_0 = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 17423096427336655679ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__499__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8480488445470273960ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__500__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8640236653139527856ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__500__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8414358169179454125ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__501__Vfuncout = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 15329996699382355767ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__501__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12843617180961823862ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__502__Vfuncout = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 17216332292163202877ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__502__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14899857711310795119ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__503__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2456275339241201921ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__503__input_0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14814232413979789470ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__503__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2291299453086244965ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__504__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13023633109821850340ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__504__input_0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6361028227112427879ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__504__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18419502099358981832ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__505__Vfuncout = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 6457667398323240278ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__505__vector = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 2528453051174161508ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__506__Vfuncout = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 2252286242478052218ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__506__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4635581902597751686ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__507__Vfuncout = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 9704101921746370935ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__507__vector = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 16653168184595924204ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__508__Vfuncout = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 11216590109328841067ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__508__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4080617135791865002ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__509__Vfuncout = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 12133557555441574102ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__509__vector = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 12069387643326665443ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__510__Vfuncout = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 12102080121318523249ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__510__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5071752274914352757ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__511__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13038371257314013150ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__511__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11362820733945834872ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__540__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12964711875510189961ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__540__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9932066934745643543ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__541__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10351509689318662504ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__541__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6597413819449623321ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__542__Vfuncout = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 2021124223278093726ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__542__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3607492014118643112ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__543__Vfuncout = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 3233503459565430721ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__543__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14513429517461099358ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__544__Vfuncout = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 5472516574318663363ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__544__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5590921470528719965ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__546__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2841501566156661383ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__546__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18054850496759917530ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__564__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17195048395115773156ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__564__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8092170747381974044ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__565__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3378703671442734453ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__565__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5922470231607829906ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__566__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 15421186210263473289ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__566__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11338363289766682795ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__567__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 737129118245131232ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__567__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 993001258541240602ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__583__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 877298827730891435ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__583__input_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2717029702819163473ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__583__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16939520889898593105ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__584__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9035763779405909301ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__584__input_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15065764378626226877ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__584__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13001526365573814926ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__589__Vfuncout = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 15672413943638912953ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__589__vector = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 13029957107645403048ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__590__Vfuncout = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 4853013087543642049ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__590__vector = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15031943700741302904ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__594__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 3805366996459430856ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__594__vector = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 3704235335395329014ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__595__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 9767401208040490004ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__595__vector = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 4942937741074389948ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__596__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 18161085797556898732ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__596__vector = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 594131183817834657ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__597__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 3653532808436513219ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__597__vector = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 5039441445797067684ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17444648509150291211ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__603__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 487840861446599033ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__603__arg1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17447212729165024714ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__603__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17283253632109246250ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__603__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4917802550387581083ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__604__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5962238090393636874ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__604__arg1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 635525048327112158ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__604__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8561529149548408951ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__604__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11226545359442829252ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__605__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1008794472013097777ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__605__arg1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2141787893160353975ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__605__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11121263241841682887ull);
    vlSelf->__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__605__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11996582292254281500ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3267 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13257996259966360031ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3268 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 10028141352417948438ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3269 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18230485738000294491ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3270 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17718420407643434656ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3271 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4143587339133899578ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3272 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 1509203618419000006ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3273 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6577425787973144776ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3274 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 5873853146135331861ull);
}

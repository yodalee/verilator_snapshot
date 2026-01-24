// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

extern const VlWide<9>/*287:0*/ Vsim__ConstPool__CONST_h4d451b67_0;
extern const VlWide<13>/*415:0*/ Vsim__ConstPool__CONST_h1bb950d3_0;

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit0__0(Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<9>/*287:0*/ __Vtemp_10;
    VlWide<9>/*287:0*/ __Vtemp_11;
    VlWide<9>/*287:0*/ __Vtemp_15;
    VlWide<9>/*287:0*/ __Vtemp_16;
    VlWide<4>/*127:0*/ __Vtemp_20;
    VlWide<4>/*127:0*/ __Vtemp_21;
    VlWide<5>/*159:0*/ __Vtemp_25;
    VlWide<5>/*159:0*/ __Vtemp_29;
    VlWide<5>/*159:0*/ __Vtemp_30;
    VlWide<4>/*127:0*/ __Vtemp_32;
    VlWide<4>/*127:0*/ __Vtemp_33;
    VlWide<4>/*127:0*/ __Vtemp_34;
    VlWide<4>/*127:0*/ __Vtemp_35;
    VlWide<9>/*287:0*/ __Vtemp_40;
    VlWide<9>/*287:0*/ __Vtemp_41;
    VlWide<9>/*287:0*/ __Vtemp_45;
    VlWide<9>/*287:0*/ __Vtemp_46;
    VlWide<4>/*127:0*/ __Vtemp_54;
    VlWide<4>/*127:0*/ __Vtemp_55;
    VlWide<5>/*159:0*/ __Vtemp_59;
    VlWide<5>/*159:0*/ __Vtemp_63;
    VlWide<5>/*159:0*/ __Vtemp_64;
    VlWide<13>/*415:0*/ __Vtemp_65;
    VlWide<13>/*415:0*/ __Vtemp_66;
    VlWide<13>/*415:0*/ __Vtemp_73;
    VlWide<13>/*415:0*/ __Vtemp_74;
    // Body
    if (vlSelfRef.__PVT__X_exp) {
        vlSelfRef.__PVT__fp_Xindex_info = (((IData)(
                                                    ((vlSelfRef.__PVT__fp_X_info_d 
                                                      >> 0x00000010U) 
                                                     | (IData)(vlSelfRef.__PVT__fp_X_index_uflow))) 
                                            << 0x00000010U) 
                                           | (0x0000ffffU 
                                              & vlSelfRef.__PVT__fp_X_info_d));
        vlSelfRef.__PVT__shift_bits = 0U;
        vlSelfRef.__PVT__fp_X_frac = (0x0000ffffU & vlSelfRef.__PVT__fp_Xindex_info_d);
    } else {
        vlSelfRef.__PVT__fp_Xindex_info = vlSelfRef.__PVT__fp_X_info_d;
        vlSelfRef.__PVT__shift_bits = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_select;
        vlSelfRef.__PVT__fp_X_frac = (0x0000ffffU & (IData)(vlSelfRef.__PVT__fp_Xshift_frac));
    }
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en) {
        vlSelfRef.dp2lut_Y_pd = (0x000fffffU & (0x000003ffU 
                                                & vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data));
        vlSelfRef.dp2lut_X_pd = vlSelfRef.__PVT__fp_Xshift;
        vlSelfRef.dp2lut_Y_info = (0x0000000fffffffffULL 
                                   & (((QData)((IData)(
                                                       (1U 
                                                        & (vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data 
                                                           >> 0x0000001bU)))) 
                                       << 0x00000022U) 
                                      | (((QData)((IData)(
                                                          (1U 
                                                           & (vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data 
                                                              >> 0x0000001aU)))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           (0x0000ffffU 
                                                            & (vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data 
                                                               >> 0x0000000aU)))))));
        vlSelfRef.dp2lut_pvld = ((IData)(vlSelfRef.__PVT__fp_X_stage2_vld) 
                                 & (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid));
        vlSelfRef.dp2lut_X_info = (((QData)((IData)(vlSelfRef.__PVT__fp_Xshift_oflow)) 
                                    << 0x00000022U) 
                                   | (((QData)((IData)(
                                                       (1U 
                                                        & (vlSelfRef.__PVT__fp_Xindex_info_d 
                                                           >> 0x00000010U)))) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(vlSelfRef.__PVT__fp_X_frac))));
    } else {
        vlSelfRef.dp2lut_Y_pd = (0x000fffffU & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data));
        vlSelfRef.dp2lut_X_pd = (((IData)(vlSelfRef.__PVT__shift_msb_int8) 
                                  << 0x0000000aU) | 
                                 ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en)
                                   ? (IData)(vlSelfRef.__PVT__shift_int16)
                                   : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                       ? (IData)(vlSelfRef.__PVT__shift_lsb_int8)
                                       : 0U)));
        vlSelfRef.dp2lut_Y_info = (0x0000000fffffffffULL 
                                   & (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data 
                                      >> 0x00000014U));
        vlSelfRef.dp2lut_pvld = ((IData)(vlSelfRef.__PVT__int_stage3_pvld) 
                                 & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid));
        vlSelfRef.dp2lut_X_info = (((QData)((IData)(
                                                    (((IData)(vlSelfRef.__PVT__X_int8_oflow_msb) 
                                                      << 3U) 
                                                     | ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en)
                                                           ? (IData)(vlSelfRef.__PVT__X_int16_oflow)
                                                           : 
                                                          ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en) 
                                                           & (IData)(vlSelfRef.__PVT__X_int8_oflow_lsb))) 
                                                         << 2U) 
                                                        | (3U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__dat_info_shift 
                                                                      >> 0x00000020U))))))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     ((((IData)(vlSelfRef.__PVT__X_exp)
                                                         ? (IData)(
                                                                   (vlSelfRef.__PVT__dat_info_shift 
                                                                    >> 0x00000010U))
                                                         : (IData)(vlSelfRef.__PVT__X_lin_frac_int8_msb)) 
                                                       << 0x00000010U) 
                                                      | (0x0000ffffU 
                                                         & ((IData)(vlSelfRef.__PVT__X_exp)
                                                             ? (IData)(vlSelfRef.__PVT__dat_info_shift)
                                                             : 
                                                            ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en)
                                                              ? (IData)(vlSelfRef.__PVT__X_lin_frac_int16)
                                                              : 
                                                             ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                               ? (IData)(vlSelfRef.__PVT__X_lin_frac_int8_lsb)
                                                               : 0U))))))));
    }
    vlSelfRef.__PVT__fp_Xindex_data = ((IData)(vlSelfRef.__PVT__X_exp)
                                        ? (IData)(vlSelfRef.__PVT__fp_Xindex)
                                        : vlSelfRef.__PVT__fp_X_log2_datout_d);
    vlSelfRef.__PVT__dat_info = (((QData)((IData)(vlSelfRef.__PVT__int_X_input_uflow_d)) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & (vlSelfRef.__PVT__log2_frac_msb 
                                                                         << 0x0000000bU)) 
                                                                     | (0x0000ffffU 
                                                                        & (IData)(
                                                                                (vlSelfRef.__PVT__log2_frac_lsb 
                                                                                >> 0x00000015U)))))));
    vlSelfRef.__PVT__dat_info_index_sub = (((QData)((IData)(
                                                            (3U 
                                                             & ((IData)(
                                                                        (vlSelfRef.__PVT__dat_info_d 
                                                                         >> 0x00000020U)) 
                                                                | (((IData)(vlSelfRef.__PVT__int_X_index_uflow_msb) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelfRef.__PVT__int_X_index_uflow_lsb)))))) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSelfRef.__PVT__dat_info_d)));
    vlSelfRef.__PVT__fp_Y_shift_abs = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__PVT__Y_shift_bits))
                                           ? ((IData)(1U) 
                                              + (0x0000007fU 
                                                 & (~ (IData)(vlSelfRef.__PVT__Y_shift_bits))))
                                           : (IData)(vlSelfRef.__PVT__Y_shift_bits)));
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__Y_shift_bits))) {
        vlSelfRef.__PVT__Y_shift_bits_int8_abs = (0x0000001fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0x0000001fU 
                                                      & (~ (IData)(vlSelfRef.__PVT__Y_shift_bits)))));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2938 
            = (0x003fffffffffffffULL & ((QData)((IData)(
                                                        (0x003fffffU 
                                                         & (IData)(vlSelfRef.__PVT__Y_dec_offset_lsb)))) 
                                        << (IData)(vlSelfRef.__PVT__Y_shift_bits_int8_abs)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2939 
            = (0x003fffffffffffffULL & ((QData)((IData)(vlSelfRef.__PVT__Y_dec_offset_msb)) 
                                        << (IData)(vlSelfRef.__PVT__Y_shift_bits_int8_abs)));
    } else {
        vlSelfRef.__PVT__Y_shift_bits_int8_abs = (0x0000001fU 
                                                  & (0x0000001fU 
                                                     & (IData)(vlSelfRef.__PVT__Y_shift_bits)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2938 
            = (0x003fffffffffffffULL & (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (IData)(vlSelfRef.__PVT__Y_dec_offset_lsb)))) 
                                         << 0x00000016U) 
                                        >> (IData)(vlSelfRef.__PVT__Y_shift_bits_int8_abs)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2939 
            = (0x003fffffffffffffULL & (((QData)((IData)(vlSelfRef.__PVT__Y_dec_offset_msb)) 
                                         << 0x00000016U) 
                                        >> (IData)(vlSelfRef.__PVT__Y_shift_bits_int8_abs)));
    }
    __Vtemp_2[0U] = (IData)(vlSelfRef.__PVT__Y_dec_offset_lsb);
    __Vtemp_2[1U] = (IData)((vlSelfRef.__PVT__Y_dec_offset_lsb 
                             >> 0x00000020U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_2[3U] = 0U;
    vlSelfRef.__PVT__Y_shift_bits_int16_abs = (0x0000003fU 
                                               & ((0x00000040U 
                                                   & (IData)(vlSelfRef.__PVT__Y_shift_bits))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x0000003fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__Y_shift_bits))))
                                                   : 
                                                  (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__Y_shift_bits))));
    VL_SHIFTL_WWI(102,102,6, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__Y_shift_bits_int16_abs));
    __Vtemp_4[0U] = 0U;
    __Vtemp_4[1U] = ((IData)(vlSelfRef.__PVT__Y_dec_offset_lsb) 
                     << 6U);
    __Vtemp_4[2U] = (((IData)(vlSelfRef.__PVT__Y_dec_offset_lsb) 
                      >> 0x0000001aU) | ((IData)((vlSelfRef.__PVT__Y_dec_offset_lsb 
                                                  >> 0x00000020U)) 
                                         << 6U));
    __Vtemp_4[3U] = ((IData)((vlSelfRef.__PVT__Y_dec_offset_lsb 
                              >> 0x00000020U)) >> 0x0000001aU);
    VL_SHIFTR_WWI(102,102,6, __Vtemp_5, __Vtemp_4, (IData)(vlSelfRef.__PVT__Y_shift_bits_int16_abs));
    if ((0x00000040U & (IData)(vlSelfRef.__PVT__Y_shift_bits))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2937[0U] 
            = __Vtemp_3[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2937[1U] 
            = __Vtemp_3[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2937[2U] 
            = __Vtemp_3[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2937[3U] 
            = (0x0000003fU & __Vtemp_3[3U]);
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2937[0U] 
            = __Vtemp_5[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2937[1U] 
            = __Vtemp_5[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2937[2U] 
            = __Vtemp_5[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2937[3U] 
            = (0x0000003fU & __Vtemp_5[3U]);
    }
    __Vtemp_10[0U] = 0U;
    __Vtemp_10[1U] = 0U;
    __Vtemp_10[2U] = 0U;
    __Vtemp_10[3U] = 0U;
    __Vtemp_10[4U] = vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0;
    __Vtemp_10[5U] = 0U;
    __Vtemp_10[6U] = 0U;
    __Vtemp_10[7U] = 0U;
    __Vtemp_10[8U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2943 = (0x000001ffU 
                                                   & ((0x7fU 
                                                       <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                       - (IData)(0x007fU))
                                                       : 
                                                      ((IData)(0x007eU) 
                                                       - (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))));
    VL_SHIFTL_WWI(278,278,8, __Vtemp_11, __Vtemp_10, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2943)));
    __Vtemp_15[0U] = 0U;
    __Vtemp_15[1U] = 0U;
    __Vtemp_15[2U] = 0U;
    __Vtemp_15[3U] = (vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0 
                      << 0x0000001fU);
    __Vtemp_15[4U] = (0x00400000U | (vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0 
                                     >> 1U));
    __Vtemp_15[5U] = 0U;
    __Vtemp_15[6U] = 0U;
    __Vtemp_15[7U] = 0U;
    __Vtemp_15[8U] = 0U;
    VL_SHIFTR_WWI(278,278,8, __Vtemp_16, __Vtemp_15, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2943)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2944[0U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[0U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[0U] : __Vtemp_16[0U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2944[1U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[1U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[1U] : __Vtemp_16[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2944[2U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[2U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[2U] : __Vtemp_16[2U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2944[3U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[3U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[3U] : __Vtemp_16[3U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2944[4U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[4U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[4U] : __Vtemp_16[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2944[5U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[5U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[5U] : __Vtemp_16[5U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2944[6U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[6U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[6U] : __Vtemp_16[6U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2944[7U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[7U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[7U] : __Vtemp_16[7U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2944[8U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[8U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[8U] : __Vtemp_16[8U]));
    vlSelfRef.__PVT__fp_X_shift_abs = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__PVT__shift_bits))
                                           ? ((IData)(1U) 
                                              + (0x0000007fU 
                                                 & (~ (IData)(vlSelfRef.__PVT__shift_bits))))
                                           : (IData)(vlSelfRef.__PVT__shift_bits)));
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__shift_bits))) {
        vlSelfRef.__PVT__shift_bits_int8_abs = (0x0000003fU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (0x0000001fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__shift_bits)))));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2933 
            = (0x007fffffffffffffULL & ((QData)((IData)(
                                                        (0x007fffffU 
                                                         & (IData)(vlSelfRef.__PVT__dec_Xindex_lsb)))) 
                                        << (IData)(vlSelfRef.__PVT__shift_bits_int8_abs)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2934 
            = (0x007fffffffffffffULL & ((QData)((IData)(vlSelfRef.__PVT__dec_Xindex_msb)) 
                                        << (IData)(vlSelfRef.__PVT__shift_bits_int8_abs)));
    } else {
        vlSelfRef.__PVT__shift_bits_int8_abs = (0x0000003fU 
                                                & (0x0000001fU 
                                                   & (IData)(vlSelfRef.__PVT__shift_bits)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2933 
            = (0x007fffffffffffffULL & (((QData)((IData)(
                                                         (0x007fffffU 
                                                          & (IData)(vlSelfRef.__PVT__dec_Xindex_lsb)))) 
                                         << 0x00000017U) 
                                        >> (IData)(vlSelfRef.__PVT__shift_bits_int8_abs)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2934 
            = (0x007fffffffffffffULL & (((QData)((IData)(vlSelfRef.__PVT__dec_Xindex_msb)) 
                                         << 0x00000017U) 
                                        >> (IData)(vlSelfRef.__PVT__shift_bits_int8_abs)));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3978 = (
                                                   (~ (IData)(
                                                              (vlSelfRef.dp2lut_Y_info 
                                                               >> 0x00000021U))) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_hybrid_priority));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3982 = (
                                                   (~ (IData)(
                                                              (vlSelfRef.dp2lut_Y_info 
                                                               >> 0x00000020U))) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_hybrid_priority));
    __Vtemp_20[0U] = 1U;
    __Vtemp_20[1U] = 0U;
    __Vtemp_20[2U] = 0U;
    __Vtemp_20[3U] = 0U;
    VL_SHIFTL_WWI(128,128,8, __Vtemp_21, __Vtemp_20, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2943)));
    if ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))) {
        __Vtemp_25[0U] = __Vtemp_21[0U];
        __Vtemp_25[1U] = __Vtemp_21[1U];
        __Vtemp_25[2U] = __Vtemp_21[2U];
        __Vtemp_25[3U] = __Vtemp_21[3U];
    } else {
        __Vtemp_25[0U] = 0U;
        __Vtemp_25[1U] = 0U;
        __Vtemp_25[2U] = 0U;
        __Vtemp_25[3U] = 0U;
    }
    __Vtemp_25[4U] = 0U;
    __Vtemp_29[0U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2944[5U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2944[4U] 
                                 >> 0x00000017U));
    __Vtemp_29[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2944[6U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2944[5U] 
                                 >> 0x00000017U));
    __Vtemp_29[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2944[7U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2944[6U] 
                                 >> 0x00000017U));
    __Vtemp_29[3U] = (0x7fffffffU & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2944[8U] 
                                      << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2944[7U] 
                                                >> 0x00000017U)));
    __Vtemp_29[4U] = 0U;
    VL_ADD_W(5, __Vtemp_30, __Vtemp_25, __Vtemp_29);
    vlSelfRef.__PVT__Y_fp32_int[0U] = __Vtemp_30[0U];
    vlSelfRef.__PVT__Y_fp32_int[1U] = __Vtemp_30[1U];
    vlSelfRef.__PVT__Y_fp32_int[2U] = __Vtemp_30[2U];
    vlSelfRef.__PVT__Y_fp32_int[3U] = __Vtemp_30[3U];
    vlSelfRef.__PVT__Y_fp32_int[4U] = (1U & __Vtemp_30[4U]);
    __Vtemp_32[0U] = (IData)(vlSelfRef.__PVT__dec_Xindex_lsb);
    __Vtemp_32[1U] = (IData)((vlSelfRef.__PVT__dec_Xindex_lsb 
                              >> 0x00000020U));
    __Vtemp_32[2U] = 0U;
    __Vtemp_32[3U] = 0U;
    vlSelfRef.__PVT__shift_bits_int16_abs = (0x0000007fU 
                                             & ((0x00000040U 
                                                 & (IData)(vlSelfRef.__PVT__shift_bits))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (0x0000003fU 
                                                  & (~ (IData)(vlSelfRef.__PVT__shift_bits))))
                                                 : 
                                                (0x0000003fU 
                                                 & (IData)(vlSelfRef.__PVT__shift_bits))));
    VL_SHIFTL_WWI(103,103,7, __Vtemp_33, __Vtemp_32, (IData)(vlSelfRef.__PVT__shift_bits_int16_abs));
    __Vtemp_34[0U] = 0U;
    __Vtemp_34[1U] = ((IData)(vlSelfRef.__PVT__dec_Xindex_lsb) 
                      << 7U);
    __Vtemp_34[2U] = (((IData)(vlSelfRef.__PVT__dec_Xindex_lsb) 
                       >> 0x00000019U) | ((IData)((vlSelfRef.__PVT__dec_Xindex_lsb 
                                                   >> 0x00000020U)) 
                                          << 7U));
    __Vtemp_34[3U] = ((IData)((vlSelfRef.__PVT__dec_Xindex_lsb 
                               >> 0x00000020U)) >> 0x00000019U);
    VL_SHIFTR_WWI(103,103,7, __Vtemp_35, __Vtemp_34, (IData)(vlSelfRef.__PVT__shift_bits_int16_abs));
    if ((0x00000040U & (IData)(vlSelfRef.__PVT__shift_bits))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2932[0U] 
            = __Vtemp_33[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2932[1U] 
            = __Vtemp_33[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2932[2U] 
            = __Vtemp_33[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2932[3U] 
            = (0x0000007fU & __Vtemp_33[3U]);
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2932[0U] 
            = __Vtemp_35[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2932[1U] 
            = __Vtemp_35[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2932[2U] 
            = __Vtemp_35[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2932[3U] 
            = (0x0000007fU & __Vtemp_35[3U]);
    }
    __Vtemp_40[0U] = 0U;
    __Vtemp_40[1U] = 0U;
    __Vtemp_40[2U] = 0U;
    __Vtemp_40[3U] = 0U;
    __Vtemp_40[4U] = (0x007fffffU & vlSelfRef.__PVT__fp_Xindex_data);
    __Vtemp_40[5U] = 0U;
    __Vtemp_40[6U] = 0U;
    __Vtemp_40[7U] = 0U;
    __Vtemp_40[8U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2940 = (0x000001ffU 
                                                   & ((0x7fU 
                                                       <= 
                                                       (0x000000ffU 
                                                        & (vlSelfRef.__PVT__fp_Xindex_data 
                                                           >> 0x00000017U)))
                                                       ? 
                                                      ((0x000000ffU 
                                                        & (vlSelfRef.__PVT__fp_Xindex_data 
                                                           >> 0x00000017U)) 
                                                       - (IData)(0x007fU))
                                                       : 
                                                      ((IData)(0x007eU) 
                                                       - 
                                                       (0x000000ffU 
                                                        & (vlSelfRef.__PVT__fp_Xindex_data 
                                                           >> 0x00000017U)))));
    VL_SHIFTL_WWI(278,278,8, __Vtemp_41, __Vtemp_40, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2940)));
    __Vtemp_45[0U] = 0U;
    __Vtemp_45[1U] = 0U;
    __Vtemp_45[2U] = 0U;
    __Vtemp_45[3U] = (vlSelfRef.__PVT__fp_Xindex_data 
                      << 0x0000001fU);
    __Vtemp_45[4U] = (0x00400000U | (0x003fffffU & 
                                     (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 1U)));
    __Vtemp_45[5U] = 0U;
    __Vtemp_45[6U] = 0U;
    __Vtemp_45[7U] = 0U;
    __Vtemp_45[8U] = 0U;
    VL_SHIFTR_WWI(278,278,8, __Vtemp_46, __Vtemp_45, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2940)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2941[0U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[0U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[0U] : __Vtemp_46[0U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2941[1U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[1U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[1U] : __Vtemp_46[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2941[2U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[2U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[2U] : __Vtemp_46[2U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2941[3U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[3U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[3U] : __Vtemp_46[3U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2941[4U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[4U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[4U] : __Vtemp_46[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2941[5U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[5U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[5U] : __Vtemp_46[5U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2941[6U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[6U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[6U] : __Vtemp_46[6U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2941[7U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[7U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[7U] : __Vtemp_46[7U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2941[8U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[8U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[8U] : __Vtemp_46[8U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3538[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2944[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3538[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2944[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3538[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2944[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3538[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2944[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3538[4U] 
        = ((vlSelfRef.__PVT__Y_fp32_int[0U] << 0x00000017U) 
           | (0x007fffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2944[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3538[5U] 
        = ((vlSelfRef.__PVT__Y_fp32_int[0U] >> 9U) 
           | (vlSelfRef.__PVT__Y_fp32_int[1U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3538[6U] 
        = ((vlSelfRef.__PVT__Y_fp32_int[1U] >> 9U) 
           | (vlSelfRef.__PVT__Y_fp32_int[2U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3538[7U] 
        = ((vlSelfRef.__PVT__Y_fp32_int[2U] >> 9U) 
           | (vlSelfRef.__PVT__Y_fp32_int[3U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3538[8U] 
        = ((vlSelfRef.__PVT__Y_fp32_int[3U] >> 9U) 
           | (vlSelfRef.__PVT__Y_fp32_int[4U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3538[9U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3538[0x0000000aU] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3538[0x0000000bU] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3538[0x0000000cU] = 0U;
    __Vtemp_54[0U] = 1U;
    __Vtemp_54[1U] = 0U;
    __Vtemp_54[2U] = 0U;
    __Vtemp_54[3U] = 0U;
    VL_SHIFTL_WWI(128,128,8, __Vtemp_55, __Vtemp_54, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2940)));
    if ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                  >> 0x00000017U)))) {
        __Vtemp_59[0U] = __Vtemp_55[0U];
        __Vtemp_59[1U] = __Vtemp_55[1U];
        __Vtemp_59[2U] = __Vtemp_55[2U];
        __Vtemp_59[3U] = __Vtemp_55[3U];
    } else {
        __Vtemp_59[0U] = 0U;
        __Vtemp_59[1U] = 0U;
        __Vtemp_59[2U] = 0U;
        __Vtemp_59[3U] = 0U;
    }
    __Vtemp_59[4U] = 0U;
    __Vtemp_63[0U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2941[5U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2941[4U] 
                                 >> 0x00000017U));
    __Vtemp_63[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2941[6U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2941[5U] 
                                 >> 0x00000017U));
    __Vtemp_63[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2941[7U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2941[6U] 
                                 >> 0x00000017U));
    __Vtemp_63[3U] = (0x7fffffffU & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2941[8U] 
                                      << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2941[7U] 
                                                >> 0x00000017U)));
    __Vtemp_63[4U] = 0U;
    VL_ADD_W(5, __Vtemp_64, __Vtemp_59, __Vtemp_63);
    vlSelfRef.__PVT__fp32_int[0U] = __Vtemp_64[0U];
    vlSelfRef.__PVT__fp32_int[1U] = __Vtemp_64[1U];
    vlSelfRef.__PVT__fp32_int[2U] = __Vtemp_64[2U];
    vlSelfRef.__PVT__fp32_int[3U] = __Vtemp_64[3U];
    vlSelfRef.__PVT__fp32_int[4U] = (1U & __Vtemp_64[4U]);
    VL_SHIFTL_WWI(408,408,8, __Vtemp_65, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3538, (IData)(vlSelfRef.__PVT__fp_Y_shift_abs));
    VL_SHIFTR_WWI(408,408,8, __Vtemp_66, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3538, (IData)(vlSelfRef.__PVT__fp_Y_shift_abs));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2945[0U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[0U] : __Vtemp_66[0U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2945[1U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[1U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[1U] : __Vtemp_66[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2945[2U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[2U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[2U] : __Vtemp_66[2U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2945[3U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[3U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[3U] : __Vtemp_66[3U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2945[4U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[4U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[4U] : __Vtemp_66[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2945[5U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[5U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[5U] : __Vtemp_66[5U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2945[6U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[6U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[6U] : __Vtemp_66[6U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2945[7U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[7U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[7U] : __Vtemp_66[7U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2945[8U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[8U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[8U] : __Vtemp_66[8U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2945[9U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[9U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[9U] : __Vtemp_66[9U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2945[0x0000000aU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000aU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
               ? __Vtemp_65[0x0000000aU] : __Vtemp_66[0x0000000aU]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2945[0x0000000bU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000bU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
               ? __Vtemp_65[0x0000000bU] : __Vtemp_66[0x0000000bU]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2945[0x0000000cU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000cU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
               ? __Vtemp_65[0x0000000cU] : __Vtemp_66[0x0000000cU]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3540[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2941[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3540[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2941[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3540[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2941[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3540[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2941[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3540[4U] 
        = ((vlSelfRef.__PVT__fp32_int[0U] << 0x00000017U) 
           | (0x007fffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2941[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3540[5U] 
        = ((vlSelfRef.__PVT__fp32_int[0U] >> 9U) | 
           (vlSelfRef.__PVT__fp32_int[1U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3540[6U] 
        = ((vlSelfRef.__PVT__fp32_int[1U] >> 9U) | 
           (vlSelfRef.__PVT__fp32_int[2U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3540[7U] 
        = ((vlSelfRef.__PVT__fp32_int[2U] >> 9U) | 
           (vlSelfRef.__PVT__fp32_int[3U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3540[8U] 
        = ((vlSelfRef.__PVT__fp32_int[3U] >> 9U) | 
           (vlSelfRef.__PVT__fp32_int[4U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3540[9U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3540[0x0000000aU] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3540[0x0000000bU] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3540[0x0000000cU] = 0U;
    VL_SHIFTL_WWI(408,408,8, __Vtemp_73, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3540, (IData)(vlSelfRef.__PVT__fp_X_shift_abs));
    VL_SHIFTR_WWI(408,408,8, __Vtemp_74, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3540, (IData)(vlSelfRef.__PVT__fp_X_shift_abs));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2942[0U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[0U] : __Vtemp_74[0U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2942[1U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[1U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[1U] : __Vtemp_74[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2942[2U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[2U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[2U] : __Vtemp_74[2U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2942[3U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[3U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[3U] : __Vtemp_74[3U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2942[4U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[4U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[4U] : __Vtemp_74[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2942[5U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[5U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[5U] : __Vtemp_74[5U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2942[6U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[6U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[6U] : __Vtemp_74[6U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2942[7U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[7U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[7U] : __Vtemp_74[7U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2942[8U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[8U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[8U] : __Vtemp_74[8U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2942[9U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[9U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[9U] : __Vtemp_74[9U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2942[0x0000000aU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000aU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
               ? __Vtemp_73[0x0000000aU] : __Vtemp_74[0x0000000aU]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2942[0x0000000bU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000bU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
               ? __Vtemp_73[0x0000000bU] : __Vtemp_74[0x0000000bU]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2942[0x0000000cU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000cU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
               ? __Vtemp_73[0x0000000cU] : __Vtemp_74[0x0000000cU]));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit0__1(Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_2930;
    __VdfgRegularize_h6e95ff9d_0_2930 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_2931;
    __VdfgRegularize_h6e95ff9d_0_2931 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_2935;
    __VdfgRegularize_h6e95ff9d_0_2935 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_2936;
    __VdfgRegularize_h6e95ff9d_0_2936 = 0;
    // Body
    vlSelfRef.__PVT__fp_Y_uflow = (1U & (((0x000000ffU 
                                           == (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23)) 
                                          & (0U != vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0)) 
                                         | ((~ (0U 
                                                != vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d)) 
                                            | (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_31))));
    vlSelfRef.__PVT__fp16_Y_datin_prdy = ((IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                          & (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_X_uflow = (1U & (((0x000000ffU 
                                           == (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23)) 
                                          & (0U != vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0)) 
                                         | ((~ (0U 
                                                != vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d)) 
                                            | (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_31))));
    vlSelfRef.__PVT__fp16_X_datin_prdy = ((IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                          & (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__datin_int8_msb = (0x001fffffU 
                                       & ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en))) 
                                          & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[1U] 
                                              << 0x0000000bU) 
                                             | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[0U] 
                                                >> 0x00000015U))));
    vlSelfRef.__PVT__datin_int8_lsb = (0x001fffffU 
                                       & ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en))) 
                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[0U]));
    vlSelfRef.__PVT__datin_int16 = (0x0000001fffffffffULL 
                                    & ((- (QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en))) 
                                       & (((QData)((IData)(
                                                           vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[1U])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[0U])))));
    if (vlSelfRef.__PVT__fp_X_uflow) {
        vlSelfRef.__PVT__fp_log2_datin = 0U;
        vlSelfRef.__PVT__fp_X_exp_frac = 0U;
        vlSelfRef.__PVT__fp_X_log2_datout = 0U;
    } else {
        vlSelfRef.__PVT__fp_log2_datin = vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
        if (vlSelfRef.__PVT__X_exp) {
            if ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_log2_datin 
                                          >> 0x17U)))) {
                vlSelfRef.__PVT__fp_X_exp_frac = (0x0000ffffU 
                                                  & (vlSelfRef.__PVT__fp_log2_datin 
                                                     >> 7U));
                vlSelfRef.__PVT__fp_X_log2_datout = 
                    ((0x000000ffU & (vlSelfRef.__PVT__fp_log2_datin 
                                     >> 0x17U)) - (IData)(0x0000007fU));
            } else {
                vlSelfRef.__PVT__fp_X_exp_frac = (0x0000ffffU 
                                                  & (vlSelfRef.__PVT__fp_log2_datin 
                                                     >> 7U));
                vlSelfRef.__PVT__fp_X_log2_datout = 
                    (((- (IData)((1U & (((IData)(1U) 
                                         + (~ ((0x7fU 
                                                > (0x000000ffU 
                                                   & (vlSelfRef.__PVT__fp_log2_datin 
                                                      >> 0x00000017U)))
                                                ? (0x0000007fU 
                                                   & ((IData)(0x007fU) 
                                                      - 
                                                      (0x000000ffU 
                                                       & (vlSelfRef.__PVT__fp_log2_datin 
                                                          >> 0x00000017U))))
                                                : 0U))) 
                                        >> 7U)))) << 8U) 
                     | (0x000000ffU & ((IData)(1U) 
                                       + (~ ((0x7fU 
                                              > (0x000000ffU 
                                                 & (vlSelfRef.__PVT__fp_log2_datin 
                                                    >> 0x00000017U)))
                                              ? (0x0000007fU 
                                                 & ((IData)(0x007fU) 
                                                    - 
                                                    (0x000000ffU 
                                                     & (vlSelfRef.__PVT__fp_log2_datin 
                                                        >> 0x00000017U))))
                                              : 0U)))));
            }
        } else {
            vlSelfRef.__PVT__fp_X_exp_frac = 0U;
            vlSelfRef.__PVT__fp_X_log2_datout = vlSelfRef.__PVT__fp_log2_datin;
        }
    }
    if (vlSelfRef.__PVT__sqsum_bypass_enable) {
        vlSelfRef.__PVT__dec_offset_datin_msb = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                  ? 
                                                 ((0x00200000U 
                                                   & (vlSelfRef.__PVT__datin_int8_msb 
                                                      << 1U)) 
                                                  | vlSelfRef.__PVT__datin_int8_msb)
                                                  : 0U);
        vlSelfRef.__PVT__dec_offset_datin_lsb = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelfRef.__PVT__datin_int16 
                                                                               >> 0x00000024U))))) 
                                                   << 0x00000025U) 
                                                  | vlSelfRef.__PVT__datin_int16)
                                                  : 
                                                 ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__datin_int8_lsb 
                                                                                >> 0x00000014U))))))) 
                                                    << 0x00000015U) 
                                                   | (QData)((IData)(vlSelfRef.__PVT__datin_int8_lsb)))
                                                   : 0ULL));
    } else {
        vlSelfRef.__PVT__dec_offset_datin_msb = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                  ? vlSelfRef.__PVT__datin_int8_msb
                                                  : 0U);
        vlSelfRef.__PVT__dec_offset_datin_lsb = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en)
                                                  ? vlSelfRef.__PVT__datin_int16
                                                  : 
                                                 ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                   ? (QData)((IData)(vlSelfRef.__PVT__datin_int8_lsb))
                                                   : 0ULL));
    }
    __VdfgRegularize_h6e95ff9d_0_2931 = ((2U & (vlSelfRef.__PVT__dec_offset_datin_msb 
                                                >> 0x00000014U)) 
                                         | (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_start_low 
                                                  >> 0x00000015U)));
    __VdfgRegularize_h6e95ff9d_0_2936 = ((2U & (vlSelfRef.__PVT__dec_offset_datin_msb 
                                                >> 0x00000014U)) 
                                         | (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_start_low 
                                                  >> 0x00000015U)));
    __VdfgRegularize_h6e95ff9d_0_2930 = ((2U & ((IData)(
                                                        (vlSelfRef.__PVT__dec_offset_datin_lsb 
                                                         >> 0x00000025U)) 
                                                << 1U)) 
                                         | (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_start_high) 
                                                  >> 5U)));
    __VdfgRegularize_h6e95ff9d_0_2935 = ((2U & ((IData)(
                                                        (vlSelfRef.__PVT__dec_offset_datin_lsb 
                                                         >> 0x00000025U)) 
                                                << 1U)) 
                                         | (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_start_high) 
                                                  >> 5U)));
    vlSelfRef.__PVT__fp_X_info = (((IData)(vlSelfRef.__PVT__fp_X_uflow) 
                                   << 0x00000010U) 
                                  | (IData)(vlSelfRef.__PVT__fp_X_exp_frac));
    vlSelfRef.__PVT__same_sign = ((1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset) 
                                         >> 7U)) == 
                                  (1U & (vlSelfRef.__PVT__fp_X_log2_datout 
                                         >> 7U)));
    vlSelfRef.__PVT__less_than_start = ((0x0000007fU 
                                         & vlSelfRef.__PVT__fp_X_log2_datout) 
                                        < (0x0000007fU 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset)));
    vlSelfRef.__PVT__less_than_win_s = ((1U != (IData)(__VdfgRegularize_h6e95ff9d_0_2931)) 
                                        & ((2U == (IData)(__VdfgRegularize_h6e95ff9d_0_2931)) 
                                           | ((vlSelfRef.__PVT__dec_offset_datin_msb 
                                               < (0x003fffffU 
                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_start_low)) 
                                              | (vlSelfRef.__PVT__dec_offset_datin_msb 
                                                 == 
                                                 (0x003fffffU 
                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_start_low)))));
    vlSelfRef.__PVT__Y_less_than_win_s = ((1U != (IData)(__VdfgRegularize_h6e95ff9d_0_2936)) 
                                          & ((2U == (IData)(__VdfgRegularize_h6e95ff9d_0_2936)) 
                                             | ((vlSelfRef.__PVT__dec_offset_datin_msb 
                                                 < 
                                                 (0x003fffffU 
                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_start_low)) 
                                                | (vlSelfRef.__PVT__dec_offset_datin_msb 
                                                   == 
                                                   (0x003fffffU 
                                                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_start_low)))));
    vlSelfRef.__PVT__less_than_win_start = ((1U != (IData)(__VdfgRegularize_h6e95ff9d_0_2930)) 
                                            & ((2U 
                                                == (IData)(__VdfgRegularize_h6e95ff9d_0_2930)) 
                                               | ((vlSelfRef.__PVT__dec_offset_datin_lsb 
                                                   < vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_le_start) 
                                                  | (vlSelfRef.__PVT__dec_offset_datin_lsb 
                                                     == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_le_start))));
    vlSelfRef.__PVT__Y_less_than_win_start = ((1U != (IData)(__VdfgRegularize_h6e95ff9d_0_2935)) 
                                              & ((2U 
                                                  == (IData)(__VdfgRegularize_h6e95ff9d_0_2935)) 
                                                 | ((vlSelfRef.__PVT__dec_offset_datin_lsb 
                                                     < vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_lo_start) 
                                                    | (vlSelfRef.__PVT__dec_offset_datin_lsb 
                                                       == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_lo_start))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit0__3(Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sum2itp_pvld = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__sumpd_wr_busy_int)) 
                              & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_5));
    vlSelfRef.__PVT__fp_Y_stage0_load = ((IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__fp_X_stage0_load = ((IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__int_en_vld = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)) 
                                   & (IData)(vlSelfRef.sum2itp_pvld));
    vlSelfRef.__PVT__fp_en_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en) 
                                  & (IData)(vlSelfRef.sum2itp_pvld));
    vlSelfRef.__PVT__int_X_proc_in_vld = ((IData)(vlSelfRef.__PVT__int_en_vld) 
                                          & (IData)(vlSelfRef.__PVT__int_Y_datin_prdy));
    vlSelfRef.__PVT__int_Y_proc_in_vld = ((IData)(vlSelfRef.__PVT__int_en_vld) 
                                          & (IData)(vlSelfRef.__PVT__int_X_datin_prdy));
    vlSelfRef.__PVT__fp_X_proc_in_vld = ((IData)(vlSelfRef.__PVT__fp_en_vld) 
                                         & (IData)(vlSelfRef.__PVT__fp16_Y_datin_prdy));
    vlSelfRef.__PVT__fp_Y_proc_in_vld = ((IData)(vlSelfRef.__PVT__fp_en_vld) 
                                         & (IData)(vlSelfRef.__PVT__fp16_X_datin_prdy));
    vlSelfRef.__PVT__load_in_intX = ((IData)(vlSelfRef.__PVT__int_X_proc_in_vld) 
                                     & (IData)(vlSelfRef.__PVT__int_X_datin_prdy));
    vlSelfRef.__PVT__load_din_intY = ((IData)(vlSelfRef.__PVT__int_Y_proc_in_vld) 
                                      & (IData)(vlSelfRef.__PVT__int_Y_datin_prdy));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit1__0(Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<9>/*287:0*/ __Vtemp_10;
    VlWide<9>/*287:0*/ __Vtemp_11;
    VlWide<9>/*287:0*/ __Vtemp_15;
    VlWide<9>/*287:0*/ __Vtemp_16;
    VlWide<4>/*127:0*/ __Vtemp_20;
    VlWide<4>/*127:0*/ __Vtemp_21;
    VlWide<5>/*159:0*/ __Vtemp_25;
    VlWide<5>/*159:0*/ __Vtemp_29;
    VlWide<5>/*159:0*/ __Vtemp_30;
    VlWide<4>/*127:0*/ __Vtemp_32;
    VlWide<4>/*127:0*/ __Vtemp_33;
    VlWide<4>/*127:0*/ __Vtemp_34;
    VlWide<4>/*127:0*/ __Vtemp_35;
    VlWide<9>/*287:0*/ __Vtemp_40;
    VlWide<9>/*287:0*/ __Vtemp_41;
    VlWide<9>/*287:0*/ __Vtemp_45;
    VlWide<9>/*287:0*/ __Vtemp_46;
    VlWide<4>/*127:0*/ __Vtemp_54;
    VlWide<4>/*127:0*/ __Vtemp_55;
    VlWide<5>/*159:0*/ __Vtemp_59;
    VlWide<5>/*159:0*/ __Vtemp_63;
    VlWide<5>/*159:0*/ __Vtemp_64;
    VlWide<13>/*415:0*/ __Vtemp_65;
    VlWide<13>/*415:0*/ __Vtemp_66;
    VlWide<13>/*415:0*/ __Vtemp_73;
    VlWide<13>/*415:0*/ __Vtemp_74;
    // Body
    if (vlSelfRef.__PVT__X_exp) {
        vlSelfRef.__PVT__fp_Xindex_info = (((IData)(
                                                    ((vlSelfRef.__PVT__fp_X_info_d 
                                                      >> 0x00000010U) 
                                                     | (IData)(vlSelfRef.__PVT__fp_X_index_uflow))) 
                                            << 0x00000010U) 
                                           | (0x0000ffffU 
                                              & vlSelfRef.__PVT__fp_X_info_d));
        vlSelfRef.__PVT__shift_bits = 0U;
        vlSelfRef.__PVT__fp_X_frac = (0x0000ffffU & vlSelfRef.__PVT__fp_Xindex_info_d);
    } else {
        vlSelfRef.__PVT__fp_Xindex_info = vlSelfRef.__PVT__fp_X_info_d;
        vlSelfRef.__PVT__shift_bits = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_select;
        vlSelfRef.__PVT__fp_X_frac = (0x0000ffffU & (IData)(vlSelfRef.__PVT__fp_Xshift_frac));
    }
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en) {
        vlSelfRef.dp2lut_Y_pd = (0x000fffffU & (0x000003ffU 
                                                & vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data));
        vlSelfRef.dp2lut_X_pd = vlSelfRef.__PVT__fp_Xshift;
        vlSelfRef.dp2lut_Y_info = (0x0000000fffffffffULL 
                                   & (((QData)((IData)(
                                                       (1U 
                                                        & (vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data 
                                                           >> 0x0000001bU)))) 
                                       << 0x00000022U) 
                                      | (((QData)((IData)(
                                                          (1U 
                                                           & (vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data 
                                                              >> 0x0000001aU)))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           (0x0000ffffU 
                                                            & (vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data 
                                                               >> 0x0000000aU)))))));
        vlSelfRef.dp2lut_pvld = ((IData)(vlSelfRef.__PVT__fp_X_stage2_vld) 
                                 & (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid));
        vlSelfRef.dp2lut_X_info = (((QData)((IData)(vlSelfRef.__PVT__fp_Xshift_oflow)) 
                                    << 0x00000022U) 
                                   | (((QData)((IData)(
                                                       (1U 
                                                        & (vlSelfRef.__PVT__fp_Xindex_info_d 
                                                           >> 0x00000010U)))) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(vlSelfRef.__PVT__fp_X_frac))));
    } else {
        vlSelfRef.dp2lut_Y_pd = (0x000fffffU & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data));
        vlSelfRef.dp2lut_X_pd = (((IData)(vlSelfRef.__PVT__shift_msb_int8) 
                                  << 0x0000000aU) | 
                                 ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en)
                                   ? (IData)(vlSelfRef.__PVT__shift_int16)
                                   : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                       ? (IData)(vlSelfRef.__PVT__shift_lsb_int8)
                                       : 0U)));
        vlSelfRef.dp2lut_Y_info = (0x0000000fffffffffULL 
                                   & (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data 
                                      >> 0x00000014U));
        vlSelfRef.dp2lut_pvld = ((IData)(vlSelfRef.__PVT__int_stage3_pvld) 
                                 & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid));
        vlSelfRef.dp2lut_X_info = (((QData)((IData)(
                                                    (((IData)(vlSelfRef.__PVT__X_int8_oflow_msb) 
                                                      << 3U) 
                                                     | ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en)
                                                           ? (IData)(vlSelfRef.__PVT__X_int16_oflow)
                                                           : 
                                                          ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en) 
                                                           & (IData)(vlSelfRef.__PVT__X_int8_oflow_lsb))) 
                                                         << 2U) 
                                                        | (3U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__dat_info_shift 
                                                                      >> 0x00000020U))))))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     ((((IData)(vlSelfRef.__PVT__X_exp)
                                                         ? (IData)(
                                                                   (vlSelfRef.__PVT__dat_info_shift 
                                                                    >> 0x00000010U))
                                                         : (IData)(vlSelfRef.__PVT__X_lin_frac_int8_msb)) 
                                                       << 0x00000010U) 
                                                      | (0x0000ffffU 
                                                         & ((IData)(vlSelfRef.__PVT__X_exp)
                                                             ? (IData)(vlSelfRef.__PVT__dat_info_shift)
                                                             : 
                                                            ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en)
                                                              ? (IData)(vlSelfRef.__PVT__X_lin_frac_int16)
                                                              : 
                                                             ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                               ? (IData)(vlSelfRef.__PVT__X_lin_frac_int8_lsb)
                                                               : 0U))))))));
    }
    vlSelfRef.__PVT__fp_Xindex_data = ((IData)(vlSelfRef.__PVT__X_exp)
                                        ? (IData)(vlSelfRef.__PVT__fp_Xindex)
                                        : vlSelfRef.__PVT__fp_X_log2_datout_d);
    vlSelfRef.__PVT__dat_info = (((QData)((IData)(vlSelfRef.__PVT__int_X_input_uflow_d)) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & (vlSelfRef.__PVT__log2_frac_msb 
                                                                         << 0x0000000bU)) 
                                                                     | (0x0000ffffU 
                                                                        & (IData)(
                                                                                (vlSelfRef.__PVT__log2_frac_lsb 
                                                                                >> 0x00000015U)))))));
    vlSelfRef.__PVT__dat_info_index_sub = (((QData)((IData)(
                                                            (3U 
                                                             & ((IData)(
                                                                        (vlSelfRef.__PVT__dat_info_d 
                                                                         >> 0x00000020U)) 
                                                                | (((IData)(vlSelfRef.__PVT__int_X_index_uflow_msb) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelfRef.__PVT__int_X_index_uflow_lsb)))))) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSelfRef.__PVT__dat_info_d)));
    vlSelfRef.__PVT__fp_Y_shift_abs = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__PVT__Y_shift_bits))
                                           ? ((IData)(1U) 
                                              + (0x0000007fU 
                                                 & (~ (IData)(vlSelfRef.__PVT__Y_shift_bits))))
                                           : (IData)(vlSelfRef.__PVT__Y_shift_bits)));
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__Y_shift_bits))) {
        vlSelfRef.__PVT__Y_shift_bits_int8_abs = (0x0000001fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0x0000001fU 
                                                      & (~ (IData)(vlSelfRef.__PVT__Y_shift_bits)))));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2956 
            = (0x003fffffffffffffULL & ((QData)((IData)(
                                                        (0x003fffffU 
                                                         & (IData)(vlSelfRef.__PVT__Y_dec_offset_lsb)))) 
                                        << (IData)(vlSelfRef.__PVT__Y_shift_bits_int8_abs)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2957 
            = (0x003fffffffffffffULL & ((QData)((IData)(vlSelfRef.__PVT__Y_dec_offset_msb)) 
                                        << (IData)(vlSelfRef.__PVT__Y_shift_bits_int8_abs)));
    } else {
        vlSelfRef.__PVT__Y_shift_bits_int8_abs = (0x0000001fU 
                                                  & (0x0000001fU 
                                                     & (IData)(vlSelfRef.__PVT__Y_shift_bits)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2956 
            = (0x003fffffffffffffULL & (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (IData)(vlSelfRef.__PVT__Y_dec_offset_lsb)))) 
                                         << 0x00000016U) 
                                        >> (IData)(vlSelfRef.__PVT__Y_shift_bits_int8_abs)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2957 
            = (0x003fffffffffffffULL & (((QData)((IData)(vlSelfRef.__PVT__Y_dec_offset_msb)) 
                                         << 0x00000016U) 
                                        >> (IData)(vlSelfRef.__PVT__Y_shift_bits_int8_abs)));
    }
    __Vtemp_2[0U] = (IData)(vlSelfRef.__PVT__Y_dec_offset_lsb);
    __Vtemp_2[1U] = (IData)((vlSelfRef.__PVT__Y_dec_offset_lsb 
                             >> 0x00000020U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_2[3U] = 0U;
    vlSelfRef.__PVT__Y_shift_bits_int16_abs = (0x0000003fU 
                                               & ((0x00000040U 
                                                   & (IData)(vlSelfRef.__PVT__Y_shift_bits))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x0000003fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__Y_shift_bits))))
                                                   : 
                                                  (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__Y_shift_bits))));
    VL_SHIFTL_WWI(102,102,6, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__Y_shift_bits_int16_abs));
    __Vtemp_4[0U] = 0U;
    __Vtemp_4[1U] = ((IData)(vlSelfRef.__PVT__Y_dec_offset_lsb) 
                     << 6U);
    __Vtemp_4[2U] = (((IData)(vlSelfRef.__PVT__Y_dec_offset_lsb) 
                      >> 0x0000001aU) | ((IData)((vlSelfRef.__PVT__Y_dec_offset_lsb 
                                                  >> 0x00000020U)) 
                                         << 6U));
    __Vtemp_4[3U] = ((IData)((vlSelfRef.__PVT__Y_dec_offset_lsb 
                              >> 0x00000020U)) >> 0x0000001aU);
    VL_SHIFTR_WWI(102,102,6, __Vtemp_5, __Vtemp_4, (IData)(vlSelfRef.__PVT__Y_shift_bits_int16_abs));
    if ((0x00000040U & (IData)(vlSelfRef.__PVT__Y_shift_bits))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2955[0U] 
            = __Vtemp_3[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2955[1U] 
            = __Vtemp_3[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2955[2U] 
            = __Vtemp_3[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2955[3U] 
            = (0x0000003fU & __Vtemp_3[3U]);
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2955[0U] 
            = __Vtemp_5[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2955[1U] 
            = __Vtemp_5[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2955[2U] 
            = __Vtemp_5[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2955[3U] 
            = (0x0000003fU & __Vtemp_5[3U]);
    }
    __Vtemp_10[0U] = 0U;
    __Vtemp_10[1U] = 0U;
    __Vtemp_10[2U] = 0U;
    __Vtemp_10[3U] = 0U;
    __Vtemp_10[4U] = vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0;
    __Vtemp_10[5U] = 0U;
    __Vtemp_10[6U] = 0U;
    __Vtemp_10[7U] = 0U;
    __Vtemp_10[8U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2961 = (0x000001ffU 
                                                   & ((0x7fU 
                                                       <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                       - (IData)(0x007fU))
                                                       : 
                                                      ((IData)(0x007eU) 
                                                       - (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))));
    VL_SHIFTL_WWI(278,278,8, __Vtemp_11, __Vtemp_10, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2961)));
    __Vtemp_15[0U] = 0U;
    __Vtemp_15[1U] = 0U;
    __Vtemp_15[2U] = 0U;
    __Vtemp_15[3U] = (vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0 
                      << 0x0000001fU);
    __Vtemp_15[4U] = (0x00400000U | (vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0 
                                     >> 1U));
    __Vtemp_15[5U] = 0U;
    __Vtemp_15[6U] = 0U;
    __Vtemp_15[7U] = 0U;
    __Vtemp_15[8U] = 0U;
    VL_SHIFTR_WWI(278,278,8, __Vtemp_16, __Vtemp_15, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2961)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2962[0U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[0U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[0U] : __Vtemp_16[0U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2962[1U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[1U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[1U] : __Vtemp_16[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2962[2U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[2U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[2U] : __Vtemp_16[2U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2962[3U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[3U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[3U] : __Vtemp_16[3U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2962[4U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[4U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[4U] : __Vtemp_16[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2962[5U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[5U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[5U] : __Vtemp_16[5U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2962[6U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[6U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[6U] : __Vtemp_16[6U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2962[7U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[7U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[7U] : __Vtemp_16[7U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2962[8U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[8U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[8U] : __Vtemp_16[8U]));
    vlSelfRef.__PVT__fp_X_shift_abs = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__PVT__shift_bits))
                                           ? ((IData)(1U) 
                                              + (0x0000007fU 
                                                 & (~ (IData)(vlSelfRef.__PVT__shift_bits))))
                                           : (IData)(vlSelfRef.__PVT__shift_bits)));
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__shift_bits))) {
        vlSelfRef.__PVT__shift_bits_int8_abs = (0x0000003fU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (0x0000001fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__shift_bits)))));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2951 
            = (0x007fffffffffffffULL & ((QData)((IData)(
                                                        (0x007fffffU 
                                                         & (IData)(vlSelfRef.__PVT__dec_Xindex_lsb)))) 
                                        << (IData)(vlSelfRef.__PVT__shift_bits_int8_abs)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2952 
            = (0x007fffffffffffffULL & ((QData)((IData)(vlSelfRef.__PVT__dec_Xindex_msb)) 
                                        << (IData)(vlSelfRef.__PVT__shift_bits_int8_abs)));
    } else {
        vlSelfRef.__PVT__shift_bits_int8_abs = (0x0000003fU 
                                                & (0x0000001fU 
                                                   & (IData)(vlSelfRef.__PVT__shift_bits)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2951 
            = (0x007fffffffffffffULL & (((QData)((IData)(
                                                         (0x007fffffU 
                                                          & (IData)(vlSelfRef.__PVT__dec_Xindex_lsb)))) 
                                         << 0x00000017U) 
                                        >> (IData)(vlSelfRef.__PVT__shift_bits_int8_abs)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2952 
            = (0x007fffffffffffffULL & (((QData)((IData)(vlSelfRef.__PVT__dec_Xindex_msb)) 
                                         << 0x00000017U) 
                                        >> (IData)(vlSelfRef.__PVT__shift_bits_int8_abs)));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3977 = (
                                                   (~ (IData)(
                                                              (vlSelfRef.dp2lut_Y_info 
                                                               >> 0x00000021U))) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_hybrid_priority));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3981 = (
                                                   (~ (IData)(
                                                              (vlSelfRef.dp2lut_Y_info 
                                                               >> 0x00000020U))) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_hybrid_priority));
    __Vtemp_20[0U] = 1U;
    __Vtemp_20[1U] = 0U;
    __Vtemp_20[2U] = 0U;
    __Vtemp_20[3U] = 0U;
    VL_SHIFTL_WWI(128,128,8, __Vtemp_21, __Vtemp_20, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2961)));
    if ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))) {
        __Vtemp_25[0U] = __Vtemp_21[0U];
        __Vtemp_25[1U] = __Vtemp_21[1U];
        __Vtemp_25[2U] = __Vtemp_21[2U];
        __Vtemp_25[3U] = __Vtemp_21[3U];
    } else {
        __Vtemp_25[0U] = 0U;
        __Vtemp_25[1U] = 0U;
        __Vtemp_25[2U] = 0U;
        __Vtemp_25[3U] = 0U;
    }
    __Vtemp_25[4U] = 0U;
    __Vtemp_29[0U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2962[5U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2962[4U] 
                                 >> 0x00000017U));
    __Vtemp_29[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2962[6U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2962[5U] 
                                 >> 0x00000017U));
    __Vtemp_29[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2962[7U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2962[6U] 
                                 >> 0x00000017U));
    __Vtemp_29[3U] = (0x7fffffffU & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2962[8U] 
                                      << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2962[7U] 
                                                >> 0x00000017U)));
    __Vtemp_29[4U] = 0U;
    VL_ADD_W(5, __Vtemp_30, __Vtemp_25, __Vtemp_29);
    vlSelfRef.__PVT__Y_fp32_int[0U] = __Vtemp_30[0U];
    vlSelfRef.__PVT__Y_fp32_int[1U] = __Vtemp_30[1U];
    vlSelfRef.__PVT__Y_fp32_int[2U] = __Vtemp_30[2U];
    vlSelfRef.__PVT__Y_fp32_int[3U] = __Vtemp_30[3U];
    vlSelfRef.__PVT__Y_fp32_int[4U] = (1U & __Vtemp_30[4U]);
    __Vtemp_32[0U] = (IData)(vlSelfRef.__PVT__dec_Xindex_lsb);
    __Vtemp_32[1U] = (IData)((vlSelfRef.__PVT__dec_Xindex_lsb 
                              >> 0x00000020U));
    __Vtemp_32[2U] = 0U;
    __Vtemp_32[3U] = 0U;
    vlSelfRef.__PVT__shift_bits_int16_abs = (0x0000007fU 
                                             & ((0x00000040U 
                                                 & (IData)(vlSelfRef.__PVT__shift_bits))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (0x0000003fU 
                                                  & (~ (IData)(vlSelfRef.__PVT__shift_bits))))
                                                 : 
                                                (0x0000003fU 
                                                 & (IData)(vlSelfRef.__PVT__shift_bits))));
    VL_SHIFTL_WWI(103,103,7, __Vtemp_33, __Vtemp_32, (IData)(vlSelfRef.__PVT__shift_bits_int16_abs));
    __Vtemp_34[0U] = 0U;
    __Vtemp_34[1U] = ((IData)(vlSelfRef.__PVT__dec_Xindex_lsb) 
                      << 7U);
    __Vtemp_34[2U] = (((IData)(vlSelfRef.__PVT__dec_Xindex_lsb) 
                       >> 0x00000019U) | ((IData)((vlSelfRef.__PVT__dec_Xindex_lsb 
                                                   >> 0x00000020U)) 
                                          << 7U));
    __Vtemp_34[3U] = ((IData)((vlSelfRef.__PVT__dec_Xindex_lsb 
                               >> 0x00000020U)) >> 0x00000019U);
    VL_SHIFTR_WWI(103,103,7, __Vtemp_35, __Vtemp_34, (IData)(vlSelfRef.__PVT__shift_bits_int16_abs));
    if ((0x00000040U & (IData)(vlSelfRef.__PVT__shift_bits))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2950[0U] 
            = __Vtemp_33[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2950[1U] 
            = __Vtemp_33[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2950[2U] 
            = __Vtemp_33[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2950[3U] 
            = (0x0000007fU & __Vtemp_33[3U]);
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2950[0U] 
            = __Vtemp_35[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2950[1U] 
            = __Vtemp_35[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2950[2U] 
            = __Vtemp_35[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2950[3U] 
            = (0x0000007fU & __Vtemp_35[3U]);
    }
    __Vtemp_40[0U] = 0U;
    __Vtemp_40[1U] = 0U;
    __Vtemp_40[2U] = 0U;
    __Vtemp_40[3U] = 0U;
    __Vtemp_40[4U] = (0x007fffffU & vlSelfRef.__PVT__fp_Xindex_data);
    __Vtemp_40[5U] = 0U;
    __Vtemp_40[6U] = 0U;
    __Vtemp_40[7U] = 0U;
    __Vtemp_40[8U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2958 = (0x000001ffU 
                                                   & ((0x7fU 
                                                       <= 
                                                       (0x000000ffU 
                                                        & (vlSelfRef.__PVT__fp_Xindex_data 
                                                           >> 0x00000017U)))
                                                       ? 
                                                      ((0x000000ffU 
                                                        & (vlSelfRef.__PVT__fp_Xindex_data 
                                                           >> 0x00000017U)) 
                                                       - (IData)(0x007fU))
                                                       : 
                                                      ((IData)(0x007eU) 
                                                       - 
                                                       (0x000000ffU 
                                                        & (vlSelfRef.__PVT__fp_Xindex_data 
                                                           >> 0x00000017U)))));
    VL_SHIFTL_WWI(278,278,8, __Vtemp_41, __Vtemp_40, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2958)));
    __Vtemp_45[0U] = 0U;
    __Vtemp_45[1U] = 0U;
    __Vtemp_45[2U] = 0U;
    __Vtemp_45[3U] = (vlSelfRef.__PVT__fp_Xindex_data 
                      << 0x0000001fU);
    __Vtemp_45[4U] = (0x00400000U | (0x003fffffU & 
                                     (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 1U)));
    __Vtemp_45[5U] = 0U;
    __Vtemp_45[6U] = 0U;
    __Vtemp_45[7U] = 0U;
    __Vtemp_45[8U] = 0U;
    VL_SHIFTR_WWI(278,278,8, __Vtemp_46, __Vtemp_45, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2958)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2959[0U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[0U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[0U] : __Vtemp_46[0U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2959[1U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[1U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[1U] : __Vtemp_46[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2959[2U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[2U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[2U] : __Vtemp_46[2U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2959[3U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[3U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[3U] : __Vtemp_46[3U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2959[4U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[4U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[4U] : __Vtemp_46[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2959[5U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[5U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[5U] : __Vtemp_46[5U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2959[6U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[6U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[6U] : __Vtemp_46[6U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2959[7U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[7U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[7U] : __Vtemp_46[7U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2959[8U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[8U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[8U] : __Vtemp_46[8U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3535[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2962[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3535[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2962[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3535[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2962[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3535[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2962[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3535[4U] 
        = ((vlSelfRef.__PVT__Y_fp32_int[0U] << 0x00000017U) 
           | (0x007fffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2962[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3535[5U] 
        = ((vlSelfRef.__PVT__Y_fp32_int[0U] >> 9U) 
           | (vlSelfRef.__PVT__Y_fp32_int[1U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3535[6U] 
        = ((vlSelfRef.__PVT__Y_fp32_int[1U] >> 9U) 
           | (vlSelfRef.__PVT__Y_fp32_int[2U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3535[7U] 
        = ((vlSelfRef.__PVT__Y_fp32_int[2U] >> 9U) 
           | (vlSelfRef.__PVT__Y_fp32_int[3U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3535[8U] 
        = ((vlSelfRef.__PVT__Y_fp32_int[3U] >> 9U) 
           | (vlSelfRef.__PVT__Y_fp32_int[4U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3535[9U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3535[0x0000000aU] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3535[0x0000000bU] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3535[0x0000000cU] = 0U;
    __Vtemp_54[0U] = 1U;
    __Vtemp_54[1U] = 0U;
    __Vtemp_54[2U] = 0U;
    __Vtemp_54[3U] = 0U;
    VL_SHIFTL_WWI(128,128,8, __Vtemp_55, __Vtemp_54, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2958)));
    if ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                  >> 0x00000017U)))) {
        __Vtemp_59[0U] = __Vtemp_55[0U];
        __Vtemp_59[1U] = __Vtemp_55[1U];
        __Vtemp_59[2U] = __Vtemp_55[2U];
        __Vtemp_59[3U] = __Vtemp_55[3U];
    } else {
        __Vtemp_59[0U] = 0U;
        __Vtemp_59[1U] = 0U;
        __Vtemp_59[2U] = 0U;
        __Vtemp_59[3U] = 0U;
    }
    __Vtemp_59[4U] = 0U;
    __Vtemp_63[0U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2959[5U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2959[4U] 
                                 >> 0x00000017U));
    __Vtemp_63[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2959[6U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2959[5U] 
                                 >> 0x00000017U));
    __Vtemp_63[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2959[7U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2959[6U] 
                                 >> 0x00000017U));
    __Vtemp_63[3U] = (0x7fffffffU & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2959[8U] 
                                      << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2959[7U] 
                                                >> 0x00000017U)));
    __Vtemp_63[4U] = 0U;
    VL_ADD_W(5, __Vtemp_64, __Vtemp_59, __Vtemp_63);
    vlSelfRef.__PVT__fp32_int[0U] = __Vtemp_64[0U];
    vlSelfRef.__PVT__fp32_int[1U] = __Vtemp_64[1U];
    vlSelfRef.__PVT__fp32_int[2U] = __Vtemp_64[2U];
    vlSelfRef.__PVT__fp32_int[3U] = __Vtemp_64[3U];
    vlSelfRef.__PVT__fp32_int[4U] = (1U & __Vtemp_64[4U]);
    VL_SHIFTL_WWI(408,408,8, __Vtemp_65, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3535, (IData)(vlSelfRef.__PVT__fp_Y_shift_abs));
    VL_SHIFTR_WWI(408,408,8, __Vtemp_66, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3535, (IData)(vlSelfRef.__PVT__fp_Y_shift_abs));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2963[0U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[0U] : __Vtemp_66[0U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2963[1U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[1U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[1U] : __Vtemp_66[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2963[2U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[2U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[2U] : __Vtemp_66[2U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2963[3U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[3U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[3U] : __Vtemp_66[3U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2963[4U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[4U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[4U] : __Vtemp_66[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2963[5U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[5U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[5U] : __Vtemp_66[5U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2963[6U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[6U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[6U] : __Vtemp_66[6U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2963[7U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[7U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[7U] : __Vtemp_66[7U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2963[8U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[8U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[8U] : __Vtemp_66[8U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2963[9U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[9U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[9U] : __Vtemp_66[9U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2963[0x0000000aU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000aU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
               ? __Vtemp_65[0x0000000aU] : __Vtemp_66[0x0000000aU]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2963[0x0000000bU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000bU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
               ? __Vtemp_65[0x0000000bU] : __Vtemp_66[0x0000000bU]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2963[0x0000000cU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000cU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
               ? __Vtemp_65[0x0000000cU] : __Vtemp_66[0x0000000cU]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3537[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2959[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3537[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2959[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3537[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2959[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3537[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2959[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3537[4U] 
        = ((vlSelfRef.__PVT__fp32_int[0U] << 0x00000017U) 
           | (0x007fffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2959[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3537[5U] 
        = ((vlSelfRef.__PVT__fp32_int[0U] >> 9U) | 
           (vlSelfRef.__PVT__fp32_int[1U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3537[6U] 
        = ((vlSelfRef.__PVT__fp32_int[1U] >> 9U) | 
           (vlSelfRef.__PVT__fp32_int[2U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3537[7U] 
        = ((vlSelfRef.__PVT__fp32_int[2U] >> 9U) | 
           (vlSelfRef.__PVT__fp32_int[3U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3537[8U] 
        = ((vlSelfRef.__PVT__fp32_int[3U] >> 9U) | 
           (vlSelfRef.__PVT__fp32_int[4U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3537[9U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3537[0x0000000aU] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3537[0x0000000bU] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3537[0x0000000cU] = 0U;
    VL_SHIFTL_WWI(408,408,8, __Vtemp_73, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3537, (IData)(vlSelfRef.__PVT__fp_X_shift_abs));
    VL_SHIFTR_WWI(408,408,8, __Vtemp_74, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3537, (IData)(vlSelfRef.__PVT__fp_X_shift_abs));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2960[0U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[0U] : __Vtemp_74[0U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2960[1U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[1U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[1U] : __Vtemp_74[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2960[2U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[2U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[2U] : __Vtemp_74[2U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2960[3U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[3U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[3U] : __Vtemp_74[3U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2960[4U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[4U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[4U] : __Vtemp_74[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2960[5U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[5U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[5U] : __Vtemp_74[5U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2960[6U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[6U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[6U] : __Vtemp_74[6U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2960[7U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[7U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[7U] : __Vtemp_74[7U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2960[8U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[8U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[8U] : __Vtemp_74[8U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2960[9U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[9U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[9U] : __Vtemp_74[9U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2960[0x0000000aU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000aU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
               ? __Vtemp_73[0x0000000aU] : __Vtemp_74[0x0000000aU]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2960[0x0000000bU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000bU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
               ? __Vtemp_73[0x0000000bU] : __Vtemp_74[0x0000000bU]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2960[0x0000000cU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000cU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
               ? __Vtemp_73[0x0000000cU] : __Vtemp_74[0x0000000cU]));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit1__1(Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_2948;
    __VdfgRegularize_h6e95ff9d_0_2948 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_2949;
    __VdfgRegularize_h6e95ff9d_0_2949 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_2953;
    __VdfgRegularize_h6e95ff9d_0_2953 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_2954;
    __VdfgRegularize_h6e95ff9d_0_2954 = 0;
    // Body
    vlSelfRef.__PVT__fp_Y_uflow = (1U & (((0x000000ffU 
                                           == (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23)) 
                                          & (0U != vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0)) 
                                         | ((~ (0U 
                                                != vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d)) 
                                            | (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_31))));
    vlSelfRef.__PVT__fp16_Y_datin_prdy = ((IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                          & (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_X_uflow = (1U & (((0x000000ffU 
                                           == (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23)) 
                                          & (0U != vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0)) 
                                         | ((~ (0U 
                                                != vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d)) 
                                            | (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_31))));
    vlSelfRef.__PVT__fp16_X_datin_prdy = ((IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                          & (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__datin_int8_msb = (0x001fffffU 
                                       & ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en))) 
                                          & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[2U] 
                                              << 1U) 
                                             | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[1U] 
                                                >> 0x0000001fU))));
    vlSelfRef.__PVT__datin_int8_lsb = (0x001fffffU 
                                       & ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en))) 
                                          & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[1U] 
                                              << 0x00000016U) 
                                             | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[1U] 
                                                >> 0x0000000aU))));
    vlSelfRef.__PVT__datin_int16 = (0x0000001fffffffffULL 
                                    & ((- (QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en))) 
                                       & (((QData)((IData)(
                                                           vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[2U])) 
                                           << 0x00000036U) 
                                          | (((QData)((IData)(
                                                              vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[2U])) 
                                              << 0x00000016U) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[1U])) 
                                                >> 0x0000000aU)))));
    if (vlSelfRef.__PVT__fp_X_uflow) {
        vlSelfRef.__PVT__fp_log2_datin = 0U;
        vlSelfRef.__PVT__fp_X_exp_frac = 0U;
        vlSelfRef.__PVT__fp_X_log2_datout = 0U;
    } else {
        vlSelfRef.__PVT__fp_log2_datin = vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
        if (vlSelfRef.__PVT__X_exp) {
            if ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_log2_datin 
                                          >> 0x17U)))) {
                vlSelfRef.__PVT__fp_X_exp_frac = (0x0000ffffU 
                                                  & (vlSelfRef.__PVT__fp_log2_datin 
                                                     >> 7U));
                vlSelfRef.__PVT__fp_X_log2_datout = 
                    ((0x000000ffU & (vlSelfRef.__PVT__fp_log2_datin 
                                     >> 0x17U)) - (IData)(0x0000007fU));
            } else {
                vlSelfRef.__PVT__fp_X_exp_frac = (0x0000ffffU 
                                                  & (vlSelfRef.__PVT__fp_log2_datin 
                                                     >> 7U));
                vlSelfRef.__PVT__fp_X_log2_datout = 
                    (((- (IData)((1U & (((IData)(1U) 
                                         + (~ ((0x7fU 
                                                > (0x000000ffU 
                                                   & (vlSelfRef.__PVT__fp_log2_datin 
                                                      >> 0x00000017U)))
                                                ? (0x0000007fU 
                                                   & ((IData)(0x007fU) 
                                                      - 
                                                      (0x000000ffU 
                                                       & (vlSelfRef.__PVT__fp_log2_datin 
                                                          >> 0x00000017U))))
                                                : 0U))) 
                                        >> 7U)))) << 8U) 
                     | (0x000000ffU & ((IData)(1U) 
                                       + (~ ((0x7fU 
                                              > (0x000000ffU 
                                                 & (vlSelfRef.__PVT__fp_log2_datin 
                                                    >> 0x00000017U)))
                                              ? (0x0000007fU 
                                                 & ((IData)(0x007fU) 
                                                    - 
                                                    (0x000000ffU 
                                                     & (vlSelfRef.__PVT__fp_log2_datin 
                                                        >> 0x00000017U))))
                                              : 0U)))));
            }
        } else {
            vlSelfRef.__PVT__fp_X_exp_frac = 0U;
            vlSelfRef.__PVT__fp_X_log2_datout = vlSelfRef.__PVT__fp_log2_datin;
        }
    }
    if (vlSelfRef.__PVT__sqsum_bypass_enable) {
        vlSelfRef.__PVT__dec_offset_datin_msb = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                  ? 
                                                 ((0x00200000U 
                                                   & (vlSelfRef.__PVT__datin_int8_msb 
                                                      << 1U)) 
                                                  | vlSelfRef.__PVT__datin_int8_msb)
                                                  : 0U);
        vlSelfRef.__PVT__dec_offset_datin_lsb = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelfRef.__PVT__datin_int16 
                                                                               >> 0x00000024U))))) 
                                                   << 0x00000025U) 
                                                  | vlSelfRef.__PVT__datin_int16)
                                                  : 
                                                 ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__datin_int8_lsb 
                                                                                >> 0x00000014U))))))) 
                                                    << 0x00000015U) 
                                                   | (QData)((IData)(vlSelfRef.__PVT__datin_int8_lsb)))
                                                   : 0ULL));
    } else {
        vlSelfRef.__PVT__dec_offset_datin_msb = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                  ? vlSelfRef.__PVT__datin_int8_msb
                                                  : 0U);
        vlSelfRef.__PVT__dec_offset_datin_lsb = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en)
                                                  ? vlSelfRef.__PVT__datin_int16
                                                  : 
                                                 ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                   ? (QData)((IData)(vlSelfRef.__PVT__datin_int8_lsb))
                                                   : 0ULL));
    }
    __VdfgRegularize_h6e95ff9d_0_2949 = ((2U & (vlSelfRef.__PVT__dec_offset_datin_msb 
                                                >> 0x00000014U)) 
                                         | (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_start_low 
                                                  >> 0x00000015U)));
    __VdfgRegularize_h6e95ff9d_0_2954 = ((2U & (vlSelfRef.__PVT__dec_offset_datin_msb 
                                                >> 0x00000014U)) 
                                         | (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_start_low 
                                                  >> 0x00000015U)));
    __VdfgRegularize_h6e95ff9d_0_2948 = ((2U & ((IData)(
                                                        (vlSelfRef.__PVT__dec_offset_datin_lsb 
                                                         >> 0x00000025U)) 
                                                << 1U)) 
                                         | (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_start_high) 
                                                  >> 5U)));
    __VdfgRegularize_h6e95ff9d_0_2953 = ((2U & ((IData)(
                                                        (vlSelfRef.__PVT__dec_offset_datin_lsb 
                                                         >> 0x00000025U)) 
                                                << 1U)) 
                                         | (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_start_high) 
                                                  >> 5U)));
    vlSelfRef.__PVT__fp_X_info = (((IData)(vlSelfRef.__PVT__fp_X_uflow) 
                                   << 0x00000010U) 
                                  | (IData)(vlSelfRef.__PVT__fp_X_exp_frac));
    vlSelfRef.__PVT__same_sign = ((1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset) 
                                         >> 7U)) == 
                                  (1U & (vlSelfRef.__PVT__fp_X_log2_datout 
                                         >> 7U)));
    vlSelfRef.__PVT__less_than_start = ((0x0000007fU 
                                         & vlSelfRef.__PVT__fp_X_log2_datout) 
                                        < (0x0000007fU 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset)));
    vlSelfRef.__PVT__less_than_win_s = ((1U != (IData)(__VdfgRegularize_h6e95ff9d_0_2949)) 
                                        & ((2U == (IData)(__VdfgRegularize_h6e95ff9d_0_2949)) 
                                           | ((vlSelfRef.__PVT__dec_offset_datin_msb 
                                               < (0x003fffffU 
                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_start_low)) 
                                              | (vlSelfRef.__PVT__dec_offset_datin_msb 
                                                 == 
                                                 (0x003fffffU 
                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_start_low)))));
    vlSelfRef.__PVT__Y_less_than_win_s = ((1U != (IData)(__VdfgRegularize_h6e95ff9d_0_2954)) 
                                          & ((2U == (IData)(__VdfgRegularize_h6e95ff9d_0_2954)) 
                                             | ((vlSelfRef.__PVT__dec_offset_datin_msb 
                                                 < 
                                                 (0x003fffffU 
                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_start_low)) 
                                                | (vlSelfRef.__PVT__dec_offset_datin_msb 
                                                   == 
                                                   (0x003fffffU 
                                                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_start_low)))));
    vlSelfRef.__PVT__less_than_win_start = ((1U != (IData)(__VdfgRegularize_h6e95ff9d_0_2948)) 
                                            & ((2U 
                                                == (IData)(__VdfgRegularize_h6e95ff9d_0_2948)) 
                                               | ((vlSelfRef.__PVT__dec_offset_datin_lsb 
                                                   < vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_le_start) 
                                                  | (vlSelfRef.__PVT__dec_offset_datin_lsb 
                                                     == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_le_start))));
    vlSelfRef.__PVT__Y_less_than_win_start = ((1U != (IData)(__VdfgRegularize_h6e95ff9d_0_2953)) 
                                              & ((2U 
                                                  == (IData)(__VdfgRegularize_h6e95ff9d_0_2953)) 
                                                 | ((vlSelfRef.__PVT__dec_offset_datin_lsb 
                                                     < vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_lo_start) 
                                                    | (vlSelfRef.__PVT__dec_offset_datin_lsb 
                                                       == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_lo_start))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit1__3(Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit1__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sum2itp_pvld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_4) 
                              & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_10));
    vlSelfRef.__PVT__fp_Y_stage0_load = ((IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__fp_X_stage0_load = ((IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__int_en_vld = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)) 
                                   & (IData)(vlSelfRef.sum2itp_pvld));
    vlSelfRef.__PVT__fp_en_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en) 
                                  & (IData)(vlSelfRef.sum2itp_pvld));
    vlSelfRef.__PVT__int_X_proc_in_vld = ((IData)(vlSelfRef.__PVT__int_en_vld) 
                                          & (IData)(vlSelfRef.__PVT__int_Y_datin_prdy));
    vlSelfRef.__PVT__int_Y_proc_in_vld = ((IData)(vlSelfRef.__PVT__int_en_vld) 
                                          & (IData)(vlSelfRef.__PVT__int_X_datin_prdy));
    vlSelfRef.__PVT__fp_X_proc_in_vld = ((IData)(vlSelfRef.__PVT__fp_en_vld) 
                                         & (IData)(vlSelfRef.__PVT__fp16_Y_datin_prdy));
    vlSelfRef.__PVT__fp_Y_proc_in_vld = ((IData)(vlSelfRef.__PVT__fp_en_vld) 
                                         & (IData)(vlSelfRef.__PVT__fp16_X_datin_prdy));
    vlSelfRef.__PVT__load_in_intX = ((IData)(vlSelfRef.__PVT__int_X_proc_in_vld) 
                                     & (IData)(vlSelfRef.__PVT__int_X_datin_prdy));
    vlSelfRef.__PVT__load_din_intY = ((IData)(vlSelfRef.__PVT__int_Y_proc_in_vld) 
                                      & (IData)(vlSelfRef.__PVT__int_Y_datin_prdy));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit2__0(Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<9>/*287:0*/ __Vtemp_10;
    VlWide<9>/*287:0*/ __Vtemp_11;
    VlWide<9>/*287:0*/ __Vtemp_15;
    VlWide<9>/*287:0*/ __Vtemp_16;
    VlWide<4>/*127:0*/ __Vtemp_20;
    VlWide<4>/*127:0*/ __Vtemp_21;
    VlWide<5>/*159:0*/ __Vtemp_25;
    VlWide<5>/*159:0*/ __Vtemp_29;
    VlWide<5>/*159:0*/ __Vtemp_30;
    VlWide<4>/*127:0*/ __Vtemp_32;
    VlWide<4>/*127:0*/ __Vtemp_33;
    VlWide<4>/*127:0*/ __Vtemp_34;
    VlWide<4>/*127:0*/ __Vtemp_35;
    VlWide<9>/*287:0*/ __Vtemp_40;
    VlWide<9>/*287:0*/ __Vtemp_41;
    VlWide<9>/*287:0*/ __Vtemp_45;
    VlWide<9>/*287:0*/ __Vtemp_46;
    VlWide<4>/*127:0*/ __Vtemp_54;
    VlWide<4>/*127:0*/ __Vtemp_55;
    VlWide<5>/*159:0*/ __Vtemp_59;
    VlWide<5>/*159:0*/ __Vtemp_63;
    VlWide<5>/*159:0*/ __Vtemp_64;
    VlWide<13>/*415:0*/ __Vtemp_65;
    VlWide<13>/*415:0*/ __Vtemp_66;
    VlWide<13>/*415:0*/ __Vtemp_73;
    VlWide<13>/*415:0*/ __Vtemp_74;
    // Body
    if (vlSelfRef.__PVT__X_exp) {
        vlSelfRef.__PVT__fp_Xindex_info = (((IData)(
                                                    ((vlSelfRef.__PVT__fp_X_info_d 
                                                      >> 0x00000010U) 
                                                     | (IData)(vlSelfRef.__PVT__fp_X_index_uflow))) 
                                            << 0x00000010U) 
                                           | (0x0000ffffU 
                                              & vlSelfRef.__PVT__fp_X_info_d));
        vlSelfRef.__PVT__shift_bits = 0U;
        vlSelfRef.__PVT__fp_X_frac = (0x0000ffffU & vlSelfRef.__PVT__fp_Xindex_info_d);
    } else {
        vlSelfRef.__PVT__fp_Xindex_info = vlSelfRef.__PVT__fp_X_info_d;
        vlSelfRef.__PVT__shift_bits = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_select;
        vlSelfRef.__PVT__fp_X_frac = (0x0000ffffU & (IData)(vlSelfRef.__PVT__fp_Xshift_frac));
    }
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en) {
        vlSelfRef.dp2lut_Y_pd = (0x000fffffU & (0x000003ffU 
                                                & vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data));
        vlSelfRef.dp2lut_X_pd = vlSelfRef.__PVT__fp_Xshift;
        vlSelfRef.dp2lut_Y_info = (0x0000000fffffffffULL 
                                   & (((QData)((IData)(
                                                       (1U 
                                                        & (vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data 
                                                           >> 0x0000001bU)))) 
                                       << 0x00000022U) 
                                      | (((QData)((IData)(
                                                          (1U 
                                                           & (vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data 
                                                              >> 0x0000001aU)))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           (0x0000ffffU 
                                                            & (vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data 
                                                               >> 0x0000000aU)))))));
        vlSelfRef.dp2lut_pvld = ((IData)(vlSelfRef.__PVT__fp_X_stage2_vld) 
                                 & (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid));
        vlSelfRef.dp2lut_X_info = (((QData)((IData)(vlSelfRef.__PVT__fp_Xshift_oflow)) 
                                    << 0x00000022U) 
                                   | (((QData)((IData)(
                                                       (1U 
                                                        & (vlSelfRef.__PVT__fp_Xindex_info_d 
                                                           >> 0x00000010U)))) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(vlSelfRef.__PVT__fp_X_frac))));
    } else {
        vlSelfRef.dp2lut_Y_pd = (0x000fffffU & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data));
        vlSelfRef.dp2lut_X_pd = (((IData)(vlSelfRef.__PVT__shift_msb_int8) 
                                  << 0x0000000aU) | 
                                 ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en)
                                   ? (IData)(vlSelfRef.__PVT__shift_int16)
                                   : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                       ? (IData)(vlSelfRef.__PVT__shift_lsb_int8)
                                       : 0U)));
        vlSelfRef.dp2lut_Y_info = (0x0000000fffffffffULL 
                                   & (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data 
                                      >> 0x00000014U));
        vlSelfRef.dp2lut_pvld = ((IData)(vlSelfRef.__PVT__int_stage3_pvld) 
                                 & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid));
        vlSelfRef.dp2lut_X_info = (((QData)((IData)(
                                                    (((IData)(vlSelfRef.__PVT__X_int8_oflow_msb) 
                                                      << 3U) 
                                                     | ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en)
                                                           ? (IData)(vlSelfRef.__PVT__X_int16_oflow)
                                                           : 
                                                          ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en) 
                                                           & (IData)(vlSelfRef.__PVT__X_int8_oflow_lsb))) 
                                                         << 2U) 
                                                        | (3U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__dat_info_shift 
                                                                      >> 0x00000020U))))))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     ((((IData)(vlSelfRef.__PVT__X_exp)
                                                         ? (IData)(
                                                                   (vlSelfRef.__PVT__dat_info_shift 
                                                                    >> 0x00000010U))
                                                         : (IData)(vlSelfRef.__PVT__X_lin_frac_int8_msb)) 
                                                       << 0x00000010U) 
                                                      | (0x0000ffffU 
                                                         & ((IData)(vlSelfRef.__PVT__X_exp)
                                                             ? (IData)(vlSelfRef.__PVT__dat_info_shift)
                                                             : 
                                                            ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en)
                                                              ? (IData)(vlSelfRef.__PVT__X_lin_frac_int16)
                                                              : 
                                                             ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                               ? (IData)(vlSelfRef.__PVT__X_lin_frac_int8_lsb)
                                                               : 0U))))))));
    }
    vlSelfRef.__PVT__fp_Xindex_data = ((IData)(vlSelfRef.__PVT__X_exp)
                                        ? (IData)(vlSelfRef.__PVT__fp_Xindex)
                                        : vlSelfRef.__PVT__fp_X_log2_datout_d);
    vlSelfRef.__PVT__dat_info = (((QData)((IData)(vlSelfRef.__PVT__int_X_input_uflow_d)) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & (vlSelfRef.__PVT__log2_frac_msb 
                                                                         << 0x0000000bU)) 
                                                                     | (0x0000ffffU 
                                                                        & (IData)(
                                                                                (vlSelfRef.__PVT__log2_frac_lsb 
                                                                                >> 0x00000015U)))))));
    vlSelfRef.__PVT__dat_info_index_sub = (((QData)((IData)(
                                                            (3U 
                                                             & ((IData)(
                                                                        (vlSelfRef.__PVT__dat_info_d 
                                                                         >> 0x00000020U)) 
                                                                | (((IData)(vlSelfRef.__PVT__int_X_index_uflow_msb) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelfRef.__PVT__int_X_index_uflow_lsb)))))) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSelfRef.__PVT__dat_info_d)));
    vlSelfRef.__PVT__fp_Y_shift_abs = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__PVT__Y_shift_bits))
                                           ? ((IData)(1U) 
                                              + (0x0000007fU 
                                                 & (~ (IData)(vlSelfRef.__PVT__Y_shift_bits))))
                                           : (IData)(vlSelfRef.__PVT__Y_shift_bits)));
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__Y_shift_bits))) {
        vlSelfRef.__PVT__Y_shift_bits_int8_abs = (0x0000001fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0x0000001fU 
                                                      & (~ (IData)(vlSelfRef.__PVT__Y_shift_bits)))));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2972 
            = (0x003fffffffffffffULL & ((QData)((IData)(
                                                        (0x003fffffU 
                                                         & (IData)(vlSelfRef.__PVT__Y_dec_offset_lsb)))) 
                                        << (IData)(vlSelfRef.__PVT__Y_shift_bits_int8_abs)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2973 
            = (0x003fffffffffffffULL & ((QData)((IData)(vlSelfRef.__PVT__Y_dec_offset_msb)) 
                                        << (IData)(vlSelfRef.__PVT__Y_shift_bits_int8_abs)));
    } else {
        vlSelfRef.__PVT__Y_shift_bits_int8_abs = (0x0000001fU 
                                                  & (0x0000001fU 
                                                     & (IData)(vlSelfRef.__PVT__Y_shift_bits)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2972 
            = (0x003fffffffffffffULL & (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (IData)(vlSelfRef.__PVT__Y_dec_offset_lsb)))) 
                                         << 0x00000016U) 
                                        >> (IData)(vlSelfRef.__PVT__Y_shift_bits_int8_abs)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2973 
            = (0x003fffffffffffffULL & (((QData)((IData)(vlSelfRef.__PVT__Y_dec_offset_msb)) 
                                         << 0x00000016U) 
                                        >> (IData)(vlSelfRef.__PVT__Y_shift_bits_int8_abs)));
    }
    __Vtemp_2[0U] = (IData)(vlSelfRef.__PVT__Y_dec_offset_lsb);
    __Vtemp_2[1U] = (IData)((vlSelfRef.__PVT__Y_dec_offset_lsb 
                             >> 0x00000020U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_2[3U] = 0U;
    vlSelfRef.__PVT__Y_shift_bits_int16_abs = (0x0000003fU 
                                               & ((0x00000040U 
                                                   & (IData)(vlSelfRef.__PVT__Y_shift_bits))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x0000003fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__Y_shift_bits))))
                                                   : 
                                                  (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__Y_shift_bits))));
    VL_SHIFTL_WWI(102,102,6, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__Y_shift_bits_int16_abs));
    __Vtemp_4[0U] = 0U;
    __Vtemp_4[1U] = ((IData)(vlSelfRef.__PVT__Y_dec_offset_lsb) 
                     << 6U);
    __Vtemp_4[2U] = (((IData)(vlSelfRef.__PVT__Y_dec_offset_lsb) 
                      >> 0x0000001aU) | ((IData)((vlSelfRef.__PVT__Y_dec_offset_lsb 
                                                  >> 0x00000020U)) 
                                         << 6U));
    __Vtemp_4[3U] = ((IData)((vlSelfRef.__PVT__Y_dec_offset_lsb 
                              >> 0x00000020U)) >> 0x0000001aU);
    VL_SHIFTR_WWI(102,102,6, __Vtemp_5, __Vtemp_4, (IData)(vlSelfRef.__PVT__Y_shift_bits_int16_abs));
    if ((0x00000040U & (IData)(vlSelfRef.__PVT__Y_shift_bits))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2971[0U] 
            = __Vtemp_3[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2971[1U] 
            = __Vtemp_3[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2971[2U] 
            = __Vtemp_3[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2971[3U] 
            = (0x0000003fU & __Vtemp_3[3U]);
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2971[0U] 
            = __Vtemp_5[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2971[1U] 
            = __Vtemp_5[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2971[2U] 
            = __Vtemp_5[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2971[3U] 
            = (0x0000003fU & __Vtemp_5[3U]);
    }
    __Vtemp_10[0U] = 0U;
    __Vtemp_10[1U] = 0U;
    __Vtemp_10[2U] = 0U;
    __Vtemp_10[3U] = 0U;
    __Vtemp_10[4U] = vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0;
    __Vtemp_10[5U] = 0U;
    __Vtemp_10[6U] = 0U;
    __Vtemp_10[7U] = 0U;
    __Vtemp_10[8U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2977 = (0x000001ffU 
                                                   & ((0x7fU 
                                                       <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                       - (IData)(0x007fU))
                                                       : 
                                                      ((IData)(0x007eU) 
                                                       - (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))));
    VL_SHIFTL_WWI(278,278,8, __Vtemp_11, __Vtemp_10, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2977)));
    __Vtemp_15[0U] = 0U;
    __Vtemp_15[1U] = 0U;
    __Vtemp_15[2U] = 0U;
    __Vtemp_15[3U] = (vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0 
                      << 0x0000001fU);
    __Vtemp_15[4U] = (0x00400000U | (vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0 
                                     >> 1U));
    __Vtemp_15[5U] = 0U;
    __Vtemp_15[6U] = 0U;
    __Vtemp_15[7U] = 0U;
    __Vtemp_15[8U] = 0U;
    VL_SHIFTR_WWI(278,278,8, __Vtemp_16, __Vtemp_15, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2977)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2978[0U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[0U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[0U] : __Vtemp_16[0U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2978[1U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[1U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[1U] : __Vtemp_16[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2978[2U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[2U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[2U] : __Vtemp_16[2U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2978[3U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[3U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[3U] : __Vtemp_16[3U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2978[4U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[4U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[4U] : __Vtemp_16[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2978[5U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[5U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[5U] : __Vtemp_16[5U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2978[6U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[6U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[6U] : __Vtemp_16[6U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2978[7U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[7U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[7U] : __Vtemp_16[7U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2978[8U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[8U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[8U] : __Vtemp_16[8U]));
    vlSelfRef.__PVT__fp_X_shift_abs = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__PVT__shift_bits))
                                           ? ((IData)(1U) 
                                              + (0x0000007fU 
                                                 & (~ (IData)(vlSelfRef.__PVT__shift_bits))))
                                           : (IData)(vlSelfRef.__PVT__shift_bits)));
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__shift_bits))) {
        vlSelfRef.__PVT__shift_bits_int8_abs = (0x0000003fU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (0x0000001fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__shift_bits)))));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2967 
            = (0x007fffffffffffffULL & ((QData)((IData)(
                                                        (0x007fffffU 
                                                         & (IData)(vlSelfRef.__PVT__dec_Xindex_lsb)))) 
                                        << (IData)(vlSelfRef.__PVT__shift_bits_int8_abs)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2968 
            = (0x007fffffffffffffULL & ((QData)((IData)(vlSelfRef.__PVT__dec_Xindex_msb)) 
                                        << (IData)(vlSelfRef.__PVT__shift_bits_int8_abs)));
    } else {
        vlSelfRef.__PVT__shift_bits_int8_abs = (0x0000003fU 
                                                & (0x0000001fU 
                                                   & (IData)(vlSelfRef.__PVT__shift_bits)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2967 
            = (0x007fffffffffffffULL & (((QData)((IData)(
                                                         (0x007fffffU 
                                                          & (IData)(vlSelfRef.__PVT__dec_Xindex_lsb)))) 
                                         << 0x00000017U) 
                                        >> (IData)(vlSelfRef.__PVT__shift_bits_int8_abs)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2968 
            = (0x007fffffffffffffULL & (((QData)((IData)(vlSelfRef.__PVT__dec_Xindex_msb)) 
                                         << 0x00000017U) 
                                        >> (IData)(vlSelfRef.__PVT__shift_bits_int8_abs)));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3976 = (
                                                   (~ (IData)(
                                                              (vlSelfRef.dp2lut_Y_info 
                                                               >> 0x00000021U))) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_hybrid_priority));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3980 = (
                                                   (~ (IData)(
                                                              (vlSelfRef.dp2lut_Y_info 
                                                               >> 0x00000020U))) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_hybrid_priority));
    __Vtemp_20[0U] = 1U;
    __Vtemp_20[1U] = 0U;
    __Vtemp_20[2U] = 0U;
    __Vtemp_20[3U] = 0U;
    VL_SHIFTL_WWI(128,128,8, __Vtemp_21, __Vtemp_20, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2977)));
    if ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))) {
        __Vtemp_25[0U] = __Vtemp_21[0U];
        __Vtemp_25[1U] = __Vtemp_21[1U];
        __Vtemp_25[2U] = __Vtemp_21[2U];
        __Vtemp_25[3U] = __Vtemp_21[3U];
    } else {
        __Vtemp_25[0U] = 0U;
        __Vtemp_25[1U] = 0U;
        __Vtemp_25[2U] = 0U;
        __Vtemp_25[3U] = 0U;
    }
    __Vtemp_25[4U] = 0U;
    __Vtemp_29[0U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2978[5U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2978[4U] 
                                 >> 0x00000017U));
    __Vtemp_29[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2978[6U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2978[5U] 
                                 >> 0x00000017U));
    __Vtemp_29[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2978[7U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2978[6U] 
                                 >> 0x00000017U));
    __Vtemp_29[3U] = (0x7fffffffU & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2978[8U] 
                                      << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2978[7U] 
                                                >> 0x00000017U)));
    __Vtemp_29[4U] = 0U;
    VL_ADD_W(5, __Vtemp_30, __Vtemp_25, __Vtemp_29);
    vlSelfRef.__PVT__Y_fp32_int[0U] = __Vtemp_30[0U];
    vlSelfRef.__PVT__Y_fp32_int[1U] = __Vtemp_30[1U];
    vlSelfRef.__PVT__Y_fp32_int[2U] = __Vtemp_30[2U];
    vlSelfRef.__PVT__Y_fp32_int[3U] = __Vtemp_30[3U];
    vlSelfRef.__PVT__Y_fp32_int[4U] = (1U & __Vtemp_30[4U]);
    __Vtemp_32[0U] = (IData)(vlSelfRef.__PVT__dec_Xindex_lsb);
    __Vtemp_32[1U] = (IData)((vlSelfRef.__PVT__dec_Xindex_lsb 
                              >> 0x00000020U));
    __Vtemp_32[2U] = 0U;
    __Vtemp_32[3U] = 0U;
    vlSelfRef.__PVT__shift_bits_int16_abs = (0x0000007fU 
                                             & ((0x00000040U 
                                                 & (IData)(vlSelfRef.__PVT__shift_bits))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (0x0000003fU 
                                                  & (~ (IData)(vlSelfRef.__PVT__shift_bits))))
                                                 : 
                                                (0x0000003fU 
                                                 & (IData)(vlSelfRef.__PVT__shift_bits))));
    VL_SHIFTL_WWI(103,103,7, __Vtemp_33, __Vtemp_32, (IData)(vlSelfRef.__PVT__shift_bits_int16_abs));
    __Vtemp_34[0U] = 0U;
    __Vtemp_34[1U] = ((IData)(vlSelfRef.__PVT__dec_Xindex_lsb) 
                      << 7U);
    __Vtemp_34[2U] = (((IData)(vlSelfRef.__PVT__dec_Xindex_lsb) 
                       >> 0x00000019U) | ((IData)((vlSelfRef.__PVT__dec_Xindex_lsb 
                                                   >> 0x00000020U)) 
                                          << 7U));
    __Vtemp_34[3U] = ((IData)((vlSelfRef.__PVT__dec_Xindex_lsb 
                               >> 0x00000020U)) >> 0x00000019U);
    VL_SHIFTR_WWI(103,103,7, __Vtemp_35, __Vtemp_34, (IData)(vlSelfRef.__PVT__shift_bits_int16_abs));
    if ((0x00000040U & (IData)(vlSelfRef.__PVT__shift_bits))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2966[0U] 
            = __Vtemp_33[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2966[1U] 
            = __Vtemp_33[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2966[2U] 
            = __Vtemp_33[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2966[3U] 
            = (0x0000007fU & __Vtemp_33[3U]);
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2966[0U] 
            = __Vtemp_35[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2966[1U] 
            = __Vtemp_35[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2966[2U] 
            = __Vtemp_35[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2966[3U] 
            = (0x0000007fU & __Vtemp_35[3U]);
    }
    __Vtemp_40[0U] = 0U;
    __Vtemp_40[1U] = 0U;
    __Vtemp_40[2U] = 0U;
    __Vtemp_40[3U] = 0U;
    __Vtemp_40[4U] = (0x007fffffU & vlSelfRef.__PVT__fp_Xindex_data);
    __Vtemp_40[5U] = 0U;
    __Vtemp_40[6U] = 0U;
    __Vtemp_40[7U] = 0U;
    __Vtemp_40[8U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2974 = (0x000001ffU 
                                                   & ((0x7fU 
                                                       <= 
                                                       (0x000000ffU 
                                                        & (vlSelfRef.__PVT__fp_Xindex_data 
                                                           >> 0x00000017U)))
                                                       ? 
                                                      ((0x000000ffU 
                                                        & (vlSelfRef.__PVT__fp_Xindex_data 
                                                           >> 0x00000017U)) 
                                                       - (IData)(0x007fU))
                                                       : 
                                                      ((IData)(0x007eU) 
                                                       - 
                                                       (0x000000ffU 
                                                        & (vlSelfRef.__PVT__fp_Xindex_data 
                                                           >> 0x00000017U)))));
    VL_SHIFTL_WWI(278,278,8, __Vtemp_41, __Vtemp_40, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2974)));
    __Vtemp_45[0U] = 0U;
    __Vtemp_45[1U] = 0U;
    __Vtemp_45[2U] = 0U;
    __Vtemp_45[3U] = (vlSelfRef.__PVT__fp_Xindex_data 
                      << 0x0000001fU);
    __Vtemp_45[4U] = (0x00400000U | (0x003fffffU & 
                                     (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 1U)));
    __Vtemp_45[5U] = 0U;
    __Vtemp_45[6U] = 0U;
    __Vtemp_45[7U] = 0U;
    __Vtemp_45[8U] = 0U;
    VL_SHIFTR_WWI(278,278,8, __Vtemp_46, __Vtemp_45, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2974)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2975[0U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[0U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[0U] : __Vtemp_46[0U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2975[1U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[1U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[1U] : __Vtemp_46[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2975[2U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[2U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[2U] : __Vtemp_46[2U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2975[3U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[3U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[3U] : __Vtemp_46[3U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2975[4U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[4U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[4U] : __Vtemp_46[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2975[5U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[5U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[5U] : __Vtemp_46[5U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2975[6U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[6U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[6U] : __Vtemp_46[6U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2975[7U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[7U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[7U] : __Vtemp_46[7U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2975[8U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[8U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[8U] : __Vtemp_46[8U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3532[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2978[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3532[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2978[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3532[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2978[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3532[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2978[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3532[4U] 
        = ((vlSelfRef.__PVT__Y_fp32_int[0U] << 0x00000017U) 
           | (0x007fffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2978[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3532[5U] 
        = ((vlSelfRef.__PVT__Y_fp32_int[0U] >> 9U) 
           | (vlSelfRef.__PVT__Y_fp32_int[1U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3532[6U] 
        = ((vlSelfRef.__PVT__Y_fp32_int[1U] >> 9U) 
           | (vlSelfRef.__PVT__Y_fp32_int[2U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3532[7U] 
        = ((vlSelfRef.__PVT__Y_fp32_int[2U] >> 9U) 
           | (vlSelfRef.__PVT__Y_fp32_int[3U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3532[8U] 
        = ((vlSelfRef.__PVT__Y_fp32_int[3U] >> 9U) 
           | (vlSelfRef.__PVT__Y_fp32_int[4U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3532[9U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3532[0x0000000aU] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3532[0x0000000bU] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3532[0x0000000cU] = 0U;
    __Vtemp_54[0U] = 1U;
    __Vtemp_54[1U] = 0U;
    __Vtemp_54[2U] = 0U;
    __Vtemp_54[3U] = 0U;
    VL_SHIFTL_WWI(128,128,8, __Vtemp_55, __Vtemp_54, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2974)));
    if ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                  >> 0x00000017U)))) {
        __Vtemp_59[0U] = __Vtemp_55[0U];
        __Vtemp_59[1U] = __Vtemp_55[1U];
        __Vtemp_59[2U] = __Vtemp_55[2U];
        __Vtemp_59[3U] = __Vtemp_55[3U];
    } else {
        __Vtemp_59[0U] = 0U;
        __Vtemp_59[1U] = 0U;
        __Vtemp_59[2U] = 0U;
        __Vtemp_59[3U] = 0U;
    }
    __Vtemp_59[4U] = 0U;
    __Vtemp_63[0U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2975[5U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2975[4U] 
                                 >> 0x00000017U));
    __Vtemp_63[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2975[6U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2975[5U] 
                                 >> 0x00000017U));
    __Vtemp_63[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2975[7U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2975[6U] 
                                 >> 0x00000017U));
    __Vtemp_63[3U] = (0x7fffffffU & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2975[8U] 
                                      << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2975[7U] 
                                                >> 0x00000017U)));
    __Vtemp_63[4U] = 0U;
    VL_ADD_W(5, __Vtemp_64, __Vtemp_59, __Vtemp_63);
    vlSelfRef.__PVT__fp32_int[0U] = __Vtemp_64[0U];
    vlSelfRef.__PVT__fp32_int[1U] = __Vtemp_64[1U];
    vlSelfRef.__PVT__fp32_int[2U] = __Vtemp_64[2U];
    vlSelfRef.__PVT__fp32_int[3U] = __Vtemp_64[3U];
    vlSelfRef.__PVT__fp32_int[4U] = (1U & __Vtemp_64[4U]);
    VL_SHIFTL_WWI(408,408,8, __Vtemp_65, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3532, (IData)(vlSelfRef.__PVT__fp_Y_shift_abs));
    VL_SHIFTR_WWI(408,408,8, __Vtemp_66, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3532, (IData)(vlSelfRef.__PVT__fp_Y_shift_abs));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2979[0U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[0U] : __Vtemp_66[0U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2979[1U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[1U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[1U] : __Vtemp_66[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2979[2U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[2U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[2U] : __Vtemp_66[2U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2979[3U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[3U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[3U] : __Vtemp_66[3U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2979[4U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[4U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[4U] : __Vtemp_66[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2979[5U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[5U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[5U] : __Vtemp_66[5U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2979[6U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[6U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[6U] : __Vtemp_66[6U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2979[7U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[7U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[7U] : __Vtemp_66[7U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2979[8U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[8U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[8U] : __Vtemp_66[8U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2979[9U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[9U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[9U] : __Vtemp_66[9U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2979[0x0000000aU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000aU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
               ? __Vtemp_65[0x0000000aU] : __Vtemp_66[0x0000000aU]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2979[0x0000000bU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000bU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
               ? __Vtemp_65[0x0000000bU] : __Vtemp_66[0x0000000bU]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2979[0x0000000cU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000cU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
               ? __Vtemp_65[0x0000000cU] : __Vtemp_66[0x0000000cU]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3534[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2975[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3534[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2975[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3534[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2975[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3534[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2975[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3534[4U] 
        = ((vlSelfRef.__PVT__fp32_int[0U] << 0x00000017U) 
           | (0x007fffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2975[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3534[5U] 
        = ((vlSelfRef.__PVT__fp32_int[0U] >> 9U) | 
           (vlSelfRef.__PVT__fp32_int[1U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3534[6U] 
        = ((vlSelfRef.__PVT__fp32_int[1U] >> 9U) | 
           (vlSelfRef.__PVT__fp32_int[2U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3534[7U] 
        = ((vlSelfRef.__PVT__fp32_int[2U] >> 9U) | 
           (vlSelfRef.__PVT__fp32_int[3U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3534[8U] 
        = ((vlSelfRef.__PVT__fp32_int[3U] >> 9U) | 
           (vlSelfRef.__PVT__fp32_int[4U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3534[9U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3534[0x0000000aU] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3534[0x0000000bU] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3534[0x0000000cU] = 0U;
    VL_SHIFTL_WWI(408,408,8, __Vtemp_73, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3534, (IData)(vlSelfRef.__PVT__fp_X_shift_abs));
    VL_SHIFTR_WWI(408,408,8, __Vtemp_74, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3534, (IData)(vlSelfRef.__PVT__fp_X_shift_abs));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2976[0U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[0U] : __Vtemp_74[0U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2976[1U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[1U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[1U] : __Vtemp_74[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2976[2U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[2U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[2U] : __Vtemp_74[2U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2976[3U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[3U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[3U] : __Vtemp_74[3U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2976[4U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[4U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[4U] : __Vtemp_74[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2976[5U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[5U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[5U] : __Vtemp_74[5U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2976[6U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[6U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[6U] : __Vtemp_74[6U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2976[7U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[7U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[7U] : __Vtemp_74[7U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2976[8U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[8U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[8U] : __Vtemp_74[8U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2976[9U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[9U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[9U] : __Vtemp_74[9U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2976[0x0000000aU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000aU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
               ? __Vtemp_73[0x0000000aU] : __Vtemp_74[0x0000000aU]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2976[0x0000000bU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000bU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
               ? __Vtemp_73[0x0000000bU] : __Vtemp_74[0x0000000bU]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2976[0x0000000cU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000cU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
               ? __Vtemp_73[0x0000000cU] : __Vtemp_74[0x0000000cU]));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit2__1(Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_2964;
    __VdfgRegularize_h6e95ff9d_0_2964 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_2965;
    __VdfgRegularize_h6e95ff9d_0_2965 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_2969;
    __VdfgRegularize_h6e95ff9d_0_2969 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_2970;
    __VdfgRegularize_h6e95ff9d_0_2970 = 0;
    // Body
    vlSelfRef.__PVT__fp_Y_uflow = (1U & (((0x000000ffU 
                                           == (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23)) 
                                          & (0U != vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0)) 
                                         | ((~ (0U 
                                                != vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d)) 
                                            | (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_31))));
    vlSelfRef.__PVT__fp16_Y_datin_prdy = ((IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                          & (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_X_uflow = (1U & (((0x000000ffU 
                                           == (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23)) 
                                          & (0U != vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0)) 
                                         | ((~ (0U 
                                                != vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d)) 
                                            | (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_31))));
    vlSelfRef.__PVT__fp16_X_datin_prdy = ((IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                          & (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__datin_int8_msb = (0x001fffffU 
                                       & ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en))) 
                                          & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[3U] 
                                              << 0x00000017U) 
                                             | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[3U] 
                                                >> 9U))));
    vlSelfRef.__PVT__datin_int8_lsb = (0x001fffffU 
                                       & ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en))) 
                                          & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[3U] 
                                              << 0x0000000cU) 
                                             | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[2U] 
                                                >> 0x00000014U))));
    vlSelfRef.__PVT__datin_int16 = (0x0000001fffffffffULL 
                                    & ((- (QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en))) 
                                       & (((QData)((IData)(
                                                           vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[3U])) 
                                           << 0x0000002cU) 
                                          | (((QData)((IData)(
                                                              vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[3U])) 
                                              << 0x0000000cU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[2U])) 
                                                >> 0x00000014U)))));
    if (vlSelfRef.__PVT__fp_X_uflow) {
        vlSelfRef.__PVT__fp_log2_datin = 0U;
        vlSelfRef.__PVT__fp_X_exp_frac = 0U;
        vlSelfRef.__PVT__fp_X_log2_datout = 0U;
    } else {
        vlSelfRef.__PVT__fp_log2_datin = vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
        if (vlSelfRef.__PVT__X_exp) {
            if ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_log2_datin 
                                          >> 0x17U)))) {
                vlSelfRef.__PVT__fp_X_exp_frac = (0x0000ffffU 
                                                  & (vlSelfRef.__PVT__fp_log2_datin 
                                                     >> 7U));
                vlSelfRef.__PVT__fp_X_log2_datout = 
                    ((0x000000ffU & (vlSelfRef.__PVT__fp_log2_datin 
                                     >> 0x17U)) - (IData)(0x0000007fU));
            } else {
                vlSelfRef.__PVT__fp_X_exp_frac = (0x0000ffffU 
                                                  & (vlSelfRef.__PVT__fp_log2_datin 
                                                     >> 7U));
                vlSelfRef.__PVT__fp_X_log2_datout = 
                    (((- (IData)((1U & (((IData)(1U) 
                                         + (~ ((0x7fU 
                                                > (0x000000ffU 
                                                   & (vlSelfRef.__PVT__fp_log2_datin 
                                                      >> 0x00000017U)))
                                                ? (0x0000007fU 
                                                   & ((IData)(0x007fU) 
                                                      - 
                                                      (0x000000ffU 
                                                       & (vlSelfRef.__PVT__fp_log2_datin 
                                                          >> 0x00000017U))))
                                                : 0U))) 
                                        >> 7U)))) << 8U) 
                     | (0x000000ffU & ((IData)(1U) 
                                       + (~ ((0x7fU 
                                              > (0x000000ffU 
                                                 & (vlSelfRef.__PVT__fp_log2_datin 
                                                    >> 0x00000017U)))
                                              ? (0x0000007fU 
                                                 & ((IData)(0x007fU) 
                                                    - 
                                                    (0x000000ffU 
                                                     & (vlSelfRef.__PVT__fp_log2_datin 
                                                        >> 0x00000017U))))
                                              : 0U)))));
            }
        } else {
            vlSelfRef.__PVT__fp_X_exp_frac = 0U;
            vlSelfRef.__PVT__fp_X_log2_datout = vlSelfRef.__PVT__fp_log2_datin;
        }
    }
    if (vlSelfRef.__PVT__sqsum_bypass_enable) {
        vlSelfRef.__PVT__dec_offset_datin_msb = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                  ? 
                                                 ((0x00200000U 
                                                   & (vlSelfRef.__PVT__datin_int8_msb 
                                                      << 1U)) 
                                                  | vlSelfRef.__PVT__datin_int8_msb)
                                                  : 0U);
        vlSelfRef.__PVT__dec_offset_datin_lsb = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelfRef.__PVT__datin_int16 
                                                                               >> 0x00000024U))))) 
                                                   << 0x00000025U) 
                                                  | vlSelfRef.__PVT__datin_int16)
                                                  : 
                                                 ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__datin_int8_lsb 
                                                                                >> 0x00000014U))))))) 
                                                    << 0x00000015U) 
                                                   | (QData)((IData)(vlSelfRef.__PVT__datin_int8_lsb)))
                                                   : 0ULL));
    } else {
        vlSelfRef.__PVT__dec_offset_datin_msb = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                  ? vlSelfRef.__PVT__datin_int8_msb
                                                  : 0U);
        vlSelfRef.__PVT__dec_offset_datin_lsb = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en)
                                                  ? vlSelfRef.__PVT__datin_int16
                                                  : 
                                                 ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                   ? (QData)((IData)(vlSelfRef.__PVT__datin_int8_lsb))
                                                   : 0ULL));
    }
    __VdfgRegularize_h6e95ff9d_0_2965 = ((2U & (vlSelfRef.__PVT__dec_offset_datin_msb 
                                                >> 0x00000014U)) 
                                         | (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_start_low 
                                                  >> 0x00000015U)));
    __VdfgRegularize_h6e95ff9d_0_2970 = ((2U & (vlSelfRef.__PVT__dec_offset_datin_msb 
                                                >> 0x00000014U)) 
                                         | (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_start_low 
                                                  >> 0x00000015U)));
    __VdfgRegularize_h6e95ff9d_0_2964 = ((2U & ((IData)(
                                                        (vlSelfRef.__PVT__dec_offset_datin_lsb 
                                                         >> 0x00000025U)) 
                                                << 1U)) 
                                         | (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_start_high) 
                                                  >> 5U)));
    __VdfgRegularize_h6e95ff9d_0_2969 = ((2U & ((IData)(
                                                        (vlSelfRef.__PVT__dec_offset_datin_lsb 
                                                         >> 0x00000025U)) 
                                                << 1U)) 
                                         | (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_start_high) 
                                                  >> 5U)));
    vlSelfRef.__PVT__fp_X_info = (((IData)(vlSelfRef.__PVT__fp_X_uflow) 
                                   << 0x00000010U) 
                                  | (IData)(vlSelfRef.__PVT__fp_X_exp_frac));
    vlSelfRef.__PVT__same_sign = ((1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset) 
                                         >> 7U)) == 
                                  (1U & (vlSelfRef.__PVT__fp_X_log2_datout 
                                         >> 7U)));
    vlSelfRef.__PVT__less_than_start = ((0x0000007fU 
                                         & vlSelfRef.__PVT__fp_X_log2_datout) 
                                        < (0x0000007fU 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset)));
    vlSelfRef.__PVT__less_than_win_s = ((1U != (IData)(__VdfgRegularize_h6e95ff9d_0_2965)) 
                                        & ((2U == (IData)(__VdfgRegularize_h6e95ff9d_0_2965)) 
                                           | ((vlSelfRef.__PVT__dec_offset_datin_msb 
                                               < (0x003fffffU 
                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_start_low)) 
                                              | (vlSelfRef.__PVT__dec_offset_datin_msb 
                                                 == 
                                                 (0x003fffffU 
                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_start_low)))));
    vlSelfRef.__PVT__Y_less_than_win_s = ((1U != (IData)(__VdfgRegularize_h6e95ff9d_0_2970)) 
                                          & ((2U == (IData)(__VdfgRegularize_h6e95ff9d_0_2970)) 
                                             | ((vlSelfRef.__PVT__dec_offset_datin_msb 
                                                 < 
                                                 (0x003fffffU 
                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_start_low)) 
                                                | (vlSelfRef.__PVT__dec_offset_datin_msb 
                                                   == 
                                                   (0x003fffffU 
                                                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_start_low)))));
    vlSelfRef.__PVT__less_than_win_start = ((1U != (IData)(__VdfgRegularize_h6e95ff9d_0_2964)) 
                                            & ((2U 
                                                == (IData)(__VdfgRegularize_h6e95ff9d_0_2964)) 
                                               | ((vlSelfRef.__PVT__dec_offset_datin_lsb 
                                                   < vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_le_start) 
                                                  | (vlSelfRef.__PVT__dec_offset_datin_lsb 
                                                     == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_le_start))));
    vlSelfRef.__PVT__Y_less_than_win_start = ((1U != (IData)(__VdfgRegularize_h6e95ff9d_0_2969)) 
                                              & ((2U 
                                                  == (IData)(__VdfgRegularize_h6e95ff9d_0_2969)) 
                                                 | ((vlSelfRef.__PVT__dec_offset_datin_lsb 
                                                     < vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_lo_start) 
                                                    | (vlSelfRef.__PVT__dec_offset_datin_lsb 
                                                       == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_lo_start))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit2__3(Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit2__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sum2itp_pvld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_3) 
                              & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit1.sum2itp_prdy) 
                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_10)));
    vlSelfRef.__PVT__fp_Y_stage0_load = ((IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__fp_X_stage0_load = ((IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__int_en_vld = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)) 
                                   & (IData)(vlSelfRef.sum2itp_pvld));
    vlSelfRef.__PVT__fp_en_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en) 
                                  & (IData)(vlSelfRef.sum2itp_pvld));
    vlSelfRef.__PVT__int_X_proc_in_vld = ((IData)(vlSelfRef.__PVT__int_en_vld) 
                                          & (IData)(vlSelfRef.__PVT__int_Y_datin_prdy));
    vlSelfRef.__PVT__int_Y_proc_in_vld = ((IData)(vlSelfRef.__PVT__int_en_vld) 
                                          & (IData)(vlSelfRef.__PVT__int_X_datin_prdy));
    vlSelfRef.__PVT__fp_X_proc_in_vld = ((IData)(vlSelfRef.__PVT__fp_en_vld) 
                                         & (IData)(vlSelfRef.__PVT__fp16_Y_datin_prdy));
    vlSelfRef.__PVT__fp_Y_proc_in_vld = ((IData)(vlSelfRef.__PVT__fp_en_vld) 
                                         & (IData)(vlSelfRef.__PVT__fp16_X_datin_prdy));
    vlSelfRef.__PVT__load_in_intX = ((IData)(vlSelfRef.__PVT__int_X_proc_in_vld) 
                                     & (IData)(vlSelfRef.__PVT__int_X_datin_prdy));
    vlSelfRef.__PVT__load_din_intY = ((IData)(vlSelfRef.__PVT__int_Y_proc_in_vld) 
                                      & (IData)(vlSelfRef.__PVT__int_Y_datin_prdy));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__0(Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<9>/*287:0*/ __Vtemp_10;
    VlWide<9>/*287:0*/ __Vtemp_11;
    VlWide<9>/*287:0*/ __Vtemp_15;
    VlWide<9>/*287:0*/ __Vtemp_16;
    VlWide<4>/*127:0*/ __Vtemp_20;
    VlWide<4>/*127:0*/ __Vtemp_21;
    VlWide<5>/*159:0*/ __Vtemp_25;
    VlWide<5>/*159:0*/ __Vtemp_29;
    VlWide<5>/*159:0*/ __Vtemp_30;
    VlWide<4>/*127:0*/ __Vtemp_32;
    VlWide<4>/*127:0*/ __Vtemp_33;
    VlWide<4>/*127:0*/ __Vtemp_34;
    VlWide<4>/*127:0*/ __Vtemp_35;
    VlWide<9>/*287:0*/ __Vtemp_40;
    VlWide<9>/*287:0*/ __Vtemp_41;
    VlWide<9>/*287:0*/ __Vtemp_45;
    VlWide<9>/*287:0*/ __Vtemp_46;
    VlWide<4>/*127:0*/ __Vtemp_54;
    VlWide<4>/*127:0*/ __Vtemp_55;
    VlWide<5>/*159:0*/ __Vtemp_59;
    VlWide<5>/*159:0*/ __Vtemp_63;
    VlWide<5>/*159:0*/ __Vtemp_64;
    VlWide<13>/*415:0*/ __Vtemp_65;
    VlWide<13>/*415:0*/ __Vtemp_66;
    VlWide<13>/*415:0*/ __Vtemp_73;
    VlWide<13>/*415:0*/ __Vtemp_74;
    // Body
    if (vlSelfRef.__PVT__X_exp) {
        vlSelfRef.__PVT__fp_Xindex_info = (((IData)(
                                                    ((vlSelfRef.__PVT__fp_X_info_d 
                                                      >> 0x00000010U) 
                                                     | (IData)(vlSelfRef.__PVT__fp_X_index_uflow))) 
                                            << 0x00000010U) 
                                           | (0x0000ffffU 
                                              & vlSelfRef.__PVT__fp_X_info_d));
        vlSelfRef.__PVT__shift_bits = 0U;
        vlSelfRef.__PVT__fp_X_frac = (0x0000ffffU & vlSelfRef.__PVT__fp_Xindex_info_d);
    } else {
        vlSelfRef.__PVT__fp_Xindex_info = vlSelfRef.__PVT__fp_X_info_d;
        vlSelfRef.__PVT__shift_bits = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_select;
        vlSelfRef.__PVT__fp_X_frac = (0x0000ffffU & (IData)(vlSelfRef.__PVT__fp_Xshift_frac));
    }
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en) {
        vlSelfRef.dp2lut_Y_pd = (0x000fffffU & (0x000003ffU 
                                                & vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data));
        vlSelfRef.dp2lut_X_pd = vlSelfRef.__PVT__fp_Xshift;
        vlSelfRef.dp2lut_Y_info = (0x0000000fffffffffULL 
                                   & (((QData)((IData)(
                                                       (1U 
                                                        & (vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data 
                                                           >> 0x0000001bU)))) 
                                       << 0x00000022U) 
                                      | (((QData)((IData)(
                                                          (1U 
                                                           & (vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data 
                                                              >> 0x0000001aU)))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           (0x0000ffffU 
                                                            & (vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data 
                                                               >> 0x0000000aU)))))));
        vlSelfRef.dp2lut_pvld = ((IData)(vlSelfRef.__PVT__fp_X_stage2_vld) 
                                 & (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid));
        vlSelfRef.dp2lut_X_info = (((QData)((IData)(vlSelfRef.__PVT__fp_Xshift_oflow)) 
                                    << 0x00000022U) 
                                   | (((QData)((IData)(
                                                       (1U 
                                                        & (vlSelfRef.__PVT__fp_Xindex_info_d 
                                                           >> 0x00000010U)))) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(vlSelfRef.__PVT__fp_X_frac))));
    } else {
        vlSelfRef.dp2lut_Y_pd = (0x000fffffU & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data));
        vlSelfRef.dp2lut_X_pd = (((IData)(vlSelfRef.__PVT__shift_msb_int8) 
                                  << 0x0000000aU) | 
                                 ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en)
                                   ? (IData)(vlSelfRef.__PVT__shift_int16)
                                   : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                       ? (IData)(vlSelfRef.__PVT__shift_lsb_int8)
                                       : 0U)));
        vlSelfRef.dp2lut_Y_info = (0x0000000fffffffffULL 
                                   & (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data 
                                      >> 0x00000014U));
        vlSelfRef.dp2lut_pvld = ((IData)(vlSelfRef.__PVT__int_stage3_pvld) 
                                 & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid));
        vlSelfRef.dp2lut_X_info = (((QData)((IData)(
                                                    (((IData)(vlSelfRef.__PVT__X_int8_oflow_msb) 
                                                      << 3U) 
                                                     | ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en)
                                                           ? (IData)(vlSelfRef.__PVT__X_int16_oflow)
                                                           : 
                                                          ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en) 
                                                           & (IData)(vlSelfRef.__PVT__X_int8_oflow_lsb))) 
                                                         << 2U) 
                                                        | (3U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__dat_info_shift 
                                                                      >> 0x00000020U))))))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     ((((IData)(vlSelfRef.__PVT__X_exp)
                                                         ? (IData)(
                                                                   (vlSelfRef.__PVT__dat_info_shift 
                                                                    >> 0x00000010U))
                                                         : (IData)(vlSelfRef.__PVT__X_lin_frac_int8_msb)) 
                                                       << 0x00000010U) 
                                                      | (0x0000ffffU 
                                                         & ((IData)(vlSelfRef.__PVT__X_exp)
                                                             ? (IData)(vlSelfRef.__PVT__dat_info_shift)
                                                             : 
                                                            ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en)
                                                              ? (IData)(vlSelfRef.__PVT__X_lin_frac_int16)
                                                              : 
                                                             ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                               ? (IData)(vlSelfRef.__PVT__X_lin_frac_int8_lsb)
                                                               : 0U))))))));
    }
    vlSelfRef.__PVT__fp_Xindex_data = ((IData)(vlSelfRef.__PVT__X_exp)
                                        ? (IData)(vlSelfRef.__PVT__fp_Xindex)
                                        : vlSelfRef.__PVT__fp_X_log2_datout_d);
    vlSelfRef.__PVT__dat_info = (((QData)((IData)(vlSelfRef.__PVT__int_X_input_uflow_d)) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & (vlSelfRef.__PVT__log2_frac_msb 
                                                                         << 0x0000000bU)) 
                                                                     | (0x0000ffffU 
                                                                        & (IData)(
                                                                                (vlSelfRef.__PVT__log2_frac_lsb 
                                                                                >> 0x00000015U)))))));
    vlSelfRef.__PVT__dat_info_index_sub = (((QData)((IData)(
                                                            (3U 
                                                             & ((IData)(
                                                                        (vlSelfRef.__PVT__dat_info_d 
                                                                         >> 0x00000020U)) 
                                                                | (((IData)(vlSelfRef.__PVT__int_X_index_uflow_msb) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelfRef.__PVT__int_X_index_uflow_lsb)))))) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSelfRef.__PVT__dat_info_d)));
    vlSelfRef.__PVT__fp_Y_shift_abs = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__PVT__Y_shift_bits))
                                           ? ((IData)(1U) 
                                              + (0x0000007fU 
                                                 & (~ (IData)(vlSelfRef.__PVT__Y_shift_bits))))
                                           : (IData)(vlSelfRef.__PVT__Y_shift_bits)));
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__Y_shift_bits))) {
        vlSelfRef.__PVT__Y_shift_bits_int8_abs = (0x0000001fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0x0000001fU 
                                                      & (~ (IData)(vlSelfRef.__PVT__Y_shift_bits)))));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2988 
            = (0x003fffffffffffffULL & ((QData)((IData)(
                                                        (0x003fffffU 
                                                         & (IData)(vlSelfRef.__PVT__Y_dec_offset_lsb)))) 
                                        << (IData)(vlSelfRef.__PVT__Y_shift_bits_int8_abs)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2989 
            = (0x003fffffffffffffULL & ((QData)((IData)(vlSelfRef.__PVT__Y_dec_offset_msb)) 
                                        << (IData)(vlSelfRef.__PVT__Y_shift_bits_int8_abs)));
    } else {
        vlSelfRef.__PVT__Y_shift_bits_int8_abs = (0x0000001fU 
                                                  & (0x0000001fU 
                                                     & (IData)(vlSelfRef.__PVT__Y_shift_bits)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2988 
            = (0x003fffffffffffffULL & (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (IData)(vlSelfRef.__PVT__Y_dec_offset_lsb)))) 
                                         << 0x00000016U) 
                                        >> (IData)(vlSelfRef.__PVT__Y_shift_bits_int8_abs)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2989 
            = (0x003fffffffffffffULL & (((QData)((IData)(vlSelfRef.__PVT__Y_dec_offset_msb)) 
                                         << 0x00000016U) 
                                        >> (IData)(vlSelfRef.__PVT__Y_shift_bits_int8_abs)));
    }
    __Vtemp_2[0U] = (IData)(vlSelfRef.__PVT__Y_dec_offset_lsb);
    __Vtemp_2[1U] = (IData)((vlSelfRef.__PVT__Y_dec_offset_lsb 
                             >> 0x00000020U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_2[3U] = 0U;
    vlSelfRef.__PVT__Y_shift_bits_int16_abs = (0x0000003fU 
                                               & ((0x00000040U 
                                                   & (IData)(vlSelfRef.__PVT__Y_shift_bits))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x0000003fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__Y_shift_bits))))
                                                   : 
                                                  (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__Y_shift_bits))));
    VL_SHIFTL_WWI(102,102,6, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__Y_shift_bits_int16_abs));
    __Vtemp_4[0U] = 0U;
    __Vtemp_4[1U] = ((IData)(vlSelfRef.__PVT__Y_dec_offset_lsb) 
                     << 6U);
    __Vtemp_4[2U] = (((IData)(vlSelfRef.__PVT__Y_dec_offset_lsb) 
                      >> 0x0000001aU) | ((IData)((vlSelfRef.__PVT__Y_dec_offset_lsb 
                                                  >> 0x00000020U)) 
                                         << 6U));
    __Vtemp_4[3U] = ((IData)((vlSelfRef.__PVT__Y_dec_offset_lsb 
                              >> 0x00000020U)) >> 0x0000001aU);
    VL_SHIFTR_WWI(102,102,6, __Vtemp_5, __Vtemp_4, (IData)(vlSelfRef.__PVT__Y_shift_bits_int16_abs));
    if ((0x00000040U & (IData)(vlSelfRef.__PVT__Y_shift_bits))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2987[0U] 
            = __Vtemp_3[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2987[1U] 
            = __Vtemp_3[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2987[2U] 
            = __Vtemp_3[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2987[3U] 
            = (0x0000003fU & __Vtemp_3[3U]);
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2987[0U] 
            = __Vtemp_5[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2987[1U] 
            = __Vtemp_5[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2987[2U] 
            = __Vtemp_5[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2987[3U] 
            = (0x0000003fU & __Vtemp_5[3U]);
    }
    __Vtemp_10[0U] = 0U;
    __Vtemp_10[1U] = 0U;
    __Vtemp_10[2U] = 0U;
    __Vtemp_10[3U] = 0U;
    __Vtemp_10[4U] = vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0;
    __Vtemp_10[5U] = 0U;
    __Vtemp_10[6U] = 0U;
    __Vtemp_10[7U] = 0U;
    __Vtemp_10[8U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2993 = (0x000001ffU 
                                                   & ((0x7fU 
                                                       <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                       - (IData)(0x007fU))
                                                       : 
                                                      ((IData)(0x007eU) 
                                                       - (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))));
    VL_SHIFTL_WWI(278,278,8, __Vtemp_11, __Vtemp_10, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2993)));
    __Vtemp_15[0U] = 0U;
    __Vtemp_15[1U] = 0U;
    __Vtemp_15[2U] = 0U;
    __Vtemp_15[3U] = (vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0 
                      << 0x0000001fU);
    __Vtemp_15[4U] = (0x00400000U | (vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0 
                                     >> 1U));
    __Vtemp_15[5U] = 0U;
    __Vtemp_15[6U] = 0U;
    __Vtemp_15[7U] = 0U;
    __Vtemp_15[8U] = 0U;
    VL_SHIFTR_WWI(278,278,8, __Vtemp_16, __Vtemp_15, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2993)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[0U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[0U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[0U] : __Vtemp_16[0U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[1U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[1U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[1U] : __Vtemp_16[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[2U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[2U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[2U] : __Vtemp_16[2U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[3U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[3U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[3U] : __Vtemp_16[3U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[4U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[4U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[4U] : __Vtemp_16[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[5U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[5U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[5U] : __Vtemp_16[5U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[6U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[6U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[6U] : __Vtemp_16[6U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[7U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[7U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[7U] : __Vtemp_16[7U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[8U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[8U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_11[8U] : __Vtemp_16[8U]));
    vlSelfRef.__PVT__fp_X_shift_abs = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__PVT__shift_bits))
                                           ? ((IData)(1U) 
                                              + (0x0000007fU 
                                                 & (~ (IData)(vlSelfRef.__PVT__shift_bits))))
                                           : (IData)(vlSelfRef.__PVT__shift_bits)));
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__shift_bits))) {
        vlSelfRef.__PVT__shift_bits_int8_abs = (0x0000003fU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (0x0000001fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__shift_bits)))));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2983 
            = (0x007fffffffffffffULL & ((QData)((IData)(
                                                        (0x007fffffU 
                                                         & (IData)(vlSelfRef.__PVT__dec_Xindex_lsb)))) 
                                        << (IData)(vlSelfRef.__PVT__shift_bits_int8_abs)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2984 
            = (0x007fffffffffffffULL & ((QData)((IData)(vlSelfRef.__PVT__dec_Xindex_msb)) 
                                        << (IData)(vlSelfRef.__PVT__shift_bits_int8_abs)));
    } else {
        vlSelfRef.__PVT__shift_bits_int8_abs = (0x0000003fU 
                                                & (0x0000001fU 
                                                   & (IData)(vlSelfRef.__PVT__shift_bits)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2983 
            = (0x007fffffffffffffULL & (((QData)((IData)(
                                                         (0x007fffffU 
                                                          & (IData)(vlSelfRef.__PVT__dec_Xindex_lsb)))) 
                                         << 0x00000017U) 
                                        >> (IData)(vlSelfRef.__PVT__shift_bits_int8_abs)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2984 
            = (0x007fffffffffffffULL & (((QData)((IData)(vlSelfRef.__PVT__dec_Xindex_msb)) 
                                         << 0x00000017U) 
                                        >> (IData)(vlSelfRef.__PVT__shift_bits_int8_abs)));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3975 = (
                                                   (~ (IData)(
                                                              (vlSelfRef.dp2lut_Y_info 
                                                               >> 0x00000021U))) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_hybrid_priority));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3979 = (
                                                   (~ (IData)(
                                                              (vlSelfRef.dp2lut_Y_info 
                                                               >> 0x00000020U))) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_hybrid_priority));
    __Vtemp_20[0U] = 1U;
    __Vtemp_20[1U] = 0U;
    __Vtemp_20[2U] = 0U;
    __Vtemp_20[3U] = 0U;
    VL_SHIFTL_WWI(128,128,8, __Vtemp_21, __Vtemp_20, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2993)));
    if ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))) {
        __Vtemp_25[0U] = __Vtemp_21[0U];
        __Vtemp_25[1U] = __Vtemp_21[1U];
        __Vtemp_25[2U] = __Vtemp_21[2U];
        __Vtemp_25[3U] = __Vtemp_21[3U];
    } else {
        __Vtemp_25[0U] = 0U;
        __Vtemp_25[1U] = 0U;
        __Vtemp_25[2U] = 0U;
        __Vtemp_25[3U] = 0U;
    }
    __Vtemp_25[4U] = 0U;
    __Vtemp_29[0U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[5U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[4U] 
                                 >> 0x00000017U));
    __Vtemp_29[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[6U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[5U] 
                                 >> 0x00000017U));
    __Vtemp_29[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[7U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[6U] 
                                 >> 0x00000017U));
    __Vtemp_29[3U] = (0x7fffffffU & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[8U] 
                                      << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[7U] 
                                                >> 0x00000017U)));
    __Vtemp_29[4U] = 0U;
    VL_ADD_W(5, __Vtemp_30, __Vtemp_25, __Vtemp_29);
    vlSelfRef.__PVT__Y_fp32_int[0U] = __Vtemp_30[0U];
    vlSelfRef.__PVT__Y_fp32_int[1U] = __Vtemp_30[1U];
    vlSelfRef.__PVT__Y_fp32_int[2U] = __Vtemp_30[2U];
    vlSelfRef.__PVT__Y_fp32_int[3U] = __Vtemp_30[3U];
    vlSelfRef.__PVT__Y_fp32_int[4U] = (1U & __Vtemp_30[4U]);
    __Vtemp_32[0U] = (IData)(vlSelfRef.__PVT__dec_Xindex_lsb);
    __Vtemp_32[1U] = (IData)((vlSelfRef.__PVT__dec_Xindex_lsb 
                              >> 0x00000020U));
    __Vtemp_32[2U] = 0U;
    __Vtemp_32[3U] = 0U;
    vlSelfRef.__PVT__shift_bits_int16_abs = (0x0000007fU 
                                             & ((0x00000040U 
                                                 & (IData)(vlSelfRef.__PVT__shift_bits))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (0x0000003fU 
                                                  & (~ (IData)(vlSelfRef.__PVT__shift_bits))))
                                                 : 
                                                (0x0000003fU 
                                                 & (IData)(vlSelfRef.__PVT__shift_bits))));
    VL_SHIFTL_WWI(103,103,7, __Vtemp_33, __Vtemp_32, (IData)(vlSelfRef.__PVT__shift_bits_int16_abs));
    __Vtemp_34[0U] = 0U;
    __Vtemp_34[1U] = ((IData)(vlSelfRef.__PVT__dec_Xindex_lsb) 
                      << 7U);
    __Vtemp_34[2U] = (((IData)(vlSelfRef.__PVT__dec_Xindex_lsb) 
                       >> 0x00000019U) | ((IData)((vlSelfRef.__PVT__dec_Xindex_lsb 
                                                   >> 0x00000020U)) 
                                          << 7U));
    __Vtemp_34[3U] = ((IData)((vlSelfRef.__PVT__dec_Xindex_lsb 
                               >> 0x00000020U)) >> 0x00000019U);
    VL_SHIFTR_WWI(103,103,7, __Vtemp_35, __Vtemp_34, (IData)(vlSelfRef.__PVT__shift_bits_int16_abs));
    if ((0x00000040U & (IData)(vlSelfRef.__PVT__shift_bits))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982[0U] 
            = __Vtemp_33[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982[1U] 
            = __Vtemp_33[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982[2U] 
            = __Vtemp_33[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982[3U] 
            = (0x0000007fU & __Vtemp_33[3U]);
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982[0U] 
            = __Vtemp_35[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982[1U] 
            = __Vtemp_35[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982[2U] 
            = __Vtemp_35[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982[3U] 
            = (0x0000007fU & __Vtemp_35[3U]);
    }
    __Vtemp_40[0U] = 0U;
    __Vtemp_40[1U] = 0U;
    __Vtemp_40[2U] = 0U;
    __Vtemp_40[3U] = 0U;
    __Vtemp_40[4U] = (0x007fffffU & vlSelfRef.__PVT__fp_Xindex_data);
    __Vtemp_40[5U] = 0U;
    __Vtemp_40[6U] = 0U;
    __Vtemp_40[7U] = 0U;
    __Vtemp_40[8U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2990 = (0x000001ffU 
                                                   & ((0x7fU 
                                                       <= 
                                                       (0x000000ffU 
                                                        & (vlSelfRef.__PVT__fp_Xindex_data 
                                                           >> 0x00000017U)))
                                                       ? 
                                                      ((0x000000ffU 
                                                        & (vlSelfRef.__PVT__fp_Xindex_data 
                                                           >> 0x00000017U)) 
                                                       - (IData)(0x007fU))
                                                       : 
                                                      ((IData)(0x007eU) 
                                                       - 
                                                       (0x000000ffU 
                                                        & (vlSelfRef.__PVT__fp_Xindex_data 
                                                           >> 0x00000017U)))));
    VL_SHIFTL_WWI(278,278,8, __Vtemp_41, __Vtemp_40, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2990)));
    __Vtemp_45[0U] = 0U;
    __Vtemp_45[1U] = 0U;
    __Vtemp_45[2U] = 0U;
    __Vtemp_45[3U] = (vlSelfRef.__PVT__fp_Xindex_data 
                      << 0x0000001fU);
    __Vtemp_45[4U] = (0x00400000U | (0x003fffffU & 
                                     (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 1U)));
    __Vtemp_45[5U] = 0U;
    __Vtemp_45[6U] = 0U;
    __Vtemp_45[7U] = 0U;
    __Vtemp_45[8U] = 0U;
    VL_SHIFTR_WWI(278,278,8, __Vtemp_46, __Vtemp_45, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2990)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[0U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[0U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[0U] : __Vtemp_46[0U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[1U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[1U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[1U] : __Vtemp_46[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[2U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[2U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[2U] : __Vtemp_46[2U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[3U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[3U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[3U] : __Vtemp_46[3U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[4U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[4U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[4U] : __Vtemp_46[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[5U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[5U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[5U] : __Vtemp_46[5U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[6U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[6U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[6U] : __Vtemp_46[6U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[7U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[7U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[7U] : __Vtemp_46[7U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[8U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[8U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_41[8U] : __Vtemp_46[8U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3529[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3529[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3529[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3529[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3529[4U] 
        = ((vlSelfRef.__PVT__Y_fp32_int[0U] << 0x00000017U) 
           | (0x007fffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3529[5U] 
        = ((vlSelfRef.__PVT__Y_fp32_int[0U] >> 9U) 
           | (vlSelfRef.__PVT__Y_fp32_int[1U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3529[6U] 
        = ((vlSelfRef.__PVT__Y_fp32_int[1U] >> 9U) 
           | (vlSelfRef.__PVT__Y_fp32_int[2U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3529[7U] 
        = ((vlSelfRef.__PVT__Y_fp32_int[2U] >> 9U) 
           | (vlSelfRef.__PVT__Y_fp32_int[3U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3529[8U] 
        = ((vlSelfRef.__PVT__Y_fp32_int[3U] >> 9U) 
           | (vlSelfRef.__PVT__Y_fp32_int[4U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3529[9U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3529[0x0000000aU] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3529[0x0000000bU] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3529[0x0000000cU] = 0U;
    __Vtemp_54[0U] = 1U;
    __Vtemp_54[1U] = 0U;
    __Vtemp_54[2U] = 0U;
    __Vtemp_54[3U] = 0U;
    VL_SHIFTL_WWI(128,128,8, __Vtemp_55, __Vtemp_54, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2990)));
    if ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                  >> 0x00000017U)))) {
        __Vtemp_59[0U] = __Vtemp_55[0U];
        __Vtemp_59[1U] = __Vtemp_55[1U];
        __Vtemp_59[2U] = __Vtemp_55[2U];
        __Vtemp_59[3U] = __Vtemp_55[3U];
    } else {
        __Vtemp_59[0U] = 0U;
        __Vtemp_59[1U] = 0U;
        __Vtemp_59[2U] = 0U;
        __Vtemp_59[3U] = 0U;
    }
    __Vtemp_59[4U] = 0U;
    __Vtemp_63[0U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[5U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[4U] 
                                 >> 0x00000017U));
    __Vtemp_63[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[6U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[5U] 
                                 >> 0x00000017U));
    __Vtemp_63[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[7U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[6U] 
                                 >> 0x00000017U));
    __Vtemp_63[3U] = (0x7fffffffU & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[8U] 
                                      << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[7U] 
                                                >> 0x00000017U)));
    __Vtemp_63[4U] = 0U;
    VL_ADD_W(5, __Vtemp_64, __Vtemp_59, __Vtemp_63);
    vlSelfRef.__PVT__fp32_int[0U] = __Vtemp_64[0U];
    vlSelfRef.__PVT__fp32_int[1U] = __Vtemp_64[1U];
    vlSelfRef.__PVT__fp32_int[2U] = __Vtemp_64[2U];
    vlSelfRef.__PVT__fp32_int[3U] = __Vtemp_64[3U];
    vlSelfRef.__PVT__fp32_int[4U] = (1U & __Vtemp_64[4U]);
    VL_SHIFTL_WWI(408,408,8, __Vtemp_65, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3529, (IData)(vlSelfRef.__PVT__fp_Y_shift_abs));
    VL_SHIFTR_WWI(408,408,8, __Vtemp_66, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3529, (IData)(vlSelfRef.__PVT__fp_Y_shift_abs));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[0U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[0U] : __Vtemp_66[0U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[1U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[1U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[1U] : __Vtemp_66[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[2U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[2U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[2U] : __Vtemp_66[2U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[3U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[3U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[3U] : __Vtemp_66[3U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[4U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[4U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[4U] : __Vtemp_66[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[5U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[5U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[5U] : __Vtemp_66[5U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[6U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[6U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[6U] : __Vtemp_66[6U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[7U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[7U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[7U] : __Vtemp_66[7U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[8U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[8U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[8U] : __Vtemp_66[8U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[9U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[9U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_65[9U] : __Vtemp_66[9U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[0x0000000aU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000aU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
               ? __Vtemp_65[0x0000000aU] : __Vtemp_66[0x0000000aU]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[0x0000000bU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000bU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
               ? __Vtemp_65[0x0000000bU] : __Vtemp_66[0x0000000bU]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[0x0000000cU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000cU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
               ? __Vtemp_65[0x0000000cU] : __Vtemp_66[0x0000000cU]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3531[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3531[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3531[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3531[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3531[4U] 
        = ((vlSelfRef.__PVT__fp32_int[0U] << 0x00000017U) 
           | (0x007fffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3531[5U] 
        = ((vlSelfRef.__PVT__fp32_int[0U] >> 9U) | 
           (vlSelfRef.__PVT__fp32_int[1U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3531[6U] 
        = ((vlSelfRef.__PVT__fp32_int[1U] >> 9U) | 
           (vlSelfRef.__PVT__fp32_int[2U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3531[7U] 
        = ((vlSelfRef.__PVT__fp32_int[2U] >> 9U) | 
           (vlSelfRef.__PVT__fp32_int[3U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3531[8U] 
        = ((vlSelfRef.__PVT__fp32_int[3U] >> 9U) | 
           (vlSelfRef.__PVT__fp32_int[4U] << 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3531[9U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3531[0x0000000aU] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3531[0x0000000bU] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3531[0x0000000cU] = 0U;
    VL_SHIFTL_WWI(408,408,8, __Vtemp_73, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3531, (IData)(vlSelfRef.__PVT__fp_X_shift_abs));
    VL_SHIFTR_WWI(408,408,8, __Vtemp_74, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3531, (IData)(vlSelfRef.__PVT__fp_X_shift_abs));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[0U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[0U] : __Vtemp_74[0U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[1U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[1U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[1U] : __Vtemp_74[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[2U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[2U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[2U] : __Vtemp_74[2U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[3U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[3U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[3U] : __Vtemp_74[3U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[4U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[4U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[4U] : __Vtemp_74[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[5U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[5U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[5U] : __Vtemp_74[5U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[6U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[6U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[6U] : __Vtemp_74[6U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[7U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[7U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[7U] : __Vtemp_74[7U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[8U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[8U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[8U] : __Vtemp_74[8U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[9U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[9U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_73[9U] : __Vtemp_74[9U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[0x0000000aU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000aU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
               ? __Vtemp_73[0x0000000aU] : __Vtemp_74[0x0000000aU]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[0x0000000bU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000bU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
               ? __Vtemp_73[0x0000000bU] : __Vtemp_74[0x0000000bU]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[0x0000000cU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000cU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
               ? __Vtemp_73[0x0000000cU] : __Vtemp_74[0x0000000cU]));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__1(Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_2980;
    __VdfgRegularize_h6e95ff9d_0_2980 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_2981;
    __VdfgRegularize_h6e95ff9d_0_2981 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_2985;
    __VdfgRegularize_h6e95ff9d_0_2985 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_2986;
    __VdfgRegularize_h6e95ff9d_0_2986 = 0;
    // Body
    vlSelfRef.__PVT__fp_Y_uflow = (1U & (((0x000000ffU 
                                           == (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23)) 
                                          & (0U != vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0)) 
                                         | ((~ (0U 
                                                != vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d)) 
                                            | (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_31))));
    vlSelfRef.__PVT__fp16_Y_datin_prdy = ((IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                          & (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_X_uflow = (1U & (((0x000000ffU 
                                           == (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23)) 
                                          & (0U != vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0)) 
                                         | ((~ (0U 
                                                != vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d)) 
                                            | (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_31))));
    vlSelfRef.__PVT__fp16_X_datin_prdy = ((IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                          & (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__datin_int8_msb = (0x001fffffU 
                                       & ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en))) 
                                          & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[5U] 
                                              << 0x0000000dU) 
                                             | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[4U] 
                                                >> 0x00000013U))));
    vlSelfRef.__PVT__datin_int8_lsb = (0x001fffffU 
                                       & ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en))) 
                                          & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[4U] 
                                              << 2U) 
                                             | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[3U] 
                                                >> 0x0000001eU))));
    vlSelfRef.__PVT__datin_int16 = (0x0000001fffffffffULL 
                                    & ((- (QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en))) 
                                       & (((QData)((IData)(
                                                           vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[5U])) 
                                           << 0x00000022U) 
                                          | (((QData)((IData)(
                                                              vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[4U])) 
                                              << 2U) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[3U])) 
                                                >> 0x0000001eU)))));
    if (vlSelfRef.__PVT__fp_X_uflow) {
        vlSelfRef.__PVT__fp_log2_datin = 0U;
        vlSelfRef.__PVT__fp_X_exp_frac = 0U;
        vlSelfRef.__PVT__fp_X_log2_datout = 0U;
    } else {
        vlSelfRef.__PVT__fp_log2_datin = vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
        if (vlSelfRef.__PVT__X_exp) {
            if ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_log2_datin 
                                          >> 0x17U)))) {
                vlSelfRef.__PVT__fp_X_exp_frac = (0x0000ffffU 
                                                  & (vlSelfRef.__PVT__fp_log2_datin 
                                                     >> 7U));
                vlSelfRef.__PVT__fp_X_log2_datout = 
                    ((0x000000ffU & (vlSelfRef.__PVT__fp_log2_datin 
                                     >> 0x17U)) - (IData)(0x0000007fU));
            } else {
                vlSelfRef.__PVT__fp_X_exp_frac = (0x0000ffffU 
                                                  & (vlSelfRef.__PVT__fp_log2_datin 
                                                     >> 7U));
                vlSelfRef.__PVT__fp_X_log2_datout = 
                    (((- (IData)((1U & (((IData)(1U) 
                                         + (~ ((0x7fU 
                                                > (0x000000ffU 
                                                   & (vlSelfRef.__PVT__fp_log2_datin 
                                                      >> 0x00000017U)))
                                                ? (0x0000007fU 
                                                   & ((IData)(0x007fU) 
                                                      - 
                                                      (0x000000ffU 
                                                       & (vlSelfRef.__PVT__fp_log2_datin 
                                                          >> 0x00000017U))))
                                                : 0U))) 
                                        >> 7U)))) << 8U) 
                     | (0x000000ffU & ((IData)(1U) 
                                       + (~ ((0x7fU 
                                              > (0x000000ffU 
                                                 & (vlSelfRef.__PVT__fp_log2_datin 
                                                    >> 0x00000017U)))
                                              ? (0x0000007fU 
                                                 & ((IData)(0x007fU) 
                                                    - 
                                                    (0x000000ffU 
                                                     & (vlSelfRef.__PVT__fp_log2_datin 
                                                        >> 0x00000017U))))
                                              : 0U)))));
            }
        } else {
            vlSelfRef.__PVT__fp_X_exp_frac = 0U;
            vlSelfRef.__PVT__fp_X_log2_datout = vlSelfRef.__PVT__fp_log2_datin;
        }
    }
    if (vlSelfRef.__PVT__sqsum_bypass_enable) {
        vlSelfRef.__PVT__dec_offset_datin_msb = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                  ? 
                                                 ((0x00200000U 
                                                   & (vlSelfRef.__PVT__datin_int8_msb 
                                                      << 1U)) 
                                                  | vlSelfRef.__PVT__datin_int8_msb)
                                                  : 0U);
        vlSelfRef.__PVT__dec_offset_datin_lsb = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelfRef.__PVT__datin_int16 
                                                                               >> 0x00000024U))))) 
                                                   << 0x00000025U) 
                                                  | vlSelfRef.__PVT__datin_int16)
                                                  : 
                                                 ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__datin_int8_lsb 
                                                                                >> 0x00000014U))))))) 
                                                    << 0x00000015U) 
                                                   | (QData)((IData)(vlSelfRef.__PVT__datin_int8_lsb)))
                                                   : 0ULL));
    } else {
        vlSelfRef.__PVT__dec_offset_datin_msb = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                  ? vlSelfRef.__PVT__datin_int8_msb
                                                  : 0U);
        vlSelfRef.__PVT__dec_offset_datin_lsb = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en)
                                                  ? vlSelfRef.__PVT__datin_int16
                                                  : 
                                                 ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                   ? (QData)((IData)(vlSelfRef.__PVT__datin_int8_lsb))
                                                   : 0ULL));
    }
    __VdfgRegularize_h6e95ff9d_0_2981 = ((2U & (vlSelfRef.__PVT__dec_offset_datin_msb 
                                                >> 0x00000014U)) 
                                         | (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_start_low 
                                                  >> 0x00000015U)));
    __VdfgRegularize_h6e95ff9d_0_2986 = ((2U & (vlSelfRef.__PVT__dec_offset_datin_msb 
                                                >> 0x00000014U)) 
                                         | (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_start_low 
                                                  >> 0x00000015U)));
    __VdfgRegularize_h6e95ff9d_0_2980 = ((2U & ((IData)(
                                                        (vlSelfRef.__PVT__dec_offset_datin_lsb 
                                                         >> 0x00000025U)) 
                                                << 1U)) 
                                         | (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_start_high) 
                                                  >> 5U)));
    __VdfgRegularize_h6e95ff9d_0_2985 = ((2U & ((IData)(
                                                        (vlSelfRef.__PVT__dec_offset_datin_lsb 
                                                         >> 0x00000025U)) 
                                                << 1U)) 
                                         | (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_start_high) 
                                                  >> 5U)));
    vlSelfRef.__PVT__fp_X_info = (((IData)(vlSelfRef.__PVT__fp_X_uflow) 
                                   << 0x00000010U) 
                                  | (IData)(vlSelfRef.__PVT__fp_X_exp_frac));
    vlSelfRef.__PVT__same_sign = ((1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset) 
                                         >> 7U)) == 
                                  (1U & (vlSelfRef.__PVT__fp_X_log2_datout 
                                         >> 7U)));
    vlSelfRef.__PVT__less_than_start = ((0x0000007fU 
                                         & vlSelfRef.__PVT__fp_X_log2_datout) 
                                        < (0x0000007fU 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset)));
    vlSelfRef.__PVT__less_than_win_s = ((1U != (IData)(__VdfgRegularize_h6e95ff9d_0_2981)) 
                                        & ((2U == (IData)(__VdfgRegularize_h6e95ff9d_0_2981)) 
                                           | ((vlSelfRef.__PVT__dec_offset_datin_msb 
                                               < (0x003fffffU 
                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_start_low)) 
                                              | (vlSelfRef.__PVT__dec_offset_datin_msb 
                                                 == 
                                                 (0x003fffffU 
                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_start_low)))));
    vlSelfRef.__PVT__Y_less_than_win_s = ((1U != (IData)(__VdfgRegularize_h6e95ff9d_0_2986)) 
                                          & ((2U == (IData)(__VdfgRegularize_h6e95ff9d_0_2986)) 
                                             | ((vlSelfRef.__PVT__dec_offset_datin_msb 
                                                 < 
                                                 (0x003fffffU 
                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_start_low)) 
                                                | (vlSelfRef.__PVT__dec_offset_datin_msb 
                                                   == 
                                                   (0x003fffffU 
                                                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_start_low)))));
    vlSelfRef.__PVT__less_than_win_start = ((1U != (IData)(__VdfgRegularize_h6e95ff9d_0_2980)) 
                                            & ((2U 
                                                == (IData)(__VdfgRegularize_h6e95ff9d_0_2980)) 
                                               | ((vlSelfRef.__PVT__dec_offset_datin_lsb 
                                                   < vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_le_start) 
                                                  | (vlSelfRef.__PVT__dec_offset_datin_lsb 
                                                     == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_le_start))));
    vlSelfRef.__PVT__Y_less_than_win_start = ((1U != (IData)(__VdfgRegularize_h6e95ff9d_0_2985)) 
                                              & ((2U 
                                                  == (IData)(__VdfgRegularize_h6e95ff9d_0_2985)) 
                                                 | ((vlSelfRef.__PVT__dec_offset_datin_lsb 
                                                     < vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_lo_start) 
                                                    | (vlSelfRef.__PVT__dec_offset_datin_lsb 
                                                       == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_lo_start))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__2(Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dp2lut_prdy = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__dp2lut_prdy) 
                             & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit2.dp2lut_pvld) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_14)));
    vlSelfRef.__PVT__fp_out_rdy = (1U & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)) 
                                         | (IData)(vlSelfRef.dp2lut_prdy)));
    vlSelfRef.__PVT__int_out_rdy = ((IData)(vlSelfRef.dp2lut_prdy) 
                                    | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en));
    vlSelfRef.__PVT__fp_Y_stage1_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid)) 
                                              | ((IData)(vlSelfRef.__PVT__fp_out_rdy) 
                                                 & (IData)(vlSelfRef.__PVT__fp_X_stage2_vld))));
    vlSelfRef.__PVT__fp_X_stage2_rdy = ((IData)(vlSelfRef.__PVT__fp_out_rdy) 
                                        & (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid));
    vlSelfRef.__PVT__Y_stage1_in_rdy_d1 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                                                 | ((IData)(vlSelfRef.__PVT__int_out_rdy) 
                                                    & (IData)(vlSelfRef.__PVT__int_stage3_pvld))));
    vlSelfRef.__PVT__int_stage3_prdy = ((IData)(vlSelfRef.__PVT__int_out_rdy) 
                                        & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid));
    vlSelfRef.__PVT__fp_X_stage1_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__fp_X_stage2_vld)) 
                                              | (IData)(vlSelfRef.__PVT__fp_X_stage2_rdy)));
    vlSelfRef.__PVT__Y_stage1_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                              | (IData)(vlSelfRef.__PVT__Y_stage1_in_rdy_d1)));
    vlSelfRef.__PVT__int_stage2_prdy = (1U & ((~ (IData)(vlSelfRef.__PVT__int_stage3_pvld)) 
                                              | (IData)(vlSelfRef.__PVT__int_stage3_prdy)));
    vlSelfRef.__PVT__fp_X_stage1_load = ((IData)(vlSelfRef.__PVT__fp_X_stage1_vld) 
                                         & (IData)(vlSelfRef.__PVT__fp_X_stage1_rdy));
    vlSelfRef.__PVT__int_Y_stage0_prdy = (1U & ((~ (IData)(vlSelfRef.__PVT__int_Y_stage1_pvld)) 
                                                | (IData)(vlSelfRef.__PVT__Y_stage1_in_rdy)));
    vlSelfRef.__PVT__load_int_stage2 = ((IData)(vlSelfRef.__PVT__int_stage2_pvld) 
                                        & (IData)(vlSelfRef.__PVT__int_stage2_prdy));
    vlSelfRef.__PVT__int_stage1_prdy = (1U & ((~ (IData)(vlSelfRef.__PVT__int_stage2_pvld)) 
                                              | (IData)(vlSelfRef.__PVT__int_stage2_prdy)));
    vlSelfRef.__PVT__load_int_Y_stage0 = ((IData)(vlSelfRef.__PVT__int_Y_stage0_pvld) 
                                          & (IData)(vlSelfRef.__PVT__int_Y_stage0_prdy));
    vlSelfRef.__PVT__int_Y_datin_prdy = (1U & ((~ (IData)(vlSelfRef.__PVT__int_Y_stage0_pvld)) 
                                               | (IData)(vlSelfRef.__PVT__int_Y_stage0_prdy)));
    vlSelfRef.__PVT__load_int_stage1 = ((IData)(vlSelfRef.__PVT__int_stage1_pvld) 
                                        & (IData)(vlSelfRef.__PVT__int_stage1_prdy));
    vlSelfRef.__PVT__int_stage0_prdy = (1U & ((~ (IData)(vlSelfRef.__PVT__int_stage1_pvld)) 
                                              | (IData)(vlSelfRef.__PVT__int_stage1_prdy)));
    vlSelfRef.__PVT__load_int_stage0 = ((IData)(vlSelfRef.__PVT__int_stage0_pvld) 
                                        & (IData)(vlSelfRef.__PVT__int_stage0_prdy));
    vlSelfRef.__PVT__int_X_datin_prdy = (1U & ((~ (IData)(vlSelfRef.__PVT__int_stage0_pvld)) 
                                               | (IData)(vlSelfRef.__PVT__int_stage0_prdy)));
    vlSelfRef.sum2itp_prdy = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                               ? ((IData)(vlSelfRef.__PVT__fp16_Y_datin_prdy) 
                                  & (IData)(vlSelfRef.__PVT__fp16_X_datin_prdy))
                               : ((IData)(vlSelfRef.__PVT__int_Y_datin_prdy) 
                                  & (IData)(vlSelfRef.__PVT__int_X_datin_prdy)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__3(Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__fp_Y_stage0_load = ((IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__fp_X_stage0_load = ((IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.sum2itp_pvld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pvld_f) 
                              & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_11));
    vlSelfRef.__PVT__int_en_vld = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)) 
                                   & (IData)(vlSelfRef.sum2itp_pvld));
    vlSelfRef.__PVT__fp_en_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en) 
                                  & (IData)(vlSelfRef.sum2itp_pvld));
    vlSelfRef.__PVT__int_X_proc_in_vld = ((IData)(vlSelfRef.__PVT__int_en_vld) 
                                          & (IData)(vlSelfRef.__PVT__int_Y_datin_prdy));
    vlSelfRef.__PVT__int_Y_proc_in_vld = ((IData)(vlSelfRef.__PVT__int_en_vld) 
                                          & (IData)(vlSelfRef.__PVT__int_X_datin_prdy));
    vlSelfRef.__PVT__fp_X_proc_in_vld = ((IData)(vlSelfRef.__PVT__fp_en_vld) 
                                         & (IData)(vlSelfRef.__PVT__fp16_Y_datin_prdy));
    vlSelfRef.__PVT__fp_Y_proc_in_vld = ((IData)(vlSelfRef.__PVT__fp_en_vld) 
                                         & (IData)(vlSelfRef.__PVT__fp16_X_datin_prdy));
    vlSelfRef.__PVT__load_in_intX = ((IData)(vlSelfRef.__PVT__int_X_proc_in_vld) 
                                     & (IData)(vlSelfRef.__PVT__int_X_datin_prdy));
    vlSelfRef.__PVT__load_din_intY = ((IData)(vlSelfRef.__PVT__int_Y_proc_in_vld) 
                                      & (IData)(vlSelfRef.__PVT__int_Y_datin_prdy));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___ctor_var_reset(Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->nvdla_core_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13795098205236914507ull);
    vlSelf->nvdla_op_gated_clk_fp16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11945653109852095966ull);
    vlSelf->nvdla_op_gated_clk_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8678371800785696597ull);
    vlSelf->nvdla_core_rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15781730201853965120ull);
    vlSelf->dp2lut_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8133638516167704309ull);
    vlSelf->fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1520350420547626687ull);
    vlSelf->int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16274320398691443060ull);
    vlSelf->int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15529806700117069444ull);
    vlSelf->reg2dp_lut_le_function = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8166629308320576836ull);
    vlSelf->reg2dp_lut_le_index_offset = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13073504508391985786ull);
    vlSelf->reg2dp_lut_le_index_select = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3443361690947616955ull);
    vlSelf->reg2dp_lut_le_start_high = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1527417841550877644ull);
    vlSelf->reg2dp_lut_le_start_low = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16607231916569276430ull);
    vlSelf->reg2dp_lut_lo_index_select = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16312885141180815022ull);
    vlSelf->reg2dp_lut_lo_start_high = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14938929154266430766ull);
    vlSelf->reg2dp_lut_lo_start_low = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18334707463102390033ull);
    vlSelf->reg2dp_sqsum_bypass = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9955684722581301547ull);
    vlSelf->sum2itp_pd = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 6537810817074598095ull);
    vlSelf->sum2itp_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3405361561861685713ull);
    vlSelf->dp2lut_X_info = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 960998115255379220ull);
    vlSelf->dp2lut_X_pd = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 6683678548503611448ull);
    vlSelf->dp2lut_Y_info = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 5796387716821163019ull);
    vlSelf->dp2lut_Y_pd = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 10684563816051607419ull);
    vlSelf->dp2lut_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17199052277092139545ull);
    vlSelf->sum2itp_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17360662157097837574ull);
    vlSelf->__PVT__X_exp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10827851474759533279ull);
    vlSelf->__PVT__X_int16_oflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13508280234123876740ull);
    vlSelf->__PVT__X_int8_oflow_lsb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3938847396004845490ull);
    vlSelf->__PVT__X_int8_oflow_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8995963164588721343ull);
    vlSelf->__PVT__X_lin_frac_int16 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12749033850116227577ull);
    vlSelf->__PVT__X_lin_frac_int8_lsb = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10747162133649379392ull);
    vlSelf->__PVT__X_lin_frac_int8_msb = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15641014435367839589ull);
    vlSelf->__PVT__Y_dat_info_shift = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 343108792976639800ull);
    vlSelf->__PVT__Y_dec_offset_lsb = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 4757629316188363357ull);
    vlSelf->__PVT__Y_dec_offset_msb = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 6016307234246332897ull);
    vlSelf->__PVT__Y_int16_oflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3232677386494668614ull);
    vlSelf->__PVT__Y_int8_oflow_lsb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 476826733715794282ull);
    vlSelf->__PVT__Y_int8_oflow_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1126611103882425772ull);
    vlSelf->__PVT__Y_less_than_win_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8438826398402854509ull);
    vlSelf->__PVT__Y_less_than_win_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9289025574930409794ull);
    vlSelf->__PVT__Y_lin_frac_int16 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5346072056986320346ull);
    vlSelf->__PVT__Y_lin_frac_int8_lsb = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18436307743375578223ull);
    vlSelf->__PVT__Y_lin_frac_int8_msb = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9131087034927211190ull);
    vlSelf->__PVT__Y_shift_bits = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9752040214695349626ull);
    vlSelf->__PVT__Y_shift_int16 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14840352526405728100ull);
    vlSelf->__PVT__Y_shift_lsb_int8 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7685688074848030493ull);
    vlSelf->__PVT__Y_shift_msb_int8 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13383207137521655738ull);
    vlSelf->__PVT__dat_info_d = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 6508062376040476676ull);
    vlSelf->__PVT__dat_info_shift = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 5952254882563415584ull);
    vlSelf->__PVT__dec_Xindex_lsb = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 703303312231758101ull);
    vlSelf->__PVT__dec_Xindex_msb = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16910528220233019073ull);
    vlSelf->__PVT__dec_offset_lsb = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 6294122306328458886ull);
    vlSelf->__PVT__dec_offset_msb = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 14118314141871586547ull);
    vlSelf->__PVT__fp_X_exp_frac = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16354633015498608779ull);
    vlSelf->__PVT__fp_X_index_uflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10747004859261987638ull);
    vlSelf->__PVT__fp_X_info_d = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11726447563893058406ull);
    vlSelf->__PVT__fp_X_log2_datout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15748481166350774620ull);
    vlSelf->__PVT__fp_X_log2_datout_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14323183367879587339ull);
    vlSelf->__PVT__fp_X_stage1_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5466654851847906403ull);
    vlSelf->__PVT__fp_X_stage2_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7656857711567277104ull);
    vlSelf->__PVT__fp_X_uflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5406258749645307948ull);
    vlSelf->__PVT__fp_Xindex = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14766768677825361405ull);
    vlSelf->__PVT__fp_Xindex_info_d = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7973366777840782493ull);
    vlSelf->__PVT__fp_Xshift = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8007241503724037151ull);
    vlSelf->__PVT__fp_Xshift_frac = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8070287545180345291ull);
    vlSelf->__PVT__fp_Xshift_oflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11854192806815574274ull);
    vlSelf->__PVT__fp_Y_stage1_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15105820970071190020ull);
    vlSelf->__PVT__fp_Y_uflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2440249992974500874ull);
    vlSelf->__PVT__fp_Yindex_info_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14870572179735546655ull);
    vlSelf->__PVT__fp_Yshift = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10733743004800868048ull);
    vlSelf->__PVT__fp_Yshift_frac = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14416049007398490920ull);
    vlSelf->__PVT__fp_Yshift_oflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 383041913517063383ull);
    vlSelf->__PVT__int_X_index_uflow_lsb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 818477654385857840ull);
    vlSelf->__PVT__int_X_index_uflow_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16223983551607342834ull);
    vlSelf->__PVT__int_X_input_uflow_d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4794456689835370491ull);
    vlSelf->__PVT__int_X_input_uflow_lsb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12444740006037692962ull);
    vlSelf->__PVT__int_X_input_uflow_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16060175209865868182ull);
    vlSelf->__PVT__int_Y_input_uflow_lsb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5942359147974767271ull);
    vlSelf->__PVT__int_Y_input_uflow_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3340650891208658221ull);
    vlSelf->__PVT__int_Y_stage0_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8418089079202758643ull);
    vlSelf->__PVT__int_Y_stage1_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15018580698649912176ull);
    vlSelf->__PVT__int_stage0_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 98976039681933763ull);
    vlSelf->__PVT__int_stage1_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17013351898195536220ull);
    vlSelf->__PVT__int_stage2_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1361961870251094967ull);
    vlSelf->__PVT__int_stage3_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7181206810628450928ull);
    vlSelf->__PVT__less_than_win_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5101892036497962935ull);
    vlSelf->__PVT__less_than_win_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3363271762082506242ull);
    vlSelf->__PVT__log2_datout_lsb = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 15252286767305513688ull);
    vlSelf->__PVT__log2_datout_msb = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12671196123534873384ull);
    vlSelf->__PVT__log2_frac_lsb = VL_SCOPED_RAND_RESET_Q(37, __VscopeHash, 8459994851765912931ull);
    vlSelf->__PVT__log2_frac_msb = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 7284448712766399270ull);
    vlSelf->__PVT__mon_Y_dec_offset_lsb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2522209594210836187ull);
    vlSelf->__PVT__mon_Y_dec_offset_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8060787948478022026ull);
    vlSelf->__PVT__mon_dec_Xindex_lsb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14703824581941575787ull);
    vlSelf->__PVT__mon_dec_Xindex_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15849681121647171579ull);
    vlSelf->__PVT__mon_dec_offset_lsb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16475672558226220450ull);
    vlSelf->__PVT__mon_dec_offset_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17542904987018882033ull);
    vlSelf->__PVT__mon_fp_Xindex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14522792153146647802ull);
    vlSelf->__PVT__shift_int16 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18108627943640207856ull);
    vlSelf->__PVT__shift_lsb_int8 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14260650342207891035ull);
    vlSelf->__PVT__shift_msb_int8 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3603572821528626539ull);
    vlSelf->__PVT__sqsum_bypass_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6473774290606527436ull);
    VL_SCOPED_RAND_RESET_W(129, vlSelf->__PVT__Y_fp32_int, __VscopeHash, 14643153282273893791ull);
    vlSelf->__PVT__Y_shift_bits_int16_abs = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7750824593606682022ull);
    vlSelf->__PVT__Y_shift_bits_int8_abs = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9456375025839235060ull);
    vlSelf->__PVT__Y_stage1_in_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8228183970284886861ull);
    vlSelf->__PVT__Y_stage1_in_rdy_d1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12736034968213599766ull);
    vlSelf->__PVT__dat_info = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 3137510275127313837ull);
    vlSelf->__PVT__dat_info_index_sub = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 5599082965877487992ull);
    vlSelf->__PVT__datin_int16 = VL_SCOPED_RAND_RESET_Q(37, __VscopeHash, 10636708254556938135ull);
    vlSelf->__PVT__datin_int8_lsb = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 2120755620203807201ull);
    vlSelf->__PVT__datin_int8_msb = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 9579819397422837006ull);
    vlSelf->__PVT__dec_offset_datin_lsb = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 8465346216643665253ull);
    vlSelf->__PVT__dec_offset_datin_msb = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5704172892948524455ull);
    vlSelf->__PVT__fp16_X_datin_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14021170020011193167ull);
    vlSelf->__PVT__fp16_Y_datin_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6671353651708152114ull);
    VL_SCOPED_RAND_RESET_W(129, vlSelf->__PVT__fp32_int, __VscopeHash, 13594371579895826800ull);
    vlSelf->__PVT__fp_X_frac = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3425819500199099559ull);
    vlSelf->__PVT__fp_X_info = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11890093664913815424ull);
    vlSelf->__PVT__fp_X_proc_in_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15148590890571607315ull);
    vlSelf->__PVT__fp_X_shift_abs = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13084979787246241378ull);
    vlSelf->__PVT__fp_X_stage0_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13621292327402648980ull);
    vlSelf->__PVT__fp_X_stage1_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5571448035068337436ull);
    vlSelf->__PVT__fp_X_stage1_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12149961802439424324ull);
    vlSelf->__PVT__fp_X_stage2_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16112972582826960680ull);
    vlSelf->__PVT__fp_Xindex_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8590664726993977354ull);
    vlSelf->__PVT__fp_Xindex_info = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2237993278569459997ull);
    vlSelf->__PVT__fp_Y_proc_in_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5784807727261832623ull);
    vlSelf->__PVT__fp_Y_shift_abs = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15163690160555754716ull);
    vlSelf->__PVT__fp_Y_stage0_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12854648107386961213ull);
    vlSelf->__PVT__fp_Y_stage1_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17952924844299465428ull);
    vlSelf->__PVT__fp_en_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14107265782638472490ull);
    vlSelf->__PVT__fp_log2_datin = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12735970543957231874ull);
    vlSelf->__PVT__fp_out_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5877219316083321338ull);
    vlSelf->__PVT__int_X_datin_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6465537733014682777ull);
    vlSelf->__PVT__int_X_proc_in_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6010506492506995103ull);
    vlSelf->__PVT__int_Y_datin_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13484248963843377925ull);
    vlSelf->__PVT__int_Y_proc_in_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11065389987780104265ull);
    vlSelf->__PVT__int_Y_stage0_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3734423511833842247ull);
    vlSelf->__PVT__int_en_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8347493402440762872ull);
    vlSelf->__PVT__int_out_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11868730038825280970ull);
    vlSelf->__PVT__int_stage0_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1703436791791014595ull);
    vlSelf->__PVT__int_stage1_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 56639081299822497ull);
    vlSelf->__PVT__int_stage2_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5005867287473917202ull);
    vlSelf->__PVT__int_stage3_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5986564170839582656ull);
    vlSelf->__PVT__less_than_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12248534791494172185ull);
    vlSelf->__PVT__load_din_intY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9535511227912664724ull);
    vlSelf->__PVT__load_in_intX = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7084347704001219282ull);
    vlSelf->__PVT__load_int_Y_stage0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17108149384216375817ull);
    vlSelf->__PVT__load_int_stage0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11029529415634188871ull);
    vlSelf->__PVT__load_int_stage1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2820061926558662461ull);
    vlSelf->__PVT__load_int_stage2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16422369268675313029ull);
    vlSelf->__PVT__same_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 281635741301279769ull);
    vlSelf->__PVT__shift_bits = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7928481622896797541ull);
    vlSelf->__PVT__shift_bits_int16_abs = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7537110129098098804ull);
    vlSelf->__PVT__shift_bits_int8_abs = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14913449957141678146ull);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 17633712268433854607ull);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7275116386423144664ull);
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 2436424408303884369ull);
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4219242389160901449ull);
    vlSelf->__PVT__pipe_p3__DOT__p3_pipe_data = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 1719927844608622197ull);
    vlSelf->__PVT__pipe_p3__DOT__p3_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15736517410706576585ull);
    VL_SCOPED_RAND_RESET_W(103, vlSelf->__VdfgRegularize_h6e95ff9d_0_2932, __VscopeHash, 17216662217719660099ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2933 = VL_SCOPED_RAND_RESET_Q(55, __VscopeHash, 6356607953628369405ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2934 = VL_SCOPED_RAND_RESET_Q(55, __VscopeHash, 4731189887636709495ull);
    VL_SCOPED_RAND_RESET_W(102, vlSelf->__VdfgRegularize_h6e95ff9d_0_2937, __VscopeHash, 3590043166715862978ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2938 = VL_SCOPED_RAND_RESET_Q(54, __VscopeHash, 18264634437249361448ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2939 = VL_SCOPED_RAND_RESET_Q(54, __VscopeHash, 17308626938020039368ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2940 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4828416135536127167ull);
    VL_SCOPED_RAND_RESET_W(278, vlSelf->__VdfgRegularize_h6e95ff9d_0_2941, __VscopeHash, 8756862897816115213ull);
    VL_SCOPED_RAND_RESET_W(408, vlSelf->__VdfgRegularize_h6e95ff9d_0_2942, __VscopeHash, 16141313644159953142ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2943 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4576200152875394507ull);
    VL_SCOPED_RAND_RESET_W(278, vlSelf->__VdfgRegularize_h6e95ff9d_0_2944, __VscopeHash, 1128534272934172315ull);
    VL_SCOPED_RAND_RESET_W(408, vlSelf->__VdfgRegularize_h6e95ff9d_0_2945, __VscopeHash, 14574448641996787339ull);
    VL_SCOPED_RAND_RESET_W(103, vlSelf->__VdfgRegularize_h6e95ff9d_0_2950, __VscopeHash, 13797724018746481229ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2951 = VL_SCOPED_RAND_RESET_Q(55, __VscopeHash, 10982185474854274820ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2952 = VL_SCOPED_RAND_RESET_Q(55, __VscopeHash, 2381644173672068869ull);
    VL_SCOPED_RAND_RESET_W(102, vlSelf->__VdfgRegularize_h6e95ff9d_0_2955, __VscopeHash, 7577141251139854509ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2956 = VL_SCOPED_RAND_RESET_Q(54, __VscopeHash, 16738004496738969070ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2957 = VL_SCOPED_RAND_RESET_Q(54, __VscopeHash, 11494922262585696132ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2958 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9021320643881326441ull);
    VL_SCOPED_RAND_RESET_W(278, vlSelf->__VdfgRegularize_h6e95ff9d_0_2959, __VscopeHash, 15755585432091719953ull);
    VL_SCOPED_RAND_RESET_W(408, vlSelf->__VdfgRegularize_h6e95ff9d_0_2960, __VscopeHash, 17502957205843845925ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2961 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8221308037818369808ull);
    VL_SCOPED_RAND_RESET_W(278, vlSelf->__VdfgRegularize_h6e95ff9d_0_2962, __VscopeHash, 1565960969206867030ull);
    VL_SCOPED_RAND_RESET_W(408, vlSelf->__VdfgRegularize_h6e95ff9d_0_2963, __VscopeHash, 16008273676221315277ull);
    VL_SCOPED_RAND_RESET_W(103, vlSelf->__VdfgRegularize_h6e95ff9d_0_2966, __VscopeHash, 3931827992564887716ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2967 = VL_SCOPED_RAND_RESET_Q(55, __VscopeHash, 14654654408421021452ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2968 = VL_SCOPED_RAND_RESET_Q(55, __VscopeHash, 727013924147390799ull);
    VL_SCOPED_RAND_RESET_W(102, vlSelf->__VdfgRegularize_h6e95ff9d_0_2971, __VscopeHash, 17395440151415527549ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2972 = VL_SCOPED_RAND_RESET_Q(54, __VscopeHash, 7407079899266864006ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2973 = VL_SCOPED_RAND_RESET_Q(54, __VscopeHash, 3186087984156287170ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2974 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5645249106992367969ull);
    VL_SCOPED_RAND_RESET_W(278, vlSelf->__VdfgRegularize_h6e95ff9d_0_2975, __VscopeHash, 4574211538868286399ull);
    VL_SCOPED_RAND_RESET_W(408, vlSelf->__VdfgRegularize_h6e95ff9d_0_2976, __VscopeHash, 17125408481863259718ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2977 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12168576641962307325ull);
    VL_SCOPED_RAND_RESET_W(278, vlSelf->__VdfgRegularize_h6e95ff9d_0_2978, __VscopeHash, 1285649396109066749ull);
    VL_SCOPED_RAND_RESET_W(408, vlSelf->__VdfgRegularize_h6e95ff9d_0_2979, __VscopeHash, 6938595011666618875ull);
    VL_SCOPED_RAND_RESET_W(103, vlSelf->__VdfgRegularize_h6e95ff9d_0_2982, __VscopeHash, 15953502565559171354ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2983 = VL_SCOPED_RAND_RESET_Q(55, __VscopeHash, 15947952039129402191ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2984 = VL_SCOPED_RAND_RESET_Q(55, __VscopeHash, 14785446721282837256ull);
    VL_SCOPED_RAND_RESET_W(102, vlSelf->__VdfgRegularize_h6e95ff9d_0_2987, __VscopeHash, 12991896772353357217ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2988 = VL_SCOPED_RAND_RESET_Q(54, __VscopeHash, 8838677729436769942ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2989 = VL_SCOPED_RAND_RESET_Q(54, __VscopeHash, 2414194820374651385ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2990 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15071399920331438159ull);
    VL_SCOPED_RAND_RESET_W(278, vlSelf->__VdfgRegularize_h6e95ff9d_0_2991, __VscopeHash, 14886395135938022319ull);
    VL_SCOPED_RAND_RESET_W(408, vlSelf->__VdfgRegularize_h6e95ff9d_0_2992, __VscopeHash, 8349647554153989169ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2993 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13251592577366079063ull);
    VL_SCOPED_RAND_RESET_W(278, vlSelf->__VdfgRegularize_h6e95ff9d_0_2994, __VscopeHash, 10571006682299284791ull);
    VL_SCOPED_RAND_RESET_W(408, vlSelf->__VdfgRegularize_h6e95ff9d_0_2995, __VscopeHash, 16206317877605155079ull);
    VL_SCOPED_RAND_RESET_W(408, vlSelf->__VdfgRegularize_h6e95ff9d_0_3529, __VscopeHash, 15742982050635496764ull);
    VL_SCOPED_RAND_RESET_W(408, vlSelf->__VdfgRegularize_h6e95ff9d_0_3531, __VscopeHash, 3958299300525015250ull);
    VL_SCOPED_RAND_RESET_W(408, vlSelf->__VdfgRegularize_h6e95ff9d_0_3532, __VscopeHash, 9073902591245275177ull);
    VL_SCOPED_RAND_RESET_W(408, vlSelf->__VdfgRegularize_h6e95ff9d_0_3534, __VscopeHash, 12680386751347418069ull);
    VL_SCOPED_RAND_RESET_W(408, vlSelf->__VdfgRegularize_h6e95ff9d_0_3535, __VscopeHash, 8645921366640212370ull);
    VL_SCOPED_RAND_RESET_W(408, vlSelf->__VdfgRegularize_h6e95ff9d_0_3537, __VscopeHash, 6228056259871880411ull);
    VL_SCOPED_RAND_RESET_W(408, vlSelf->__VdfgRegularize_h6e95ff9d_0_3538, __VscopeHash, 2697577025628142508ull);
    VL_SCOPED_RAND_RESET_W(408, vlSelf->__VdfgRegularize_h6e95ff9d_0_3540, __VscopeHash, 16367100625594615339ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3975 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9894517284359071042ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3976 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2977926791553847578ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3977 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14692738618637050781ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3978 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4512665134517474538ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3979 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5237445940917699376ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3980 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12930663921439728866ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3981 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15482710936986508426ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3982 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7047792605390699683ull);
}

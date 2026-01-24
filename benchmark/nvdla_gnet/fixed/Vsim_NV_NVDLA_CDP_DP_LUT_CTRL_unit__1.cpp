// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit2__12(Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit2__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sum2itp_pvld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_3) 
                              & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit1.sum2itp_prdy) 
                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_10)));
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

extern const VlWide<9>/*287:0*/ Vsim__ConstPool__CONST_h52851b65_0;
extern const VlWide<9>/*287:0*/ Vsim__ConstPool__CONST_hcb9e5f75_0;
extern const VlWide<9>/*287:0*/ Vsim__ConstPool__CONST_hc63beae6_0;
extern const VlWide<9>/*287:0*/ Vsim__ConstPool__CONST_h4d451b67_0;

void Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__2(Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<9>/*287:0*/ __Vtemp_2;
    VlWide<9>/*287:0*/ __Vtemp_4;
    VlWide<9>/*287:0*/ __Vtemp_6;
    VlWide<9>/*287:0*/ __Vtemp_8;
    VlWide<9>/*287:0*/ __Vtemp_11;
    VlWide<9>/*287:0*/ __Vtemp_12;
    VlWide<9>/*287:0*/ __Vtemp_16;
    VlWide<9>/*287:0*/ __Vtemp_17;
    VlWide<4>/*127:0*/ __Vtemp_21;
    VlWide<4>/*127:0*/ __Vtemp_22;
    VlWide<5>/*159:0*/ __Vtemp_26;
    VlWide<5>/*159:0*/ __Vtemp_30;
    VlWide<5>/*159:0*/ __Vtemp_31;
    // Body
    vlSelfRef.__PVT__fp_X_uflow = (1U & (((0x000000ffU 
                                           == (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23)) 
                                          & (0U != vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0)) 
                                         | ((~ (0U 
                                                != vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d)) 
                                            | (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_31))));
    vlSelfRef.__PVT__fp16_X_datin_prdy = ((IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                          & (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__fp16_Y_datin_prdy = ((IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                          & (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_Y_stage1_rdy)) 
                   | (IData)(vlSelfRef.__PVT__fp_Y_stage1_vld))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__fp_X_stage0_load) {
            vlSelfRef.__PVT__fp_X_info_d = vlSelfRef.__PVT__fp_X_info;
            vlSelfRef.__PVT__fp_X_log2_datout_d = vlSelfRef.__PVT__fp_X_log2_datout;
            if ((0x00010000U & vlSelfRef.__PVT__fp_X_info)) {
                vlSelfRef.__PVT__mon_fp_Xindex = 0U;
                vlSelfRef.__PVT__fp_X_index_uflow = 0U;
                vlSelfRef.__PVT__fp_Xindex = 0U;
            } else if (vlSelfRef.__PVT__X_exp) {
                vlSelfRef.__PVT__mon_fp_Xindex = ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.__PVT__same_sign) 
                                                       & (IData)(vlSelfRef.__PVT__less_than_start)))) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((~ 
                                                            ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset) 
                                                             >> 7U)) 
                                                           & (vlSelfRef.__PVT__fp_X_log2_datout 
                                                              >> 7U)))) 
                                                      && (1U 
                                                          & ((VL_EXTENDS_II(10,9, 
                                                                            ((0x00000100U 
                                                                              & (vlSelfRef.__PVT__fp_X_log2_datout 
                                                                                << 1U)) 
                                                                             | (0x000000ffU 
                                                                                & vlSelfRef.__PVT__fp_X_log2_datout))) 
                                                              - 
                                                              VL_EXTENDS_II(10,9, 
                                                                            ((0x00000100U 
                                                                              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset) 
                                                                                << 1U)) 
                                                                             | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset)))) 
                                                             >> 9U))));
                vlSelfRef.__PVT__fp_X_index_uflow = 
                    (((IData)(vlSelfRef.__PVT__same_sign) 
                      & (IData)(vlSelfRef.__PVT__less_than_start)) 
                     || (1U & ((~ ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset) 
                                   >> 7U)) & (vlSelfRef.__PVT__fp_X_log2_datout 
                                              >> 7U))));
                vlSelfRef.__PVT__fp_Xindex = (((IData)(vlSelfRef.__PVT__same_sign) 
                                               & (IData)(vlSelfRef.__PVT__less_than_start))
                                               ? 0U
                                               : ((1U 
                                                   & ((~ 
                                                       ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset) 
                                                        >> 7U)) 
                                                      & (vlSelfRef.__PVT__fp_X_log2_datout 
                                                         >> 7U)))
                                                   ? 0U
                                                   : 
                                                  (0x000001ffU 
                                                   & ((0x000003ffU 
                                                       & VL_EXTENDS_II(10,9, 
                                                                       ((0x00000100U 
                                                                         & (vlSelfRef.__PVT__fp_X_log2_datout 
                                                                            << 1U)) 
                                                                        | (0x000000ffU 
                                                                           & vlSelfRef.__PVT__fp_X_log2_datout)))) 
                                                      - 
                                                      (0x000003ffU 
                                                       & VL_EXTENDS_II(10,9, 
                                                                       ((0x00000100U 
                                                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset) 
                                                                            << 1U)) 
                                                                        | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset))))))));
            }
        }
        if (vlSelfRef.__PVT__fp_X_stage1_load) {
            vlSelfRef.__PVT__fp_Xindex_info_d = vlSelfRef.__PVT__fp_Xindex_info;
            __Vtemp_2[0U] = (Vsim__ConstPool__CONST_h52851b65_0[0U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[5U] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[4U] 
                                           >> 0x00000017U)));
            __Vtemp_2[1U] = (Vsim__ConstPool__CONST_h52851b65_0[1U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[6U] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[5U] 
                                           >> 0x00000017U)));
            __Vtemp_2[2U] = (Vsim__ConstPool__CONST_h52851b65_0[2U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[7U] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[6U] 
                                           >> 0x00000017U)));
            __Vtemp_2[3U] = (Vsim__ConstPool__CONST_h52851b65_0[3U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[8U] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[7U] 
                                           >> 0x00000017U)));
            __Vtemp_2[4U] = (Vsim__ConstPool__CONST_h52851b65_0[4U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[9U] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[8U] 
                                           >> 0x00000017U)));
            __Vtemp_2[5U] = (Vsim__ConstPool__CONST_h52851b65_0[5U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[0x0000000aU] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[9U] 
                                           >> 0x00000017U)));
            __Vtemp_2[6U] = (Vsim__ConstPool__CONST_h52851b65_0[6U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[0x0000000bU] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[0x0000000aU] 
                                           >> 0x00000017U)));
            __Vtemp_2[7U] = (Vsim__ConstPool__CONST_h52851b65_0[7U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[0x0000000cU] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[0x0000000bU] 
                                           >> 0x00000017U)));
            __Vtemp_2[8U] = (Vsim__ConstPool__CONST_h52851b65_0[8U] 
                             & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[0x0000000cU] 
                                >> 0x00000017U));
            vlSelfRef.__PVT__fp_Xshift = ((0x00010000U 
                                           & vlSelfRef.__PVT__fp_Xindex_info)
                                           ? 0U : (0x000003ffU 
                                                   & ((IData)(vlSelfRef.__PVT__X_exp)
                                                       ? 
                                                      ((0x0040U 
                                                        <= 
                                                        (0x000001ffU 
                                                         & vlSelfRef.__PVT__fp_Xindex_data))
                                                        ? 0x0040U
                                                        : vlSelfRef.__PVT__fp_Xindex_data)
                                                       : 
                                                      ((0U 
                                                        != vlSelfRef.__PVT__fp_Xindex_data)
                                                        ? 
                                                       (VL_LTE_W(9, Vsim__ConstPool__CONST_hcb9e5f75_0, __Vtemp_2)
                                                         ? 0x0040U
                                                         : 
                                                        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[5U] 
                                                          << 9U) 
                                                         | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[4U] 
                                                            >> 0x00000017U)))
                                                        : 0U))));
            __Vtemp_4[0U] = (Vsim__ConstPool__CONST_h52851b65_0[0U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[5U] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[4U] 
                                           >> 0x00000017U)));
            __Vtemp_4[1U] = (Vsim__ConstPool__CONST_h52851b65_0[1U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[6U] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[5U] 
                                           >> 0x00000017U)));
            __Vtemp_4[2U] = (Vsim__ConstPool__CONST_h52851b65_0[2U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[7U] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[6U] 
                                           >> 0x00000017U)));
            __Vtemp_4[3U] = (Vsim__ConstPool__CONST_h52851b65_0[3U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[8U] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[7U] 
                                           >> 0x00000017U)));
            __Vtemp_4[4U] = (Vsim__ConstPool__CONST_h52851b65_0[4U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[9U] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[8U] 
                                           >> 0x00000017U)));
            __Vtemp_4[5U] = (Vsim__ConstPool__CONST_h52851b65_0[5U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[0x0000000aU] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[9U] 
                                           >> 0x00000017U)));
            __Vtemp_4[6U] = (Vsim__ConstPool__CONST_h52851b65_0[6U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[0x0000000bU] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[0x0000000aU] 
                                           >> 0x00000017U)));
            __Vtemp_4[7U] = (Vsim__ConstPool__CONST_h52851b65_0[7U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[0x0000000cU] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[0x0000000bU] 
                                           >> 0x00000017U)));
            __Vtemp_4[8U] = (Vsim__ConstPool__CONST_h52851b65_0[8U] 
                             & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[0x0000000cU] 
                                >> 0x00000017U));
            vlSelfRef.__PVT__fp_Xshift_oflow = ((1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__fp_Xindex_info 
                                                     >> 0x10U))) 
                                                && ((IData)(vlSelfRef.__PVT__X_exp)
                                                     ? 
                                                    (0x0040U 
                                                     <= 
                                                     (0x000001ffU 
                                                      & vlSelfRef.__PVT__fp_Xindex_data))
                                                     : 
                                                    ((0U 
                                                      != vlSelfRef.__PVT__fp_Xindex_data) 
                                                     && VL_LTE_W(9, Vsim__ConstPool__CONST_hcb9e5f75_0, __Vtemp_4))));
            if ((1U & (~ (vlSelfRef.__PVT__fp_Xindex_info 
                          >> 0x10U)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__X_exp)))) {
                    vlSelfRef.__PVT__fp_Xshift_frac 
                        = ((0U != vlSelfRef.__PVT__fp_Xindex_data)
                            ? (0x0000ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[4U] 
                                              >> 7U))
                            : 0U);
                }
            }
        }
        if (vlSelfRef.__PVT__fp_X_stage1_vld) {
            vlSelfRef.__PVT__fp_X_stage2_vld = 1U;
        } else if (vlSelfRef.__PVT__fp_X_stage2_rdy) {
            vlSelfRef.__PVT__fp_X_stage2_vld = 0U;
        }
        if (vlSelfRef.__PVT__fp_Y_stage0_load) {
            vlSelfRef.__PVT__fp_Yindex_info_d = vlSelfRef.__PVT__fp_Y_uflow;
            __Vtemp_6[0U] = (Vsim__ConstPool__CONST_h52851b65_0[0U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[5U] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[4U] 
                                           >> 0x00000017U)));
            __Vtemp_6[1U] = (Vsim__ConstPool__CONST_h52851b65_0[1U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[6U] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[5U] 
                                           >> 0x00000017U)));
            __Vtemp_6[2U] = (Vsim__ConstPool__CONST_h52851b65_0[2U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[7U] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[6U] 
                                           >> 0x00000017U)));
            __Vtemp_6[3U] = (Vsim__ConstPool__CONST_h52851b65_0[3U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[8U] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[7U] 
                                           >> 0x00000017U)));
            __Vtemp_6[4U] = (Vsim__ConstPool__CONST_h52851b65_0[4U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[9U] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[8U] 
                                           >> 0x00000017U)));
            __Vtemp_6[5U] = (Vsim__ConstPool__CONST_h52851b65_0[5U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[0x0000000aU] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[9U] 
                                           >> 0x00000017U)));
            __Vtemp_6[6U] = (Vsim__ConstPool__CONST_h52851b65_0[6U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[0x0000000bU] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[0x0000000aU] 
                                           >> 0x00000017U)));
            __Vtemp_6[7U] = (Vsim__ConstPool__CONST_h52851b65_0[7U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[0x0000000cU] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[0x0000000bU] 
                                           >> 0x00000017U)));
            __Vtemp_6[8U] = (Vsim__ConstPool__CONST_h52851b65_0[8U] 
                             & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[0x0000000cU] 
                                >> 0x00000017U));
            vlSelfRef.__PVT__fp_Yshift_oflow = ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__fp_Y_uflow))) 
                                                && ((0U 
                                                     != vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d) 
                                                    && VL_LTE_W(9, Vsim__ConstPool__CONST_hc63beae6_0, __Vtemp_6)));
            if ((1U & (~ (IData)(vlSelfRef.__PVT__fp_Y_uflow)))) {
                vlSelfRef.__PVT__fp_Yshift_frac = (
                                                   (0U 
                                                    != vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d)
                                                    ? 
                                                   (0x0000ffffU 
                                                    & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[4U] 
                                                       >> 7U))
                                                    : 0U);
            }
            __Vtemp_8[0U] = (Vsim__ConstPool__CONST_h52851b65_0[0U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[5U] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[4U] 
                                           >> 0x00000017U)));
            __Vtemp_8[1U] = (Vsim__ConstPool__CONST_h52851b65_0[1U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[6U] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[5U] 
                                           >> 0x00000017U)));
            __Vtemp_8[2U] = (Vsim__ConstPool__CONST_h52851b65_0[2U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[7U] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[6U] 
                                           >> 0x00000017U)));
            __Vtemp_8[3U] = (Vsim__ConstPool__CONST_h52851b65_0[3U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[8U] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[7U] 
                                           >> 0x00000017U)));
            __Vtemp_8[4U] = (Vsim__ConstPool__CONST_h52851b65_0[4U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[9U] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[8U] 
                                           >> 0x00000017U)));
            __Vtemp_8[5U] = (Vsim__ConstPool__CONST_h52851b65_0[5U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[0x0000000aU] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[9U] 
                                           >> 0x00000017U)));
            __Vtemp_8[6U] = (Vsim__ConstPool__CONST_h52851b65_0[6U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[0x0000000bU] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[0x0000000aU] 
                                           >> 0x00000017U)));
            __Vtemp_8[7U] = (Vsim__ConstPool__CONST_h52851b65_0[7U] 
                             & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[0x0000000cU] 
                                 << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[0x0000000bU] 
                                           >> 0x00000017U)));
            __Vtemp_8[8U] = (Vsim__ConstPool__CONST_h52851b65_0[8U] 
                             & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[0x0000000cU] 
                                >> 0x00000017U));
            vlSelfRef.__PVT__fp_Yshift = ((IData)(vlSelfRef.__PVT__fp_Y_uflow)
                                           ? 0U : (
                                                   (0U 
                                                    != vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d)
                                                    ? 
                                                   (VL_LTE_W(9, Vsim__ConstPool__CONST_hc63beae6_0, __Vtemp_8)
                                                     ? 0x00000100U
                                                     : 
                                                    (0x000003ffU 
                                                     & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[5U] 
                                                         << 9U) 
                                                        | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[4U] 
                                                           >> 0x00000017U))))
                                                    : 0U));
        }
        if (vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) {
            vlSelfRef.__PVT__fp_Y_stage1_vld = 1U;
        } else if (vlSelfRef.__PVT__fp_Y_stage1_rdy) {
            vlSelfRef.__PVT__fp_Y_stage1_vld = 0U;
        }
        if (vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) {
            vlSelfRef.__PVT__fp_X_stage1_vld = 1U;
        } else if (vlSelfRef.__PVT__fp_X_stage1_rdy) {
            vlSelfRef.__PVT__fp_X_stage1_vld = 0U;
        }
    } else {
        vlSelfRef.__PVT__fp_X_info_d = 0U;
        vlSelfRef.__PVT__fp_X_log2_datout_d = 0U;
        vlSelfRef.__PVT__fp_Xindex_info_d = 0U;
        vlSelfRef.__PVT__fp_X_stage2_vld = 0U;
        vlSelfRef.__PVT__fp_Xshift = 0U;
        vlSelfRef.__PVT__fp_Xshift_oflow = 0U;
        vlSelfRef.__PVT__fp_Xshift_frac = 0U;
        vlSelfRef.__PVT__mon_fp_Xindex = 0U;
        vlSelfRef.__PVT__fp_X_index_uflow = 0U;
        vlSelfRef.__PVT__fp_Xindex = 0U;
        vlSelfRef.__PVT__fp_Yindex_info_d = 0U;
        vlSelfRef.__PVT__fp_Yshift_oflow = 0U;
        vlSelfRef.__PVT__fp_Yshift_frac = 0U;
        vlSelfRef.__PVT__fp_Yshift = 0U;
        vlSelfRef.__PVT__fp_Y_stage1_vld = 0U;
        vlSelfRef.__PVT__fp_X_stage1_vld = 0U;
    }
    vlSelfRef.__PVT__fp_log2_datin = ((IData)(vlSelfRef.__PVT__fp_X_uflow)
                                       ? 0U : vlSelf->__PVT__u_CDP_DP_LUTCTRL_XOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d);
    __Vtemp_11[0U] = 0U;
    __Vtemp_11[1U] = 0U;
    __Vtemp_11[2U] = 0U;
    __Vtemp_11[3U] = 0U;
    __Vtemp_11[4U] = vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0;
    __Vtemp_11[5U] = 0U;
    __Vtemp_11[6U] = 0U;
    __Vtemp_11[7U] = 0U;
    __Vtemp_11[8U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2993 = (0x000001ffU 
                                                   & ((0x7fU 
                                                       <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                       - (IData)(0x007fU))
                                                       : 
                                                      ((IData)(0x007eU) 
                                                       - (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))));
    VL_SHIFTL_WWI(278,278,8, __Vtemp_12, __Vtemp_11, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2993)));
    __Vtemp_16[0U] = 0U;
    __Vtemp_16[1U] = 0U;
    __Vtemp_16[2U] = 0U;
    __Vtemp_16[3U] = (vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0 
                      << 0x0000001fU);
    __Vtemp_16[4U] = (0x00400000U | (vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0 
                                     >> 1U));
    __Vtemp_16[5U] = 0U;
    __Vtemp_16[6U] = 0U;
    __Vtemp_16[7U] = 0U;
    __Vtemp_16[8U] = 0U;
    VL_SHIFTR_WWI(278,278,8, __Vtemp_17, __Vtemp_16, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2993)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[0U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[0U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_12[0U] : __Vtemp_17[0U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[1U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[1U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_12[1U] : __Vtemp_17[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[2U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[2U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_12[2U] : __Vtemp_17[2U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[3U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[3U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_12[3U] : __Vtemp_17[3U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[4U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[4U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_12[4U] : __Vtemp_17[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[5U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[5U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_12[5U] : __Vtemp_17[5U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[6U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[6U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_12[6U] : __Vtemp_17[6U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[7U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[7U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_12[7U] : __Vtemp_17[7U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[8U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[8U] & 
           ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))
             ? __Vtemp_12[8U] : __Vtemp_17[8U]));
    __Vtemp_21[0U] = 1U;
    __Vtemp_21[1U] = 0U;
    __Vtemp_21[2U] = 0U;
    __Vtemp_21[3U] = 0U;
    VL_SHIFTL_WWI(128,128,8, __Vtemp_22, __Vtemp_21, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2993)));
    if ((0x7fU <= (IData)(vlSelf->__PVT__u_CDP_DP_LUTCTRL_YOFFSET->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23))) {
        __Vtemp_26[0U] = __Vtemp_22[0U];
        __Vtemp_26[1U] = __Vtemp_22[1U];
        __Vtemp_26[2U] = __Vtemp_22[2U];
        __Vtemp_26[3U] = __Vtemp_22[3U];
    } else {
        __Vtemp_26[0U] = 0U;
        __Vtemp_26[1U] = 0U;
        __Vtemp_26[2U] = 0U;
        __Vtemp_26[3U] = 0U;
    }
    __Vtemp_26[4U] = 0U;
    __Vtemp_30[0U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[5U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[4U] 
                                 >> 0x00000017U));
    __Vtemp_30[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[6U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[5U] 
                                 >> 0x00000017U));
    __Vtemp_30[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[7U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[6U] 
                                 >> 0x00000017U));
    __Vtemp_30[3U] = (0x7fffffffU & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[8U] 
                                      << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2994[7U] 
                                                >> 0x00000017U)));
    __Vtemp_30[4U] = 0U;
    VL_ADD_W(5, __Vtemp_31, __Vtemp_26, __Vtemp_30);
    vlSelfRef.__PVT__Y_fp32_int[0U] = __Vtemp_31[0U];
    vlSelfRef.__PVT__Y_fp32_int[1U] = __Vtemp_31[1U];
    vlSelfRef.__PVT__Y_fp32_int[2U] = __Vtemp_31[2U];
    vlSelfRef.__PVT__Y_fp32_int[3U] = __Vtemp_31[3U];
    vlSelfRef.__PVT__Y_fp32_int[4U] = (1U & __Vtemp_31[4U]);
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
}

void Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__5(Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__Y_stage1_in_rdy_d1)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__Y_stage1_in_rdy)) 
                   | (IData)(vlSelfRef.__PVT__int_Y_stage1_pvld))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__load_int_stage1) {
            vlSelfRef.__PVT__dat_info_d = vlSelfRef.__PVT__dat_info;
            vlSelfRef.__PVT__mon_dec_Xindex_msb = (
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (vlSelfRef.__PVT__dat_info 
                                                                  >> 0x21U)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelfRef.__PVT__X_exp)
                                                           ? 
                                                          ((1U 
                                                            & (~ 
                                                               ((vlSelfRef.__PVT__log2_datout_msb 
                                                                 < 
                                                                 (0x0000007fU 
                                                                  & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset))) 
                                                                & (~ 
                                                                   ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset) 
                                                                    >> 7U))))) 
                                                           && (1U 
                                                               & ((VL_EXTENDS_II(24,23, vlSelfRef.__PVT__log2_datout_msb) 
                                                                   - 
                                                                   VL_EXTENDS_II(24,23, 
                                                                                ((0x007fff00U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset) 
                                                                                >> 7U)))) 
                                                                                << 8U)) 
                                                                                | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset)))) 
                                                                  >> 0x00000017U)))
                                                           : 
                                                          (vlSelfRef.__PVT__log2_datout_msb 
                                                           >> 0x00000017U))));
            vlSelfRef.__PVT__mon_dec_Xindex_lsb = (
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (vlSelfRef.__PVT__dat_info 
                                                                  >> 0x20U)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelfRef.__PVT__X_exp)
                                                           ? 
                                                          ((1U 
                                                            & (~ 
                                                               ((vlSelfRef.__PVT__log2_datout_lsb 
                                                                 < (QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset))))) 
                                                                & (~ 
                                                                   ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset) 
                                                                    >> 7U))))) 
                                                           && (1U 
                                                               & (IData)(
                                                                         (1ULL 
                                                                          & ((VL_EXTENDS_QQ(40,39, vlSelfRef.__PVT__log2_datout_lsb) 
                                                                              - 
                                                                              VL_EXTENDS_QQ(40,39, 
                                                                                (((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset) 
                                                                                >> 7U))))))) 
                                                                                << 8U) 
                                                                                | (QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset))))) 
                                                                             >> 0x00000027U)))))
                                                           : (IData)(
                                                                     (vlSelfRef.__PVT__log2_datout_lsb 
                                                                      >> 0x00000027U)))));
            vlSelfRef.__PVT__dec_Xindex_msb = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__dat_info 
                                                           >> 0x21U)))
                                                ? 0U
                                                : (0x007fffffU 
                                                   & ((IData)(vlSelfRef.__PVT__X_exp)
                                                       ? 
                                                      (((vlSelfRef.__PVT__log2_datout_msb 
                                                         < 
                                                         (0x0000007fU 
                                                          & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset))) 
                                                        & (~ 
                                                           ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset) 
                                                            >> 7U)))
                                                        ? 0U
                                                        : 
                                                       ((0x00ffffffU 
                                                         & VL_EXTENDS_II(24,23, vlSelfRef.__PVT__log2_datout_msb)) 
                                                        - 
                                                        (0x00ffffffU 
                                                         & VL_EXTENDS_II(24,23, 
                                                                         ((0x007fff00U 
                                                                           & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset) 
                                                                                >> 7U)))) 
                                                                              << 8U)) 
                                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset))))))
                                                       : vlSelfRef.__PVT__log2_datout_msb)));
            vlSelfRef.__PVT__int_X_index_uflow_msb 
                = ((1U & (~ (IData)((vlSelfRef.__PVT__dat_info 
                                     >> 0x21U)))) && 
                   ((IData)(vlSelfRef.__PVT__X_exp) 
                    && ((vlSelfRef.__PVT__log2_datout_msb 
                         < (0x0000007fU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset))) 
                        & (~ ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset) 
                              >> 7U)))));
            vlSelfRef.__PVT__int_X_index_uflow_lsb 
                = ((1U & (~ (IData)((vlSelfRef.__PVT__dat_info 
                                     >> 0x20U)))) && 
                   ((IData)(vlSelfRef.__PVT__X_exp) 
                    && ((vlSelfRef.__PVT__log2_datout_lsb 
                         < (QData)((IData)((0x0000007fU 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset))))) 
                        & (~ ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset) 
                              >> 7U)))));
            vlSelfRef.__PVT__dec_Xindex_lsb = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__dat_info 
                                                           >> 0x20U)))
                                                ? 0ULL
                                                : (0x0000007fffffffffULL 
                                                   & ((IData)(vlSelfRef.__PVT__X_exp)
                                                       ? 
                                                      (((vlSelfRef.__PVT__log2_datout_lsb 
                                                         < (QData)((IData)(
                                                                           (0x0000007fU 
                                                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset))))) 
                                                        & (~ 
                                                           ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset) 
                                                            >> 7U)))
                                                        ? 0ULL
                                                        : 
                                                       ((0x000000ffffffffffULL 
                                                         & VL_EXTENDS_QQ(40,39, vlSelfRef.__PVT__log2_datout_lsb)) 
                                                        - 
                                                        (0x000000ffffffffffULL 
                                                         & VL_EXTENDS_QQ(40,39, 
                                                                         (((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset) 
                                                                                >> 7U))))))) 
                                                                           << 8U) 
                                                                          | (QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset)))))))
                                                       : vlSelfRef.__PVT__log2_datout_lsb)));
        }
        if (vlSelfRef.__PVT__load_int_stage2) {
            __Vtemp_1[0U] = 0x00000040U;
            __Vtemp_1[1U] = 0U;
            __Vtemp_1[2U] = 0U;
            __Vtemp_1[3U] = 0U;
            if ((1U & (IData)((vlSelfRef.__PVT__dat_info_index_sub 
                               >> 0x20U)))) {
                vlSelfRef.__PVT__shift_int16 = 0U;
                vlSelfRef.__PVT__shift_lsb_int8 = 0U;
            } else {
                vlSelfRef.__PVT__shift_int16 = (0x000003ffU 
                                                & ((0x00000040U 
                                                    & (IData)(vlSelfRef.__PVT__shift_bits))
                                                    ? 
                                                   (VL_LTE_W(4, __Vtemp_1, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982)
                                                     ? 0x0040U
                                                     : 
                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982[0U])
                                                    : 
                                                   ((0x0000000000000040ULL 
                                                     <= 
                                                     (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982[3U])) 
                                                       << 0x00000039U) 
                                                      | (((QData)((IData)(
                                                                          vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982[2U])) 
                                                          << 0x00000019U) 
                                                         | ((QData)((IData)(
                                                                            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982[1U])) 
                                                            >> 7U))))
                                                     ? 0x0040U
                                                     : 
                                                    ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982[1U] 
                                                      << 0x00000019U) 
                                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982[1U] 
                                                        >> 7U)))));
                vlSelfRef.__PVT__shift_lsb_int8 = (0x000003ffU 
                                                   & ((0x00000020U 
                                                       & (IData)(vlSelfRef.__PVT__shift_bits))
                                                       ? 
                                                      ((0x0000000000000040ULL 
                                                        <= vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2983)
                                                        ? 0x0040U
                                                        : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2983))
                                                       : 
                                                      ((0x00000040U 
                                                        <= (IData)(
                                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2983 
                                                                    >> 0x00000017U)))
                                                        ? 0x0040U
                                                        : (IData)(
                                                                  (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2983 
                                                                   >> 0x00000017U)))));
            }
            vlSelfRef.__PVT__shift_msb_int8 = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__dat_info_index_sub 
                                                           >> 0x21U)))
                                                ? 0U
                                                : (0x000003ffU 
                                                   & ((0x00000020U 
                                                       & (IData)(vlSelfRef.__PVT__shift_bits))
                                                       ? 
                                                      ((0x0000000000000040ULL 
                                                        <= vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2984)
                                                        ? 0x0040U
                                                        : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2984))
                                                       : 
                                                      ((0x00000040U 
                                                        <= (IData)(
                                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2984 
                                                                    >> 0x00000017U)))
                                                        ? 0x0040U
                                                        : (IData)(
                                                                  (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2984 
                                                                   >> 0x00000017U))))));
            vlSelfRef.__PVT__dat_info_shift = vlSelfRef.__PVT__dat_info_index_sub;
            vlSelfRef.__PVT__X_lin_frac_int16 = ((0x00000040U 
                                                  & (IData)(vlSelfRef.__PVT__shift_bits))
                                                  ? 0U
                                                  : 
                                                 (0x0000ffffU 
                                                  & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982[1U] 
                                                      << 9U) 
                                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982[0U] 
                                                        >> 0x00000017U))));
            if ((0x00000020U & (IData)(vlSelfRef.__PVT__shift_bits))) {
                vlSelfRef.__PVT__X_lin_frac_int8_lsb = 0U;
                vlSelfRef.__PVT__X_lin_frac_int8_msb = 0U;
            } else {
                vlSelfRef.__PVT__X_lin_frac_int8_lsb 
                    = (0x0000ffffU & (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2983 
                                              >> 7U)));
                vlSelfRef.__PVT__X_lin_frac_int8_msb 
                    = (0x0000ffffU & (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2984 
                                              >> 7U)));
            }
            __Vtemp_2[0U] = 0x00000040U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
            __Vtemp_2[3U] = 0U;
            vlSelfRef.__PVT__X_int16_oflow = ((1U & 
                                               (~ (IData)(
                                                          (vlSelfRef.__PVT__dat_info_index_sub 
                                                           >> 0x20U)))) 
                                              && ((0x00000040U 
                                                   & (IData)(vlSelfRef.__PVT__shift_bits))
                                                   ? 
                                                  VL_LTE_W(4, __Vtemp_2, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982)
                                                   : 
                                                  (0x0000000000000040ULL 
                                                   <= 
                                                   (((QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982[3U])) 
                                                     << 0x00000039U) 
                                                    | (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982[2U])) 
                                                        << 0x00000019U) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982[1U])) 
                                                          >> 7U))))));
            vlSelfRef.__PVT__X_int8_oflow_lsb = ((1U 
                                                  & (~ (IData)(
                                                               (vlSelfRef.__PVT__dat_info_index_sub 
                                                                >> 0x20U)))) 
                                                 && ((0x00000020U 
                                                      & (IData)(vlSelfRef.__PVT__shift_bits))
                                                      ? 
                                                     (0x0000000000000040ULL 
                                                      <= vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2983)
                                                      : 
                                                     (0x00000040U 
                                                      <= (IData)(
                                                                 (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2983 
                                                                  >> 0x00000017U)))));
            vlSelfRef.__PVT__X_int8_oflow_msb = ((1U 
                                                  & (~ (IData)(
                                                               (vlSelfRef.__PVT__dat_info_index_sub 
                                                                >> 0x21U)))) 
                                                 && ((0x00000020U 
                                                      & (IData)(vlSelfRef.__PVT__shift_bits))
                                                      ? 
                                                     (0x0000000000000040ULL 
                                                      <= vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2984)
                                                      : 
                                                     (0x00000040U 
                                                      <= (IData)(
                                                                 (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2984 
                                                                  >> 0x00000017U)))));
        }
        if (vlSelfRef.__PVT__load_int_stage0) {
            vlSelfRef.__PVT__int_X_input_uflow_d = 
                (((IData)(vlSelfRef.__PVT__int_X_input_uflow_msb) 
                  << 1U) | (IData)(vlSelfRef.__PVT__int_X_input_uflow_lsb));
            if (vlSelfRef.__PVT__int_X_input_uflow_msb) {
                vlSelfRef.__PVT__log2_frac_msb = 0U;
                vlSelfRef.__PVT__log2_datout_msb = 0U;
            } else if (vlSelfRef.__PVT__X_exp) {
                if ((0x00200000U & vlSelfRef.__PVT__dec_offset_msb)) {
                    vlSelfRef.__PVT__log2_frac_msb 
                        = (0x001fffffU & vlSelfRef.__PVT__dec_offset_msb);
                    vlSelfRef.__PVT__log2_datout_msb = 0x00000015U;
                } else if ((0x00100000U & vlSelfRef.__PVT__dec_offset_msb)) {
                    vlSelfRef.__PVT__log2_frac_msb 
                        = (0x001ffffeU & (vlSelfRef.__PVT__dec_offset_msb 
                                          << 1U));
                    vlSelfRef.__PVT__log2_datout_msb = 0x00000014U;
                } else if ((0x00080000U & vlSelfRef.__PVT__dec_offset_msb)) {
                    vlSelfRef.__PVT__log2_frac_msb 
                        = (0x001ffffcU & (vlSelfRef.__PVT__dec_offset_msb 
                                          << 2U));
                    vlSelfRef.__PVT__log2_datout_msb = 0x00000013U;
                } else if ((0x00040000U & vlSelfRef.__PVT__dec_offset_msb)) {
                    vlSelfRef.__PVT__log2_frac_msb 
                        = (0x001ffff8U & (vlSelfRef.__PVT__dec_offset_msb 
                                          << 3U));
                    vlSelfRef.__PVT__log2_datout_msb = 0x00000012U;
                } else if ((0x00020000U & vlSelfRef.__PVT__dec_offset_msb)) {
                    vlSelfRef.__PVT__log2_frac_msb 
                        = (0x001ffff0U & (vlSelfRef.__PVT__dec_offset_msb 
                                          << 4U));
                    vlSelfRef.__PVT__log2_datout_msb = 0x00000011U;
                } else if ((0x00010000U & vlSelfRef.__PVT__dec_offset_msb)) {
                    vlSelfRef.__PVT__log2_frac_msb 
                        = (0x001fffe0U & (vlSelfRef.__PVT__dec_offset_msb 
                                          << 5U));
                    vlSelfRef.__PVT__log2_datout_msb = 0x00000010U;
                } else if ((0x00008000U & vlSelfRef.__PVT__dec_offset_msb)) {
                    vlSelfRef.__PVT__log2_frac_msb 
                        = (0x001fffc0U & (vlSelfRef.__PVT__dec_offset_msb 
                                          << 6U));
                    vlSelfRef.__PVT__log2_datout_msb = 0x0000000fU;
                } else if ((0x00004000U & vlSelfRef.__PVT__dec_offset_msb)) {
                    vlSelfRef.__PVT__log2_frac_msb 
                        = (0x001fff80U & (vlSelfRef.__PVT__dec_offset_msb 
                                          << 7U));
                    vlSelfRef.__PVT__log2_datout_msb = 0x0000000eU;
                } else if ((0x00002000U & vlSelfRef.__PVT__dec_offset_msb)) {
                    vlSelfRef.__PVT__log2_frac_msb 
                        = (0x001fff00U & (vlSelfRef.__PVT__dec_offset_msb 
                                          << 8U));
                    vlSelfRef.__PVT__log2_datout_msb = 0x0000000dU;
                } else if ((0x00001000U & vlSelfRef.__PVT__dec_offset_msb)) {
                    vlSelfRef.__PVT__log2_frac_msb 
                        = (0x001ffe00U & (vlSelfRef.__PVT__dec_offset_msb 
                                          << 9U));
                    vlSelfRef.__PVT__log2_datout_msb = 0x0000000cU;
                } else if ((0x00000800U & vlSelfRef.__PVT__dec_offset_msb)) {
                    vlSelfRef.__PVT__log2_frac_msb 
                        = (0x001ffc00U & (vlSelfRef.__PVT__dec_offset_msb 
                                          << 0x0000000aU));
                    vlSelfRef.__PVT__log2_datout_msb = 0x0000000bU;
                } else if ((0x00000400U & vlSelfRef.__PVT__dec_offset_msb)) {
                    vlSelfRef.__PVT__log2_frac_msb 
                        = (0x001ff800U & (vlSelfRef.__PVT__dec_offset_msb 
                                          << 0x0000000bU));
                    vlSelfRef.__PVT__log2_datout_msb = 0x0000000aU;
                } else if ((0x00000200U & vlSelfRef.__PVT__dec_offset_msb)) {
                    vlSelfRef.__PVT__log2_frac_msb 
                        = (0x001ff000U & (vlSelfRef.__PVT__dec_offset_msb 
                                          << 0x0000000cU));
                    vlSelfRef.__PVT__log2_datout_msb = 9U;
                } else if ((0x00000100U & vlSelfRef.__PVT__dec_offset_msb)) {
                    vlSelfRef.__PVT__log2_frac_msb 
                        = (0x001fe000U & (vlSelfRef.__PVT__dec_offset_msb 
                                          << 0x0000000dU));
                    vlSelfRef.__PVT__log2_datout_msb = 8U;
                } else if ((0x00000080U & vlSelfRef.__PVT__dec_offset_msb)) {
                    vlSelfRef.__PVT__log2_frac_msb 
                        = (0x001fc000U & (vlSelfRef.__PVT__dec_offset_msb 
                                          << 0x0000000eU));
                    vlSelfRef.__PVT__log2_datout_msb = 7U;
                } else if ((0x00000040U & vlSelfRef.__PVT__dec_offset_msb)) {
                    vlSelfRef.__PVT__log2_frac_msb 
                        = (0x001f8000U & (vlSelfRef.__PVT__dec_offset_msb 
                                          << 0x0000000fU));
                    vlSelfRef.__PVT__log2_datout_msb = 6U;
                } else if ((0x00000020U & vlSelfRef.__PVT__dec_offset_msb)) {
                    vlSelfRef.__PVT__log2_frac_msb 
                        = (0x001f0000U & (vlSelfRef.__PVT__dec_offset_msb 
                                          << 0x00000010U));
                    vlSelfRef.__PVT__log2_datout_msb = 5U;
                } else if ((0x00000010U & vlSelfRef.__PVT__dec_offset_msb)) {
                    vlSelfRef.__PVT__log2_frac_msb 
                        = (0x001e0000U & (vlSelfRef.__PVT__dec_offset_msb 
                                          << 0x00000011U));
                    vlSelfRef.__PVT__log2_datout_msb = 4U;
                } else if ((8U & vlSelfRef.__PVT__dec_offset_msb)) {
                    vlSelfRef.__PVT__log2_frac_msb 
                        = (0x001c0000U & (vlSelfRef.__PVT__dec_offset_msb 
                                          << 0x00000012U));
                    vlSelfRef.__PVT__log2_datout_msb = 3U;
                } else if ((4U & vlSelfRef.__PVT__dec_offset_msb)) {
                    vlSelfRef.__PVT__log2_frac_msb 
                        = (0x00180000U & (vlSelfRef.__PVT__dec_offset_msb 
                                          << 0x00000013U));
                    vlSelfRef.__PVT__log2_datout_msb = 2U;
                } else if ((2U & vlSelfRef.__PVT__dec_offset_msb)) {
                    vlSelfRef.__PVT__log2_frac_msb 
                        = (0x00100000U & (vlSelfRef.__PVT__dec_offset_msb 
                                          << 0x00000014U));
                    vlSelfRef.__PVT__log2_datout_msb = 1U;
                } else if ((1U & vlSelfRef.__PVT__dec_offset_msb)) {
                    vlSelfRef.__PVT__log2_frac_msb = 0U;
                    vlSelfRef.__PVT__log2_datout_msb = 0U;
                }
            } else {
                vlSelfRef.__PVT__log2_datout_msb = vlSelfRef.__PVT__dec_offset_msb;
            }
            if (vlSelfRef.__PVT__int_X_input_uflow_lsb) {
                vlSelfRef.__PVT__log2_frac_lsb = 0ULL;
                vlSelfRef.__PVT__log2_datout_lsb = 0ULL;
            } else if (vlSelfRef.__PVT__X_exp) {
                if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                   >> 0x25U)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = (0x0000001fffffffffULL & vlSelfRef.__PVT__dec_offset_lsb);
                    vlSelfRef.__PVT__log2_datout_lsb = 0x0000000000000025ULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 0x24U)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = (0x0000001ffffffffeULL & 
                           (vlSelfRef.__PVT__dec_offset_lsb 
                            << 1U));
                    vlSelfRef.__PVT__log2_datout_lsb = 0x0000000000000024ULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 0x23U)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = (0x0000001ffffffffcULL & 
                           (vlSelfRef.__PVT__dec_offset_lsb 
                            << 2U));
                    vlSelfRef.__PVT__log2_datout_lsb = 0x0000000000000023ULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 0x22U)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = (0x0000001ffffffff8ULL & 
                           (vlSelfRef.__PVT__dec_offset_lsb 
                            << 3U));
                    vlSelfRef.__PVT__log2_datout_lsb = 0x0000000000000022ULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 0x21U)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = (0x0000001ffffffff0ULL & 
                           (vlSelfRef.__PVT__dec_offset_lsb 
                            << 4U));
                    vlSelfRef.__PVT__log2_datout_lsb = 0x0000000000000021ULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 0x20U)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)(vlSelfRef.__PVT__dec_offset_lsb)) 
                           << 5U);
                    vlSelfRef.__PVT__log2_datout_lsb = 0x0000000000000020ULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 0x1fU)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x7fffffffU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 6U);
                    vlSelfRef.__PVT__log2_datout_lsb = 0x000000000000001fULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 0x1eU)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x3fffffffU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 7U);
                    vlSelfRef.__PVT__log2_datout_lsb = 0x000000000000001eULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 0x1dU)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x1fffffffU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 8U);
                    vlSelfRef.__PVT__log2_datout_lsb = 0x000000000000001dULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 0x1cU)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x0fffffffU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 9U);
                    vlSelfRef.__PVT__log2_datout_lsb = 0x000000000000001cULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 0x1bU)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x07ffffffU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 0x0000000aU);
                    vlSelfRef.__PVT__log2_datout_lsb = 0x000000000000001bULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 0x1aU)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x03ffffffU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 0x0000000bU);
                    vlSelfRef.__PVT__log2_datout_lsb = 0x000000000000001aULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 0x19U)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x01ffffffU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 0x0000000cU);
                    vlSelfRef.__PVT__log2_datout_lsb = 0x0000000000000019ULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 0x18U)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x00ffffffU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 0x0000000dU);
                    vlSelfRef.__PVT__log2_datout_lsb = 0x0000000000000018ULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 0x17U)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x007fffffU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 0x0000000eU);
                    vlSelfRef.__PVT__log2_datout_lsb = 0x0000000000000017ULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 0x16U)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x003fffffU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 0x0000000fU);
                    vlSelfRef.__PVT__log2_datout_lsb = 0x0000000000000016ULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 0x15U)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x001fffffU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 0x00000010U);
                    vlSelfRef.__PVT__log2_datout_lsb = 0x0000000000000015ULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 0x14U)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x000fffffU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 0x00000011U);
                    vlSelfRef.__PVT__log2_datout_lsb = 0x0000000000000014ULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 0x13U)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x0007ffffU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 0x00000012U);
                    vlSelfRef.__PVT__log2_datout_lsb = 0x0000000000000013ULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 0x12U)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x0003ffffU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 0x00000013U);
                    vlSelfRef.__PVT__log2_datout_lsb = 0x0000000000000012ULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 0x11U)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x0001ffffU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 0x00000014U);
                    vlSelfRef.__PVT__log2_datout_lsb = 0x0000000000000011ULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 0x10U)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x0000ffffU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 0x00000015U);
                    vlSelfRef.__PVT__log2_datout_lsb = 0x0000000000000010ULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 0x0fU)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x00007fffU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 0x00000016U);
                    vlSelfRef.__PVT__log2_datout_lsb = 0x000000000000000fULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 0x0eU)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x00003fffU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 0x00000017U);
                    vlSelfRef.__PVT__log2_datout_lsb = 0x000000000000000eULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 0x0dU)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x00001fffU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 0x00000018U);
                    vlSelfRef.__PVT__log2_datout_lsb = 0x000000000000000dULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 0x0cU)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x00000fffU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 0x00000019U);
                    vlSelfRef.__PVT__log2_datout_lsb = 0x000000000000000cULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 0x0bU)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x000007ffU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 0x0000001aU);
                    vlSelfRef.__PVT__log2_datout_lsb = 0x000000000000000bULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 0x0aU)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x000003ffU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 0x0000001bU);
                    vlSelfRef.__PVT__log2_datout_lsb = 0x000000000000000aULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 9U)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x000001ffU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 0x0000001cU);
                    vlSelfRef.__PVT__log2_datout_lsb = 9ULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 8U)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x000000ffU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 0x0000001dU);
                    vlSelfRef.__PVT__log2_datout_lsb = 8ULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 7U)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x0000007fU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 0x0000001eU);
                    vlSelfRef.__PVT__log2_datout_lsb = 7ULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 6U)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x0000003fU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 0x0000001fU);
                    vlSelfRef.__PVT__log2_datout_lsb = 6ULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 5U)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x0000001fU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 0x00000020U);
                    vlSelfRef.__PVT__log2_datout_lsb = 5ULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 4U)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((0x0000000fU 
                                            & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 0x00000021U);
                    vlSelfRef.__PVT__log2_datout_lsb = 4ULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 3U)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((7U & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 0x00000022U);
                    vlSelfRef.__PVT__log2_datout_lsb = 3ULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 2U)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((3U & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 0x00000023U);
                    vlSelfRef.__PVT__log2_datout_lsb = 2ULL;
                } else if ((1U & (IData)((vlSelfRef.__PVT__dec_offset_lsb 
                                          >> 1U)))) {
                    vlSelfRef.__PVT__log2_frac_lsb 
                        = ((QData)((IData)((1U & (IData)(vlSelfRef.__PVT__dec_offset_lsb)))) 
                           << 0x00000024U);
                    vlSelfRef.__PVT__log2_datout_lsb = 1ULL;
                } else if ((1U & (IData)(vlSelfRef.__PVT__dec_offset_lsb))) {
                    vlSelfRef.__PVT__log2_frac_lsb = 0ULL;
                    vlSelfRef.__PVT__log2_datout_lsb = 0ULL;
                }
            } else {
                vlSelfRef.__PVT__log2_datout_lsb = vlSelfRef.__PVT__dec_offset_lsb;
            }
        }
        if (vlSelfRef.__PVT__load_in_intX) {
            vlSelfRef.__PVT__mon_dec_offset_msb = (
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__PVT__less_than_win_s))) 
                                                   && (1U 
                                                       & ((VL_EXTENDS_II(23,22, vlSelfRef.__PVT__dec_offset_datin_msb) 
                                                           - 
                                                           VL_EXTENDS_II(23,22, 
                                                                         (0x003fffffU 
                                                                          & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_le_start)))) 
                                                          >> 0x00000016U)));
            vlSelfRef.__PVT__mon_dec_offset_lsb = (
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__PVT__less_than_win_start))) 
                                                   && (1U 
                                                       & (IData)(
                                                                 (1ULL 
                                                                  & ((VL_EXTENDS_QQ(39,38, vlSelfRef.__PVT__dec_offset_datin_lsb) 
                                                                      - 
                                                                      VL_EXTENDS_QQ(39,38, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_le_start)) 
                                                                     >> 0x00000026U)))));
            if (vlSelfRef.__PVT__less_than_win_s) {
                vlSelfRef.__PVT__int_X_input_uflow_msb = 1U;
                vlSelfRef.__PVT__dec_offset_msb = 0U;
            } else {
                vlSelfRef.__PVT__int_X_input_uflow_msb = 0U;
                vlSelfRef.__PVT__dec_offset_msb = (0x003fffffU 
                                                   & ((0x007fffffU 
                                                       & VL_EXTENDS_II(23,22, vlSelfRef.__PVT__dec_offset_datin_msb)) 
                                                      - 
                                                      (0x007fffffU 
                                                       & VL_EXTENDS_II(23,22, 
                                                                       (0x003fffffU 
                                                                        & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_le_start))))));
            }
            if (vlSelfRef.__PVT__less_than_win_start) {
                vlSelfRef.__PVT__int_X_input_uflow_lsb = 1U;
                vlSelfRef.__PVT__dec_offset_lsb = 0ULL;
            } else {
                vlSelfRef.__PVT__int_X_input_uflow_lsb = 0U;
                vlSelfRef.__PVT__dec_offset_lsb = (0x0000003fffffffffULL 
                                                   & ((0x0000007fffffffffULL 
                                                       & VL_EXTENDS_QQ(39,38, vlSelfRef.__PVT__dec_offset_datin_lsb)) 
                                                      - 
                                                      (0x0000007fffffffffULL 
                                                       & VL_EXTENDS_QQ(39,38, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_le_start))));
            }
        }
        if (vlSelfRef.__PVT__int_stage2_pvld) {
            vlSelfRef.__PVT__int_stage3_pvld = 1U;
        } else if (vlSelfRef.__PVT__int_stage3_prdy) {
            vlSelfRef.__PVT__int_stage3_pvld = 0U;
        }
        if (vlSelfRef.__PVT__load_int_Y_stage0) {
            vlSelfRef.__PVT__Y_dat_info_shift = (((IData)(vlSelfRef.__PVT__int_Y_input_uflow_msb) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__int_Y_input_uflow_lsb));
            if ((0x00000020U & (IData)(vlSelfRef.__PVT__Y_shift_bits))) {
                vlSelfRef.__PVT__Y_lin_frac_int8_msb = 0U;
                vlSelfRef.__PVT__Y_lin_frac_int8_lsb = 0U;
            } else {
                vlSelfRef.__PVT__Y_lin_frac_int8_msb 
                    = (0x0000ffffU & (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2989 
                                              >> 6U)));
                vlSelfRef.__PVT__Y_lin_frac_int8_lsb 
                    = (0x0000ffffU & (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2988 
                                              >> 6U)));
            }
            vlSelfRef.__PVT__Y_lin_frac_int16 = ((0x00000040U 
                                                  & (IData)(vlSelfRef.__PVT__Y_shift_bits))
                                                  ? 0U
                                                  : 
                                                 (0x0000ffffU 
                                                  & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2987[1U] 
                                                      << 0x0000000aU) 
                                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2987[0U] 
                                                        >> 0x00000016U))));
            vlSelfRef.__PVT__Y_int8_oflow_msb = ((1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__int_Y_input_uflow_msb))) 
                                                 && ((0x00000020U 
                                                      & (IData)(vlSelfRef.__PVT__Y_shift_bits))
                                                      ? 
                                                     (0x0000000000000100ULL 
                                                      <= vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2989)
                                                      : 
                                                     (0x00000100U 
                                                      <= (IData)(
                                                                 (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2989 
                                                                  >> 0x00000016U)))));
            vlSelfRef.__PVT__Y_shift_msb_int8 = ((IData)(vlSelfRef.__PVT__int_Y_input_uflow_msb)
                                                  ? 0U
                                                  : 
                                                 (0x000003ffU 
                                                  & ((0x00000020U 
                                                      & (IData)(vlSelfRef.__PVT__Y_shift_bits))
                                                      ? 
                                                     ((0x0000000000000100ULL 
                                                       <= vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2989)
                                                       ? 0x0100U
                                                       : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2989))
                                                      : 
                                                     ((0x00000100U 
                                                       <= (IData)(
                                                                  (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2989 
                                                                   >> 0x00000016U)))
                                                       ? 0x0100U
                                                       : (IData)(
                                                                 (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2989 
                                                                  >> 0x00000016U))))));
            __Vtemp_3[0U] = 0x00000100U;
            __Vtemp_3[1U] = 0U;
            __Vtemp_3[2U] = 0U;
            __Vtemp_3[3U] = 0U;
            vlSelfRef.__PVT__Y_int16_oflow = ((1U & 
                                               (~ (IData)(vlSelfRef.__PVT__int_Y_input_uflow_lsb))) 
                                              && ((0x00000040U 
                                                   & (IData)(vlSelfRef.__PVT__Y_shift_bits))
                                                   ? 
                                                  VL_LTE_W(4, __Vtemp_3, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2987)
                                                   : 
                                                  (0x0000000000000100ULL 
                                                   <= 
                                                   (((QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2987[3U])) 
                                                     << 0x0000003aU) 
                                                    | (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2987[2U])) 
                                                        << 0x0000001aU) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2987[1U])) 
                                                          >> 6U))))));
            vlSelfRef.__PVT__Y_int8_oflow_lsb = ((1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__int_Y_input_uflow_lsb))) 
                                                 && ((0x00000020U 
                                                      & (IData)(vlSelfRef.__PVT__Y_shift_bits))
                                                      ? 
                                                     (0x0000000000000100ULL 
                                                      <= vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2988)
                                                      : 
                                                     (0x00000100U 
                                                      <= (IData)(
                                                                 (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2988 
                                                                  >> 0x00000016U)))));
            __Vtemp_4[0U] = 0x00000100U;
            __Vtemp_4[1U] = 0U;
            __Vtemp_4[2U] = 0U;
            __Vtemp_4[3U] = 0U;
            if (vlSelfRef.__PVT__int_Y_input_uflow_lsb) {
                vlSelfRef.__PVT__Y_shift_int16 = 0U;
                vlSelfRef.__PVT__Y_shift_lsb_int8 = 0U;
            } else {
                vlSelfRef.__PVT__Y_shift_int16 = (0x000003ffU 
                                                  & ((0x00000040U 
                                                      & (IData)(vlSelfRef.__PVT__Y_shift_bits))
                                                      ? 
                                                     (VL_LTE_W(4, __Vtemp_4, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2987)
                                                       ? 0x0100U
                                                       : 
                                                      vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2987[0U])
                                                      : 
                                                     ((0x0000000000000100ULL 
                                                       <= 
                                                       (((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2987[3U])) 
                                                         << 0x0000003aU) 
                                                        | (((QData)((IData)(
                                                                            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2987[2U])) 
                                                            << 0x0000001aU) 
                                                           | ((QData)((IData)(
                                                                              vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2987[1U])) 
                                                              >> 6U))))
                                                       ? 0x0100U
                                                       : 
                                                      ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2987[1U] 
                                                        << 0x0000001aU) 
                                                       | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2987[1U] 
                                                          >> 6U)))));
                vlSelfRef.__PVT__Y_shift_lsb_int8 = 
                    (0x000003ffU & ((0x00000020U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
                                     ? ((0x0000000000000100ULL 
                                         <= vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2988)
                                         ? 0x0100U : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2988))
                                     : ((0x00000100U 
                                         <= (IData)(
                                                    (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2988 
                                                     >> 0x00000016U)))
                                         ? 0x0100U : (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2988 
                                                              >> 0x00000016U)))));
            }
        }
        if (vlSelfRef.__PVT__load_din_intY) {
            vlSelfRef.__PVT__mon_Y_dec_offset_msb = 
                ((1U & (~ (IData)(vlSelfRef.__PVT__Y_less_than_win_s))) 
                 && (1U & ((VL_EXTENDS_II(23,22, vlSelfRef.__PVT__dec_offset_datin_msb) 
                            - VL_EXTENDS_II(23,22, 
                                            (0x003fffffU 
                                             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_lo_start)))) 
                           >> 0x00000016U)));
            vlSelfRef.__PVT__mon_Y_dec_offset_lsb = 
                ((1U & (~ (IData)(vlSelfRef.__PVT__Y_less_than_win_start))) 
                 && (1U & (IData)((1ULL & ((VL_EXTENDS_QQ(39,38, vlSelfRef.__PVT__dec_offset_datin_lsb) 
                                            - VL_EXTENDS_QQ(39,38, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_lo_start)) 
                                           >> 0x00000026U)))));
            vlSelfRef.__PVT__Y_dec_offset_msb = ((IData)(vlSelfRef.__PVT__Y_less_than_win_s)
                                                  ? 0U
                                                  : 
                                                 (0x003fffffU 
                                                  & ((0x007fffffU 
                                                      & VL_EXTENDS_II(23,22, vlSelfRef.__PVT__dec_offset_datin_msb)) 
                                                     - 
                                                     (0x007fffffU 
                                                      & VL_EXTENDS_II(23,22, 
                                                                      (0x003fffffU 
                                                                       & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_lo_start)))))));
            if (vlSelfRef.__PVT__Y_less_than_win_start) {
                vlSelfRef.__PVT__Y_dec_offset_lsb = 0ULL;
                vlSelfRef.__PVT__int_Y_input_uflow_msb 
                    = vlSelfRef.__PVT__Y_less_than_win_s;
                vlSelfRef.__PVT__int_Y_input_uflow_lsb = 1U;
            } else {
                vlSelfRef.__PVT__Y_dec_offset_lsb = 
                    (0x0000003fffffffffULL & ((0x0000007fffffffffULL 
                                               & VL_EXTENDS_QQ(39,38, vlSelfRef.__PVT__dec_offset_datin_lsb)) 
                                              - (0x0000007fffffffffULL 
                                                 & VL_EXTENDS_QQ(39,38, vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_lo_start))));
                vlSelfRef.__PVT__int_Y_input_uflow_msb 
                    = vlSelfRef.__PVT__Y_less_than_win_s;
                vlSelfRef.__PVT__int_Y_input_uflow_lsb = 0U;
            }
        }
        if (vlSelfRef.__PVT__int_stage1_pvld) {
            vlSelfRef.__PVT__int_stage2_pvld = 1U;
        } else if (vlSelfRef.__PVT__int_stage2_prdy) {
            vlSelfRef.__PVT__int_stage2_pvld = 0U;
        }
        if (vlSelfRef.__PVT__int_Y_stage0_pvld) {
            vlSelfRef.__PVT__int_Y_stage1_pvld = 1U;
        } else if (vlSelfRef.__PVT__Y_stage1_in_rdy) {
            vlSelfRef.__PVT__int_Y_stage1_pvld = 0U;
        }
        if (vlSelfRef.__PVT__int_stage0_pvld) {
            vlSelfRef.__PVT__int_stage1_pvld = 1U;
        } else if (vlSelfRef.__PVT__int_stage1_prdy) {
            vlSelfRef.__PVT__int_stage1_pvld = 0U;
        }
        if (vlSelfRef.__PVT__int_Y_proc_in_vld) {
            vlSelfRef.__PVT__int_Y_stage0_pvld = 1U;
        } else if (vlSelfRef.__PVT__int_Y_stage0_prdy) {
            vlSelfRef.__PVT__int_Y_stage0_pvld = 0U;
        }
        if (vlSelfRef.__PVT__int_X_proc_in_vld) {
            vlSelfRef.__PVT__int_stage0_pvld = 1U;
        } else if (vlSelfRef.__PVT__int_stage0_prdy) {
            vlSelfRef.__PVT__int_stage0_pvld = 0U;
        }
    } else {
        vlSelfRef.__PVT__dat_info_d = 0ULL;
        vlSelfRef.__PVT__mon_dec_offset_msb = 0U;
        vlSelfRef.__PVT__mon_Y_dec_offset_msb = 0U;
        vlSelfRef.__PVT__mon_dec_offset_lsb = 0U;
        vlSelfRef.__PVT__mon_Y_dec_offset_lsb = 0U;
        vlSelfRef.__PVT__Y_dec_offset_msb = 0U;
        vlSelfRef.__PVT__shift_int16 = 0U;
        vlSelfRef.__PVT__shift_lsb_int8 = 0U;
        vlSelfRef.__PVT__shift_msb_int8 = 0U;
        vlSelfRef.__PVT__Y_dec_offset_lsb = 0ULL;
        vlSelfRef.__PVT__dat_info_shift = 0ULL;
        vlSelfRef.__PVT__X_lin_frac_int16 = 0U;
        vlSelfRef.__PVT__X_lin_frac_int8_lsb = 0U;
        vlSelfRef.__PVT__X_lin_frac_int8_msb = 0U;
        vlSelfRef.__PVT__X_int16_oflow = 0U;
        vlSelfRef.__PVT__X_int8_oflow_lsb = 0U;
        vlSelfRef.__PVT__X_int8_oflow_msb = 0U;
        vlSelfRef.__PVT__int_X_input_uflow_d = 0U;
        vlSelfRef.__PVT__int_stage3_pvld = 0U;
        vlSelfRef.__PVT__log2_frac_msb = 0U;
        vlSelfRef.__PVT__log2_frac_lsb = 0ULL;
        vlSelfRef.__PVT__mon_dec_Xindex_msb = 0U;
        vlSelfRef.__PVT__mon_dec_Xindex_lsb = 0U;
        vlSelfRef.__PVT__dec_Xindex_msb = 0U;
        vlSelfRef.__PVT__int_X_index_uflow_msb = 0U;
        vlSelfRef.__PVT__int_X_index_uflow_lsb = 0U;
        vlSelfRef.__PVT__dec_Xindex_lsb = 0ULL;
        vlSelfRef.__PVT__Y_dat_info_shift = 0U;
        vlSelfRef.__PVT__Y_lin_frac_int8_msb = 0U;
        vlSelfRef.__PVT__Y_lin_frac_int16 = 0U;
        vlSelfRef.__PVT__Y_lin_frac_int8_lsb = 0U;
        vlSelfRef.__PVT__Y_int8_oflow_msb = 0U;
        vlSelfRef.__PVT__Y_shift_msb_int8 = 0U;
        vlSelfRef.__PVT__Y_int16_oflow = 0U;
        vlSelfRef.__PVT__Y_int8_oflow_lsb = 0U;
        vlSelfRef.__PVT__Y_shift_int16 = 0U;
        vlSelfRef.__PVT__Y_shift_lsb_int8 = 0U;
        vlSelfRef.__PVT__int_stage2_pvld = 0U;
        vlSelfRef.__PVT__log2_datout_msb = 0U;
        vlSelfRef.__PVT__log2_datout_lsb = 0ULL;
        vlSelfRef.__PVT__int_Y_input_uflow_msb = 0U;
        vlSelfRef.__PVT__int_Y_input_uflow_lsb = 0U;
        vlSelfRef.__PVT__int_Y_stage1_pvld = 0U;
        vlSelfRef.__PVT__int_stage1_pvld = 0U;
        vlSelfRef.__PVT__int_X_input_uflow_msb = 0U;
        vlSelfRef.__PVT__dec_offset_msb = 0U;
        vlSelfRef.__PVT__int_X_input_uflow_lsb = 0U;
        vlSelfRef.__PVT__dec_offset_lsb = 0ULL;
        vlSelfRef.__PVT__int_Y_stage0_pvld = 0U;
        vlSelfRef.__PVT__int_stage0_pvld = 0U;
    }
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
}

extern const VlWide<13>/*415:0*/ Vsim__ConstPool__CONST_h1bb950d3_0;

void Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__1(Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<13>/*415:0*/ __Vtemp_1;
    VlWide<13>/*415:0*/ __Vtemp_2;
    VlWide<9>/*287:0*/ __Vtemp_7;
    VlWide<9>/*287:0*/ __Vtemp_8;
    VlWide<9>/*287:0*/ __Vtemp_12;
    VlWide<9>/*287:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_17;
    VlWide<4>/*127:0*/ __Vtemp_18;
    VlWide<5>/*159:0*/ __Vtemp_22;
    VlWide<5>/*159:0*/ __Vtemp_26;
    VlWide<5>/*159:0*/ __Vtemp_27;
    // Body
    if (vlSelfRef.__PVT__X_exp) {
        vlSelfRef.__PVT__fp_Xindex_info = (((IData)(
                                                    ((vlSelfRef.__PVT__fp_X_info_d 
                                                      >> 0x00000010U) 
                                                     | (IData)(vlSelfRef.__PVT__fp_X_index_uflow))) 
                                            << 0x00000010U) 
                                           | (0x0000ffffU 
                                              & vlSelfRef.__PVT__fp_X_info_d));
        vlSelfRef.__PVT__fp_X_frac = (0x0000ffffU & vlSelfRef.__PVT__fp_Xindex_info_d);
        vlSelfRef.__PVT__fp_Xindex_data = vlSelfRef.__PVT__fp_Xindex;
    } else {
        vlSelfRef.__PVT__fp_Xindex_info = vlSelfRef.__PVT__fp_X_info_d;
        vlSelfRef.__PVT__fp_X_frac = (0x0000ffffU & (IData)(vlSelfRef.__PVT__fp_Xshift_frac));
        vlSelfRef.__PVT__fp_Xindex_data = vlSelfRef.__PVT__fp_X_log2_datout_d;
    }
    if (vlSelfRef.__PVT__fp_X_uflow) {
        vlSelfRef.__PVT__fp_X_exp_frac = 0U;
        vlSelfRef.__PVT__fp_X_log2_datout = 0U;
    } else if (vlSelfRef.__PVT__X_exp) {
        if ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_log2_datin 
                                      >> 0x17U)))) {
            vlSelfRef.__PVT__fp_X_exp_frac = (0x0000ffffU 
                                              & (vlSelfRef.__PVT__fp_log2_datin 
                                                 >> 7U));
            vlSelfRef.__PVT__fp_X_log2_datout = ((0x000000ffU 
                                                  & (vlSelfRef.__PVT__fp_log2_datin 
                                                     >> 0x17U)) 
                                                 - (IData)(0x0000007fU));
        } else {
            vlSelfRef.__PVT__fp_X_exp_frac = (0x0000ffffU 
                                              & (vlSelfRef.__PVT__fp_log2_datin 
                                                 >> 7U));
            vlSelfRef.__PVT__fp_X_log2_datout = (((- (IData)(
                                                             (1U 
                                                              & (((IData)(1U) 
                                                                  + 
                                                                  (~ 
                                                                   ((0x7fU 
                                                                     > 
                                                                     (0x000000ffU 
                                                                      & (vlSelfRef.__PVT__fp_log2_datin 
                                                                         >> 0x00000017U)))
                                                                     ? 
                                                                    (0x0000007fU 
                                                                     & ((IData)(0x007fU) 
                                                                        - 
                                                                        (0x000000ffU 
                                                                         & (vlSelfRef.__PVT__fp_log2_datin 
                                                                            >> 0x00000017U))))
                                                                     : 0U))) 
                                                                 >> 7U)))) 
                                                  << 8U) 
                                                 | (0x000000ffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ 
                                                        ((0x7fU 
                                                          > 
                                                          (0x000000ffU 
                                                           & (vlSelfRef.__PVT__fp_log2_datin 
                                                              >> 0x00000017U)))
                                                          ? 
                                                         (0x0000007fU 
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
    VL_SHIFTL_WWI(408,408,8, __Vtemp_1, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3529, (IData)(vlSelfRef.__PVT__fp_Y_shift_abs));
    VL_SHIFTR_WWI(408,408,8, __Vtemp_2, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3529, (IData)(vlSelfRef.__PVT__fp_Y_shift_abs));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[0U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_1[0U] : __Vtemp_2[0U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[1U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[1U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_1[1U] : __Vtemp_2[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[2U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[2U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_1[2U] : __Vtemp_2[2U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[3U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[3U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_1[3U] : __Vtemp_2[3U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[4U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[4U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_1[4U] : __Vtemp_2[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[5U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[5U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_1[5U] : __Vtemp_2[5U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[6U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[6U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_1[6U] : __Vtemp_2[6U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[7U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[7U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_1[7U] : __Vtemp_2[7U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[8U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[8U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_1[8U] : __Vtemp_2[8U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[9U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[9U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
             ? __Vtemp_1[9U] : __Vtemp_2[9U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[0x0000000aU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000aU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
               ? __Vtemp_1[0x0000000aU] : __Vtemp_2[0x0000000aU]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[0x0000000bU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000bU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
               ? __Vtemp_1[0x0000000bU] : __Vtemp_2[0x0000000bU]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2995[0x0000000cU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000cU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__Y_shift_bits))
               ? __Vtemp_1[0x0000000cU] : __Vtemp_2[0x0000000cU]));
    vlSelfRef.__PVT__fp_X_info = (((IData)(vlSelfRef.__PVT__fp_X_uflow) 
                                   << 0x00000010U) 
                                  | (IData)(vlSelfRef.__PVT__fp_X_exp_frac));
    __Vtemp_7[0U] = 0U;
    __Vtemp_7[1U] = 0U;
    __Vtemp_7[2U] = 0U;
    __Vtemp_7[3U] = 0U;
    __Vtemp_7[4U] = (0x007fffffU & vlSelfRef.__PVT__fp_Xindex_data);
    __Vtemp_7[5U] = 0U;
    __Vtemp_7[6U] = 0U;
    __Vtemp_7[7U] = 0U;
    __Vtemp_7[8U] = 0U;
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
    VL_SHIFTL_WWI(278,278,8, __Vtemp_8, __Vtemp_7, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2990)));
    __Vtemp_12[0U] = 0U;
    __Vtemp_12[1U] = 0U;
    __Vtemp_12[2U] = 0U;
    __Vtemp_12[3U] = (vlSelfRef.__PVT__fp_Xindex_data 
                      << 0x0000001fU);
    __Vtemp_12[4U] = (0x00400000U | (0x003fffffU & 
                                     (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 1U)));
    __Vtemp_12[5U] = 0U;
    __Vtemp_12[6U] = 0U;
    __Vtemp_12[7U] = 0U;
    __Vtemp_12[8U] = 0U;
    VL_SHIFTR_WWI(278,278,8, __Vtemp_13, __Vtemp_12, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2990)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[0U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[0U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_8[0U] : __Vtemp_13[0U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[1U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[1U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_8[1U] : __Vtemp_13[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[2U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[2U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_8[2U] : __Vtemp_13[2U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[3U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[3U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_8[3U] : __Vtemp_13[3U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[4U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[4U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_8[4U] : __Vtemp_13[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[5U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[5U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_8[5U] : __Vtemp_13[5U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[6U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[6U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_8[6U] : __Vtemp_13[6U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[7U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[7U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_8[7U] : __Vtemp_13[7U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[8U] 
        = (Vsim__ConstPool__CONST_h4d451b67_0[8U] & 
           ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                      >> 0x00000017U)))
             ? __Vtemp_8[8U] : __Vtemp_13[8U]));
    __Vtemp_17[0U] = 1U;
    __Vtemp_17[1U] = 0U;
    __Vtemp_17[2U] = 0U;
    __Vtemp_17[3U] = 0U;
    VL_SHIFTL_WWI(128,128,8, __Vtemp_18, __Vtemp_17, 
                  (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2990)));
    if ((0x7fU <= (0x000000ffU & (vlSelfRef.__PVT__fp_Xindex_data 
                                  >> 0x00000017U)))) {
        __Vtemp_22[0U] = __Vtemp_18[0U];
        __Vtemp_22[1U] = __Vtemp_18[1U];
        __Vtemp_22[2U] = __Vtemp_18[2U];
        __Vtemp_22[3U] = __Vtemp_18[3U];
    } else {
        __Vtemp_22[0U] = 0U;
        __Vtemp_22[1U] = 0U;
        __Vtemp_22[2U] = 0U;
        __Vtemp_22[3U] = 0U;
    }
    __Vtemp_22[4U] = 0U;
    __Vtemp_26[0U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[5U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[4U] 
                                 >> 0x00000017U));
    __Vtemp_26[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[6U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[5U] 
                                 >> 0x00000017U));
    __Vtemp_26[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[7U] 
                       << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[6U] 
                                 >> 0x00000017U));
    __Vtemp_26[3U] = (0x7fffffffU & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[8U] 
                                      << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2991[7U] 
                                                >> 0x00000017U)));
    __Vtemp_26[4U] = 0U;
    VL_ADD_W(5, __Vtemp_27, __Vtemp_22, __Vtemp_26);
    vlSelfRef.__PVT__fp32_int[0U] = __Vtemp_27[0U];
    vlSelfRef.__PVT__fp32_int[1U] = __Vtemp_27[1U];
    vlSelfRef.__PVT__fp32_int[2U] = __Vtemp_27[2U];
    vlSelfRef.__PVT__fp32_int[3U] = __Vtemp_27[3U];
    vlSelfRef.__PVT__fp32_int[4U] = (1U & __Vtemp_27[4U]);
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
}

void Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__3(Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    // Body
    __Vtemp_2[0U] = (IData)(vlSelfRef.__PVT__Y_dec_offset_lsb);
    __Vtemp_2[1U] = (IData)((vlSelfRef.__PVT__Y_dec_offset_lsb 
                             >> 0x00000020U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_2[3U] = 0U;
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
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__Y_shift_bits))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2988 
            = (0x003fffffffffffffULL & ((QData)((IData)(
                                                        (0x003fffffU 
                                                         & (IData)(vlSelfRef.__PVT__Y_dec_offset_lsb)))) 
                                        << (IData)(vlSelfRef.__PVT__Y_shift_bits_int8_abs)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2989 
            = (0x003fffffffffffffULL & ((QData)((IData)(vlSelfRef.__PVT__Y_dec_offset_msb)) 
                                        << (IData)(vlSelfRef.__PVT__Y_shift_bits_int8_abs)));
    } else {
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
}

void Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__4(Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__5(Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<13>/*415:0*/ __Vtemp_1;
    VlWide<13>/*415:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__same_sign = ((1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset) 
                                         >> 7U)) == 
                                  (1U & (vlSelfRef.__PVT__fp_X_log2_datout 
                                         >> 7U)));
    vlSelfRef.__PVT__less_than_start = ((0x0000007fU 
                                         & vlSelfRef.__PVT__fp_X_log2_datout) 
                                        < (0x0000007fU 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset)));
    VL_SHIFTL_WWI(408,408,8, __Vtemp_1, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3531, (IData)(vlSelfRef.__PVT__fp_X_shift_abs));
    VL_SHIFTR_WWI(408,408,8, __Vtemp_2, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3531, (IData)(vlSelfRef.__PVT__fp_X_shift_abs));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[0U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_1[0U] : __Vtemp_2[0U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[1U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[1U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_1[1U] : __Vtemp_2[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[2U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[2U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_1[2U] : __Vtemp_2[2U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[3U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[3U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_1[3U] : __Vtemp_2[3U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[4U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[4U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_1[4U] : __Vtemp_2[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[5U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[5U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_1[5U] : __Vtemp_2[5U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[6U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[6U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_1[6U] : __Vtemp_2[6U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[7U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[7U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_1[7U] : __Vtemp_2[7U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[8U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[8U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_1[8U] : __Vtemp_2[8U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[9U] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[9U] & 
           ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
             ? __Vtemp_1[9U] : __Vtemp_2[9U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[0x0000000aU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000aU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
               ? __Vtemp_1[0x0000000aU] : __Vtemp_2[0x0000000aU]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[0x0000000bU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000bU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
               ? __Vtemp_1[0x0000000bU] : __Vtemp_2[0x0000000bU]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2992[0x0000000cU] 
        = (Vsim__ConstPool__CONST_h1bb950d3_0[0x0000000cU] 
           & ((0x00000080U & (IData)(vlSelfRef.__PVT__shift_bits))
               ? __Vtemp_1[0x0000000cU] : __Vtemp_2[0x0000000cU]));
}

void Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__6(Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__6\n"); );
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
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en) {
        vlSelfRef.dp2lut_X_info = (((QData)((IData)(vlSelfRef.__PVT__fp_Xshift_oflow)) 
                                    << 0x00000022U) 
                                   | (((QData)((IData)(
                                                       (1U 
                                                        & (vlSelfRef.__PVT__fp_Xindex_info_d 
                                                           >> 0x00000010U)))) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(vlSelfRef.__PVT__fp_X_frac))));
        vlSelfRef.sum2itp_prdy = ((IData)(vlSelfRef.__PVT__fp16_Y_datin_prdy) 
                                  & (IData)(vlSelfRef.__PVT__fp16_X_datin_prdy));
    } else {
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
        vlSelfRef.sum2itp_prdy = ((IData)(vlSelfRef.__PVT__int_Y_datin_prdy) 
                                  & (IData)(vlSelfRef.__PVT__int_X_datin_prdy));
    }
}

void Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__8(Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    // Body
    __Vtemp_2[0U] = (IData)(vlSelfRef.__PVT__dec_Xindex_lsb);
    __Vtemp_2[1U] = (IData)((vlSelfRef.__PVT__dec_Xindex_lsb 
                             >> 0x00000020U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_2[3U] = 0U;
    VL_SHIFTL_WWI(103,103,7, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__shift_bits_int16_abs));
    __Vtemp_4[0U] = 0U;
    __Vtemp_4[1U] = ((IData)(vlSelfRef.__PVT__dec_Xindex_lsb) 
                     << 7U);
    __Vtemp_4[2U] = (((IData)(vlSelfRef.__PVT__dec_Xindex_lsb) 
                      >> 0x00000019U) | ((IData)((vlSelfRef.__PVT__dec_Xindex_lsb 
                                                  >> 0x00000020U)) 
                                         << 7U));
    __Vtemp_4[3U] = ((IData)((vlSelfRef.__PVT__dec_Xindex_lsb 
                              >> 0x00000020U)) >> 0x00000019U);
    VL_SHIFTR_WWI(103,103,7, __Vtemp_5, __Vtemp_4, (IData)(vlSelfRef.__PVT__shift_bits_int16_abs));
    if ((0x00000040U & (IData)(vlSelfRef.__PVT__shift_bits))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982[0U] 
            = __Vtemp_3[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982[1U] 
            = __Vtemp_3[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982[2U] 
            = __Vtemp_3[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982[3U] 
            = (0x0000007fU & __Vtemp_3[3U]);
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982[0U] 
            = __Vtemp_5[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982[1U] 
            = __Vtemp_5[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982[2U] 
            = __Vtemp_5[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2982[3U] 
            = (0x0000007fU & __Vtemp_5[3U]);
    }
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__shift_bits))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2983 
            = (0x007fffffffffffffULL & ((QData)((IData)(
                                                        (0x007fffffU 
                                                         & (IData)(vlSelfRef.__PVT__dec_Xindex_lsb)))) 
                                        << (IData)(vlSelfRef.__PVT__shift_bits_int8_abs)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2984 
            = (0x007fffffffffffffULL & ((QData)((IData)(vlSelfRef.__PVT__dec_Xindex_msb)) 
                                        << (IData)(vlSelfRef.__PVT__shift_bits_int8_abs)));
    } else {
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
}

void Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__9(Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__10(Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__10\n"); );
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

void Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__11(Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

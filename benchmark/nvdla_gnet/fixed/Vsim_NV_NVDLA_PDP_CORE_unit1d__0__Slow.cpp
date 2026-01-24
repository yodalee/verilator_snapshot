// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__0(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.last_out_en = (IData)((0U != (0x0300U 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pdp_info_out_pd))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[0U] 
        = (IData)((((QData)((IData)((0x0001ffffU & 
                                     (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                      >> 4U)))) << 0x00000022U) 
                   | (((QData)((IData)((0x0001ffffU 
                                        & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                           >> 0x0000000eU)))) 
                       << 0x00000011U) | (QData)((IData)(
                                                         (0x0001ffffU 
                                                          & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                              << 8U) 
                                                             | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                >> 0x00000018U))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[1U] 
        = ((0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[1U]) 
           | (IData)(((((QData)((IData)((0x0001ffffU 
                                         & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                            >> 4U)))) 
                        << 0x00000022U) | (((QData)((IData)(
                                                            (0x0001ffffU 
                                                             & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                >> 0x0000000eU)))) 
                                            << 0x00000011U) 
                                           | (QData)((IData)(
                                                             (0x0001ffffU 
                                                              & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                  << 8U) 
                                                                 | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                    >> 0x00000018U))))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[1U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[1U]) 
           | (0xfff80000U & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                              << 0x00000019U) | (0x01f80000U 
                                                 & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                    >> 7U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[2U] 
        = (0x0000000fU & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 7U));
    vlSelfRef.__PVT__fp_pool_sum[0U] = ((0xf8000000U 
                                         & vlSelfRef.__PVT__fp_pool_sum[0U]) 
                                        | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                            << 0x00000011U) 
                                           | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                               << 0x00000010U) 
                                              | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                  << 0x0000000aU) 
                                                 | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)))));
    vlSelfRef.__PVT__fp_pool_sum[0U] = ((0x07ffffffU 
                                         & vlSelfRef.__PVT__fp_pool_sum[0U]) 
                                        | (((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                              << 0x00000017U) 
                                             | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                 << 0x00000011U) 
                                                | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                   << 7U))) 
                                            | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                                << 6U) 
                                               | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10))) 
                                           << 0x0000001bU));
    vlSelfRef.__PVT__fp_pool_sum[1U] = ((0xfff80000U 
                                         & vlSelfRef.__PVT__fp_pool_sum[1U]) 
                                        | (((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                              << 0x00000017U) 
                                             | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                 << 0x00000011U) 
                                                | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                   << 7U))) 
                                            | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                                << 6U) 
                                               | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10))) 
                                           >> 5U));
    vlSelfRef.__PVT__fp_pool_sum[1U] = ((0x0007ffffU 
                                         & vlSelfRef.__PVT__fp_pool_sum[1U]) 
                                        | (0xfff80000U 
                                           & (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                               << 0x0000001dU) 
                                              | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                 << 0x00000013U))));
    vlSelfRef.__PVT__fp_pool_sum[2U] = (0x0000000fU 
                                        & ((0x0007fff8U 
                                            & ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                               << 3U)) 
                                           | ((0x0007ffffU 
                                               & ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                  >> 3U)) 
                                              | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                 >> 0x0000000dU))));
    if ((0x00010000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
        vlSelfRef.__PVT__pooling_result[0U] = ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                  >> 0x00000018U));
        vlSelfRef.__PVT__pooling_result[1U] = ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                  >> 0x00000018U));
        vlSelfRef.__PVT__pooling_result[2U] = (0x00ffffffU 
                                               & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                                   << 8U) 
                                                  | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                     >> 0x00000018U)));
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U];
        }
    } else {
        vlSelfRef.__PVT__pooling_result[0U] = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[0U];
        vlSelfRef.__PVT__pooling_result[1U] = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[1U];
        vlSelfRef.__PVT__pooling_result[2U] = (0x00ffffffU 
                                               & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U]);
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U];
        }
    }
    vlSelfRef.__PVT__fp_mean_pool_cfg = ((0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__pooling_type_cfg_d)) 
                                         & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__reg2dp_fp16_en));
    vlSelfRef.pooling_din_last = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en__BRA__0__KET__) 
                                  & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_60) 
                                      & (0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_cnt_pooling))) 
                                     | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__strip_width_end)));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_2 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 1U) | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_4 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
            << 1U) | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_6 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 1U) | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_3 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_2));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_5 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_4));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_7 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_6));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_a_rdy 
        = (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_3));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_b_rdy 
        = (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_5));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__out_z_vld 
        = (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_7));
    if (vlSelfRef.__PVT__fp_mean_pool_cfg) {
        vlSelfRef.__PVT__data_buf0[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result0[0U]))))));
        vlSelfRef.__PVT__data_buf0[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result0[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf0[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf1[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result1[0U]))))));
        vlSelfRef.__PVT__data_buf1[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result1[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf1[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf2[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result2[0U]))))));
        vlSelfRef.__PVT__data_buf2[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result2[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf2[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf3[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result3[0U]))))));
        vlSelfRef.__PVT__data_buf3[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result3[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf3[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.pooling_out_pvld = ((0x0000000fU 
                                       == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__out_z_vld)) 
                                      & (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid));
    } else {
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf0[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf0[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf0[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf0[0U] = vlSelfRef.__PVT__latch_result0_d3[0U];
            vlSelfRef.__PVT__data_buf0[1U] = vlSelfRef.__PVT__latch_result0_d3[1U];
            vlSelfRef.__PVT__data_buf0[2U] = vlSelfRef.__PVT__latch_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf1[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf1[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf1[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf1[0U] = vlSelfRef.__PVT__latch_result1_d3[0U];
            vlSelfRef.__PVT__data_buf1[1U] = vlSelfRef.__PVT__latch_result1_d3[1U];
            vlSelfRef.__PVT__data_buf1[2U] = vlSelfRef.__PVT__latch_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf2[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf2[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf2[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf2[0U] = vlSelfRef.__PVT__latch_result2_d3[0U];
            vlSelfRef.__PVT__data_buf2[1U] = vlSelfRef.__PVT__latch_result2_d3[1U];
            vlSelfRef.__PVT__data_buf2[2U] = vlSelfRef.__PVT__latch_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf3[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf3[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf3[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf3[0U] = vlSelfRef.__PVT__latch_result3_d3[0U];
            vlSelfRef.__PVT__data_buf3[1U] = vlSelfRef.__PVT__latch_result3_d3[1U];
            vlSelfRef.__PVT__data_buf3[2U] = vlSelfRef.__PVT__latch_result3_d3[2U];
        }
        vlSelfRef.pooling_out_pvld = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid;
    }
    if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
        if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
            vlSelfRef.__PVT__fp_cur_pooling_dat[0U] 
                = vlSelfRef.__PVT__data_buf3[0U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[1U] 
                = vlSelfRef.__PVT__data_buf3[1U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[2U] 
                = vlSelfRef.__PVT__data_buf3[2U];
        } else {
            vlSelfRef.__PVT__fp_cur_pooling_dat[0U] 
                = vlSelfRef.__PVT__data_buf2[0U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[1U] 
                = vlSelfRef.__PVT__data_buf2[1U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[2U] 
                = vlSelfRef.__PVT__data_buf2[2U];
        }
    } else if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
        vlSelfRef.__PVT__fp_cur_pooling_dat[0U] = vlSelfRef.__PVT__data_buf1[0U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[1U] = vlSelfRef.__PVT__data_buf1[1U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[2U] = vlSelfRef.__PVT__data_buf1[2U];
    } else {
        vlSelfRef.__PVT__fp_cur_pooling_dat[0U] = vlSelfRef.__PVT__data_buf0[0U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[1U] = vlSelfRef.__PVT__data_buf0[1U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[2U] = vlSelfRef.__PVT__data_buf0[2U];
    }
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_prdy 
        = ((0x0000000fU == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_a_rdy)) 
           & (0x0000000fU == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_b_rdy)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__0(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[0U] 
        = (IData)((((QData)((IData)((0x0001ffffU & 
                                     (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                      >> 4U)))) << 0x00000022U) 
                   | (((QData)((IData)((0x0001ffffU 
                                        & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                           >> 0x0000000eU)))) 
                       << 0x00000011U) | (QData)((IData)(
                                                         (0x0001ffffU 
                                                          & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                              << 8U) 
                                                             | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                >> 0x00000018U))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[1U] 
        = ((0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[1U]) 
           | (IData)(((((QData)((IData)((0x0001ffffU 
                                         & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                            >> 4U)))) 
                        << 0x00000022U) | (((QData)((IData)(
                                                            (0x0001ffffU 
                                                             & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                >> 0x0000000eU)))) 
                                            << 0x00000011U) 
                                           | (QData)((IData)(
                                                             (0x0001ffffU 
                                                              & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                  << 8U) 
                                                                 | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                    >> 0x00000018U))))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[1U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[1U]) 
           | (0xfff80000U & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                              << 0x00000019U) | (0x01f80000U 
                                                 & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                    >> 7U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[2U] 
        = (0x0000000fU & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 7U));
    vlSelfRef.__PVT__fp_pool_sum[0U] = ((0xf8000000U 
                                         & vlSelfRef.__PVT__fp_pool_sum[0U]) 
                                        | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                            << 0x00000011U) 
                                           | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                               << 0x00000010U) 
                                              | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                  << 0x0000000aU) 
                                                 | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)))));
    vlSelfRef.__PVT__fp_pool_sum[0U] = ((0x07ffffffU 
                                         & vlSelfRef.__PVT__fp_pool_sum[0U]) 
                                        | (((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                              << 0x00000017U) 
                                             | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                 << 0x00000011U) 
                                                | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                   << 7U))) 
                                            | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                                << 6U) 
                                               | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10))) 
                                           << 0x0000001bU));
    vlSelfRef.__PVT__fp_pool_sum[1U] = ((0xfff80000U 
                                         & vlSelfRef.__PVT__fp_pool_sum[1U]) 
                                        | (((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                              << 0x00000017U) 
                                             | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                 << 0x00000011U) 
                                                | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                   << 7U))) 
                                            | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                                << 6U) 
                                               | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10))) 
                                           >> 5U));
    vlSelfRef.__PVT__fp_pool_sum[1U] = ((0x0007ffffU 
                                         & vlSelfRef.__PVT__fp_pool_sum[1U]) 
                                        | (0xfff80000U 
                                           & (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                               << 0x0000001dU) 
                                              | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                 << 0x00000013U))));
    vlSelfRef.__PVT__fp_pool_sum[2U] = (0x0000000fU 
                                        & ((0x0007fff8U 
                                            & ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                               << 3U)) 
                                           | ((0x0007ffffU 
                                               & ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                  >> 3U)) 
                                              | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                 >> 0x0000000dU))));
    if ((0x00010000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
        vlSelfRef.__PVT__pooling_result[0U] = ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                  >> 0x00000018U));
        vlSelfRef.__PVT__pooling_result[1U] = ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                  >> 0x00000018U));
        vlSelfRef.__PVT__pooling_result[2U] = (0x00ffffffU 
                                               & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                                   << 8U) 
                                                  | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                     >> 0x00000018U)));
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U];
        }
    } else {
        vlSelfRef.__PVT__pooling_result[0U] = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[0U];
        vlSelfRef.__PVT__pooling_result[1U] = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[1U];
        vlSelfRef.__PVT__pooling_result[2U] = (0x00ffffffU 
                                               & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U]);
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U];
        }
    }
    vlSelfRef.pooling_din_last = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en__BRA__1__KET__) 
                                  & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_60) 
                                      & (1U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_cnt_pooling))) 
                                     | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__strip_width_end)));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_2 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 1U) | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_4 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
            << 1U) | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_6 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 1U) | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_3 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_2));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_5 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_4));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_7 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_6));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_a_rdy 
        = (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_3));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_b_rdy 
        = (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_5));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__out_z_vld 
        = (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_7));
    if (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.__PVT__fp_mean_pool_cfg) {
        vlSelfRef.__PVT__data_buf0[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result0[0U]))))));
        vlSelfRef.__PVT__data_buf0[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result0[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf0[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf1[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result1[0U]))))));
        vlSelfRef.__PVT__data_buf1[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result1[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf1[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf2[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result2[0U]))))));
        vlSelfRef.__PVT__data_buf2[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result2[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf2[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf3[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result3[0U]))))));
        vlSelfRef.__PVT__data_buf3[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result3[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf3[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.pooling_out_pvld = ((0x0000000fU 
                                       == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__out_z_vld)) 
                                      & (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid));
    } else {
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf0[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf0[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf0[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf0[0U] = vlSelfRef.__PVT__latch_result0_d3[0U];
            vlSelfRef.__PVT__data_buf0[1U] = vlSelfRef.__PVT__latch_result0_d3[1U];
            vlSelfRef.__PVT__data_buf0[2U] = vlSelfRef.__PVT__latch_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf1[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf1[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf1[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf1[0U] = vlSelfRef.__PVT__latch_result1_d3[0U];
            vlSelfRef.__PVT__data_buf1[1U] = vlSelfRef.__PVT__latch_result1_d3[1U];
            vlSelfRef.__PVT__data_buf1[2U] = vlSelfRef.__PVT__latch_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf2[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf2[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf2[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf2[0U] = vlSelfRef.__PVT__latch_result2_d3[0U];
            vlSelfRef.__PVT__data_buf2[1U] = vlSelfRef.__PVT__latch_result2_d3[1U];
            vlSelfRef.__PVT__data_buf2[2U] = vlSelfRef.__PVT__latch_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf3[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf3[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf3[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf3[0U] = vlSelfRef.__PVT__latch_result3_d3[0U];
            vlSelfRef.__PVT__data_buf3[1U] = vlSelfRef.__PVT__latch_result3_d3[1U];
            vlSelfRef.__PVT__data_buf3[2U] = vlSelfRef.__PVT__latch_result3_d3[2U];
        }
        vlSelfRef.pooling_out_pvld = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid;
    }
    if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
        if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
            vlSelfRef.__PVT__fp_cur_pooling_dat[0U] 
                = vlSelfRef.__PVT__data_buf3[0U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[1U] 
                = vlSelfRef.__PVT__data_buf3[1U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[2U] 
                = vlSelfRef.__PVT__data_buf3[2U];
        } else {
            vlSelfRef.__PVT__fp_cur_pooling_dat[0U] 
                = vlSelfRef.__PVT__data_buf2[0U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[1U] 
                = vlSelfRef.__PVT__data_buf2[1U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[2U] 
                = vlSelfRef.__PVT__data_buf2[2U];
        }
    } else if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
        vlSelfRef.__PVT__fp_cur_pooling_dat[0U] = vlSelfRef.__PVT__data_buf1[0U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[1U] = vlSelfRef.__PVT__data_buf1[1U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[2U] = vlSelfRef.__PVT__data_buf1[2U];
    } else {
        vlSelfRef.__PVT__fp_cur_pooling_dat[0U] = vlSelfRef.__PVT__data_buf0[0U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[1U] = vlSelfRef.__PVT__data_buf0[1U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[2U] = vlSelfRef.__PVT__data_buf0[2U];
    }
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_prdy 
        = ((0x0000000fU == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_a_rdy)) 
           & (0x0000000fU == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_b_rdy)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__0(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[0U] 
        = (IData)((((QData)((IData)((0x0001ffffU & 
                                     (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                      >> 4U)))) << 0x00000022U) 
                   | (((QData)((IData)((0x0001ffffU 
                                        & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                           >> 0x0000000eU)))) 
                       << 0x00000011U) | (QData)((IData)(
                                                         (0x0001ffffU 
                                                          & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                              << 8U) 
                                                             | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                >> 0x00000018U))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[1U] 
        = ((0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[1U]) 
           | (IData)(((((QData)((IData)((0x0001ffffU 
                                         & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                            >> 4U)))) 
                        << 0x00000022U) | (((QData)((IData)(
                                                            (0x0001ffffU 
                                                             & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                >> 0x0000000eU)))) 
                                            << 0x00000011U) 
                                           | (QData)((IData)(
                                                             (0x0001ffffU 
                                                              & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                  << 8U) 
                                                                 | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                    >> 0x00000018U))))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[1U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[1U]) 
           | (0xfff80000U & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                              << 0x00000019U) | (0x01f80000U 
                                                 & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                    >> 7U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[2U] 
        = (0x0000000fU & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 7U));
    vlSelfRef.__PVT__fp_pool_sum[0U] = ((0xf8000000U 
                                         & vlSelfRef.__PVT__fp_pool_sum[0U]) 
                                        | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                            << 0x00000011U) 
                                           | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                               << 0x00000010U) 
                                              | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                  << 0x0000000aU) 
                                                 | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)))));
    vlSelfRef.__PVT__fp_pool_sum[0U] = ((0x07ffffffU 
                                         & vlSelfRef.__PVT__fp_pool_sum[0U]) 
                                        | (((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                              << 0x00000017U) 
                                             | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                 << 0x00000011U) 
                                                | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                   << 7U))) 
                                            | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                                << 6U) 
                                               | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10))) 
                                           << 0x0000001bU));
    vlSelfRef.__PVT__fp_pool_sum[1U] = ((0xfff80000U 
                                         & vlSelfRef.__PVT__fp_pool_sum[1U]) 
                                        | (((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                              << 0x00000017U) 
                                             | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                 << 0x00000011U) 
                                                | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                   << 7U))) 
                                            | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                                << 6U) 
                                               | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10))) 
                                           >> 5U));
    vlSelfRef.__PVT__fp_pool_sum[1U] = ((0x0007ffffU 
                                         & vlSelfRef.__PVT__fp_pool_sum[1U]) 
                                        | (0xfff80000U 
                                           & (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                               << 0x0000001dU) 
                                              | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                 << 0x00000013U))));
    vlSelfRef.__PVT__fp_pool_sum[2U] = (0x0000000fU 
                                        & ((0x0007fff8U 
                                            & ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                               << 3U)) 
                                           | ((0x0007ffffU 
                                               & ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                  >> 3U)) 
                                              | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                 >> 0x0000000dU))));
    if ((0x00010000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
        vlSelfRef.__PVT__pooling_result[0U] = ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                  >> 0x00000018U));
        vlSelfRef.__PVT__pooling_result[1U] = ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                  >> 0x00000018U));
        vlSelfRef.__PVT__pooling_result[2U] = (0x00ffffffU 
                                               & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                                   << 8U) 
                                                  | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                     >> 0x00000018U)));
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U];
        }
    } else {
        vlSelfRef.__PVT__pooling_result[0U] = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[0U];
        vlSelfRef.__PVT__pooling_result[1U] = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[1U];
        vlSelfRef.__PVT__pooling_result[2U] = (0x00ffffffU 
                                               & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U]);
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U];
        }
    }
    vlSelfRef.pooling_din_last = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en__BRA__2__KET__) 
                                  & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_60) 
                                      & (2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_cnt_pooling))) 
                                     | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__strip_width_end)));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_2 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 1U) | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_4 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
            << 1U) | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_6 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 1U) | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_3 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_2));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_5 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_4));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_7 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_6));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_a_rdy 
        = (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_3));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_b_rdy 
        = (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_5));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__out_z_vld 
        = (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_7));
    if (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.__PVT__fp_mean_pool_cfg) {
        vlSelfRef.__PVT__data_buf0[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result0[0U]))))));
        vlSelfRef.__PVT__data_buf0[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result0[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf0[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf1[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result1[0U]))))));
        vlSelfRef.__PVT__data_buf1[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result1[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf1[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf2[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result2[0U]))))));
        vlSelfRef.__PVT__data_buf2[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result2[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf2[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf3[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result3[0U]))))));
        vlSelfRef.__PVT__data_buf3[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result3[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf3[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.pooling_out_pvld = ((0x0000000fU 
                                       == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__out_z_vld)) 
                                      & (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid));
    } else {
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf0[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf0[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf0[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf0[0U] = vlSelfRef.__PVT__latch_result0_d3[0U];
            vlSelfRef.__PVT__data_buf0[1U] = vlSelfRef.__PVT__latch_result0_d3[1U];
            vlSelfRef.__PVT__data_buf0[2U] = vlSelfRef.__PVT__latch_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf1[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf1[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf1[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf1[0U] = vlSelfRef.__PVT__latch_result1_d3[0U];
            vlSelfRef.__PVT__data_buf1[1U] = vlSelfRef.__PVT__latch_result1_d3[1U];
            vlSelfRef.__PVT__data_buf1[2U] = vlSelfRef.__PVT__latch_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf2[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf2[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf2[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf2[0U] = vlSelfRef.__PVT__latch_result2_d3[0U];
            vlSelfRef.__PVT__data_buf2[1U] = vlSelfRef.__PVT__latch_result2_d3[1U];
            vlSelfRef.__PVT__data_buf2[2U] = vlSelfRef.__PVT__latch_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf3[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf3[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf3[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf3[0U] = vlSelfRef.__PVT__latch_result3_d3[0U];
            vlSelfRef.__PVT__data_buf3[1U] = vlSelfRef.__PVT__latch_result3_d3[1U];
            vlSelfRef.__PVT__data_buf3[2U] = vlSelfRef.__PVT__latch_result3_d3[2U];
        }
        vlSelfRef.pooling_out_pvld = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid;
    }
    if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
        if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
            vlSelfRef.__PVT__fp_cur_pooling_dat[0U] 
                = vlSelfRef.__PVT__data_buf3[0U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[1U] 
                = vlSelfRef.__PVT__data_buf3[1U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[2U] 
                = vlSelfRef.__PVT__data_buf3[2U];
        } else {
            vlSelfRef.__PVT__fp_cur_pooling_dat[0U] 
                = vlSelfRef.__PVT__data_buf2[0U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[1U] 
                = vlSelfRef.__PVT__data_buf2[1U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[2U] 
                = vlSelfRef.__PVT__data_buf2[2U];
        }
    } else if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
        vlSelfRef.__PVT__fp_cur_pooling_dat[0U] = vlSelfRef.__PVT__data_buf1[0U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[1U] = vlSelfRef.__PVT__data_buf1[1U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[2U] = vlSelfRef.__PVT__data_buf1[2U];
    } else {
        vlSelfRef.__PVT__fp_cur_pooling_dat[0U] = vlSelfRef.__PVT__data_buf0[0U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[1U] = vlSelfRef.__PVT__data_buf0[1U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[2U] = vlSelfRef.__PVT__data_buf0[2U];
    }
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_prdy 
        = ((0x0000000fU == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_a_rdy)) 
           & (0x0000000fU == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_b_rdy)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3__0(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[0U] 
        = (IData)((((QData)((IData)((0x0001ffffU & 
                                     (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                      >> 4U)))) << 0x00000022U) 
                   | (((QData)((IData)((0x0001ffffU 
                                        & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                           >> 0x0000000eU)))) 
                       << 0x00000011U) | (QData)((IData)(
                                                         (0x0001ffffU 
                                                          & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                              << 8U) 
                                                             | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                >> 0x00000018U))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[1U] 
        = ((0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[1U]) 
           | (IData)(((((QData)((IData)((0x0001ffffU 
                                         & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                            >> 4U)))) 
                        << 0x00000022U) | (((QData)((IData)(
                                                            (0x0001ffffU 
                                                             & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                >> 0x0000000eU)))) 
                                            << 0x00000011U) 
                                           | (QData)((IData)(
                                                             (0x0001ffffU 
                                                              & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                  << 8U) 
                                                                 | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                    >> 0x00000018U))))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[1U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[1U]) 
           | (0xfff80000U & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                              << 0x00000019U) | (0x01f80000U 
                                                 & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                    >> 7U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[2U] 
        = (0x0000000fU & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 7U));
    vlSelfRef.__PVT__fp_pool_sum[0U] = ((0xf8000000U 
                                         & vlSelfRef.__PVT__fp_pool_sum[0U]) 
                                        | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                            << 0x00000011U) 
                                           | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                               << 0x00000010U) 
                                              | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                  << 0x0000000aU) 
                                                 | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)))));
    vlSelfRef.__PVT__fp_pool_sum[0U] = ((0x07ffffffU 
                                         & vlSelfRef.__PVT__fp_pool_sum[0U]) 
                                        | (((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                              << 0x00000017U) 
                                             | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                 << 0x00000011U) 
                                                | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                   << 7U))) 
                                            | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                                << 6U) 
                                               | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10))) 
                                           << 0x0000001bU));
    vlSelfRef.__PVT__fp_pool_sum[1U] = ((0xfff80000U 
                                         & vlSelfRef.__PVT__fp_pool_sum[1U]) 
                                        | (((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                              << 0x00000017U) 
                                             | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                 << 0x00000011U) 
                                                | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                   << 7U))) 
                                            | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                                << 6U) 
                                               | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10))) 
                                           >> 5U));
    vlSelfRef.__PVT__fp_pool_sum[1U] = ((0x0007ffffU 
                                         & vlSelfRef.__PVT__fp_pool_sum[1U]) 
                                        | (0xfff80000U 
                                           & (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                               << 0x0000001dU) 
                                              | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                 << 0x00000013U))));
    vlSelfRef.__PVT__fp_pool_sum[2U] = (0x0000000fU 
                                        & ((0x0007fff8U 
                                            & ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                               << 3U)) 
                                           | ((0x0007ffffU 
                                               & ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                  >> 3U)) 
                                              | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                 >> 0x0000000dU))));
    if ((0x00010000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
        vlSelfRef.__PVT__pooling_result[0U] = ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                  >> 0x00000018U));
        vlSelfRef.__PVT__pooling_result[1U] = ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                  >> 0x00000018U));
        vlSelfRef.__PVT__pooling_result[2U] = (0x00ffffffU 
                                               & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                                   << 8U) 
                                                  | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                     >> 0x00000018U)));
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U];
        }
    } else {
        vlSelfRef.__PVT__pooling_result[0U] = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[0U];
        vlSelfRef.__PVT__pooling_result[1U] = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[1U];
        vlSelfRef.__PVT__pooling_result[2U] = (0x00ffffffU 
                                               & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U]);
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U];
        }
    }
    vlSelfRef.pooling_din_last = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en__BRA__3__KET__) 
                                  & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_60) 
                                      & (3U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_cnt_pooling))) 
                                     | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__strip_width_end)));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_2 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 1U) | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_4 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
            << 1U) | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_6 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 1U) | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_3 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_2));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_5 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_4));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_7 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_6));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_a_rdy 
        = (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_3));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_b_rdy 
        = (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_5));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__out_z_vld 
        = (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_7));
    if (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.__PVT__fp_mean_pool_cfg) {
        vlSelfRef.__PVT__data_buf0[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result0[0U]))))));
        vlSelfRef.__PVT__data_buf0[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result0[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf0[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf1[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result1[0U]))))));
        vlSelfRef.__PVT__data_buf1[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result1[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf1[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf2[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result2[0U]))))));
        vlSelfRef.__PVT__data_buf2[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result2[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf2[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf3[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result3[0U]))))));
        vlSelfRef.__PVT__data_buf3[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result3[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf3[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.pooling_out_pvld = ((0x0000000fU 
                                       == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__out_z_vld)) 
                                      & (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid));
    } else {
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf0[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf0[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf0[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf0[0U] = vlSelfRef.__PVT__latch_result0_d3[0U];
            vlSelfRef.__PVT__data_buf0[1U] = vlSelfRef.__PVT__latch_result0_d3[1U];
            vlSelfRef.__PVT__data_buf0[2U] = vlSelfRef.__PVT__latch_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf1[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf1[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf1[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf1[0U] = vlSelfRef.__PVT__latch_result1_d3[0U];
            vlSelfRef.__PVT__data_buf1[1U] = vlSelfRef.__PVT__latch_result1_d3[1U];
            vlSelfRef.__PVT__data_buf1[2U] = vlSelfRef.__PVT__latch_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf2[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf2[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf2[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf2[0U] = vlSelfRef.__PVT__latch_result2_d3[0U];
            vlSelfRef.__PVT__data_buf2[1U] = vlSelfRef.__PVT__latch_result2_d3[1U];
            vlSelfRef.__PVT__data_buf2[2U] = vlSelfRef.__PVT__latch_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf3[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf3[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf3[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf3[0U] = vlSelfRef.__PVT__latch_result3_d3[0U];
            vlSelfRef.__PVT__data_buf3[1U] = vlSelfRef.__PVT__latch_result3_d3[1U];
            vlSelfRef.__PVT__data_buf3[2U] = vlSelfRef.__PVT__latch_result3_d3[2U];
        }
        vlSelfRef.pooling_out_pvld = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid;
    }
    if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
        if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
            vlSelfRef.__PVT__fp_cur_pooling_dat[0U] 
                = vlSelfRef.__PVT__data_buf3[0U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[1U] 
                = vlSelfRef.__PVT__data_buf3[1U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[2U] 
                = vlSelfRef.__PVT__data_buf3[2U];
        } else {
            vlSelfRef.__PVT__fp_cur_pooling_dat[0U] 
                = vlSelfRef.__PVT__data_buf2[0U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[1U] 
                = vlSelfRef.__PVT__data_buf2[1U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[2U] 
                = vlSelfRef.__PVT__data_buf2[2U];
        }
    } else if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
        vlSelfRef.__PVT__fp_cur_pooling_dat[0U] = vlSelfRef.__PVT__data_buf1[0U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[1U] = vlSelfRef.__PVT__data_buf1[1U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[2U] = vlSelfRef.__PVT__data_buf1[2U];
    } else {
        vlSelfRef.__PVT__fp_cur_pooling_dat[0U] = vlSelfRef.__PVT__data_buf0[0U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[1U] = vlSelfRef.__PVT__data_buf0[1U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[2U] = vlSelfRef.__PVT__data_buf0[2U];
    }
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_prdy 
        = ((0x0000000fU == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_a_rdy)) 
           & (0x0000000fU == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_b_rdy)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_4__0(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3030[0U] 
        = (IData)((((QData)((IData)((0x0001ffffU & 
                                     (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                      >> 4U)))) << 0x00000022U) 
                   | (((QData)((IData)((0x0001ffffU 
                                        & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                           >> 0x0000000eU)))) 
                       << 0x00000011U) | (QData)((IData)(
                                                         (0x0001ffffU 
                                                          & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                              << 8U) 
                                                             | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                >> 0x00000018U))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3030[1U] 
        = ((0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3030[1U]) 
           | (IData)(((((QData)((IData)((0x0001ffffU 
                                         & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                            >> 4U)))) 
                        << 0x00000022U) | (((QData)((IData)(
                                                            (0x0001ffffU 
                                                             & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                >> 0x0000000eU)))) 
                                            << 0x00000011U) 
                                           | (QData)((IData)(
                                                             (0x0001ffffU 
                                                              & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                  << 8U) 
                                                                 | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                    >> 0x00000018U))))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3030[1U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3030[1U]) 
           | (0xfff80000U & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                              << 0x00000019U) | (0x01f80000U 
                                                 & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                    >> 7U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3030[2U] 
        = (0x0000000fU & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 7U));
    vlSelfRef.__PVT__fp_pool_sum[0U] = ((0xf8000000U 
                                         & vlSelfRef.__PVT__fp_pool_sum[0U]) 
                                        | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                            << 0x00000011U) 
                                           | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                               << 0x00000010U) 
                                              | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                  << 0x0000000aU) 
                                                 | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)))));
    vlSelfRef.__PVT__fp_pool_sum[0U] = ((0x07ffffffU 
                                         & vlSelfRef.__PVT__fp_pool_sum[0U]) 
                                        | (((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                              << 0x00000017U) 
                                             | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                 << 0x00000011U) 
                                                | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                   << 7U))) 
                                            | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                                << 6U) 
                                               | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10))) 
                                           << 0x0000001bU));
    vlSelfRef.__PVT__fp_pool_sum[1U] = ((0xfff80000U 
                                         & vlSelfRef.__PVT__fp_pool_sum[1U]) 
                                        | (((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                              << 0x00000017U) 
                                             | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                 << 0x00000011U) 
                                                | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                   << 7U))) 
                                            | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                                << 6U) 
                                               | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10))) 
                                           >> 5U));
    vlSelfRef.__PVT__fp_pool_sum[1U] = ((0x0007ffffU 
                                         & vlSelfRef.__PVT__fp_pool_sum[1U]) 
                                        | (0xfff80000U 
                                           & (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                               << 0x0000001dU) 
                                              | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                 << 0x00000013U))));
    vlSelfRef.__PVT__fp_pool_sum[2U] = (0x0000000fU 
                                        & ((0x0007fff8U 
                                            & ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                               << 3U)) 
                                           | ((0x0007ffffU 
                                               & ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                  >> 3U)) 
                                              | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                 >> 0x0000000dU))));
    if ((0x00010000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
        vlSelfRef.__PVT__pooling_result[0U] = ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                  >> 0x00000018U));
        vlSelfRef.__PVT__pooling_result[1U] = ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                  >> 0x00000018U));
        vlSelfRef.__PVT__pooling_result[2U] = (0x00ffffffU 
                                               & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                                   << 8U) 
                                                  | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                     >> 0x00000018U)));
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3030[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3030[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3030[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3030[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3030[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3030[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3030[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3030[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3030[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3030[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3030[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3030[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U];
        }
    } else {
        vlSelfRef.__PVT__pooling_result[0U] = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[0U];
        vlSelfRef.__PVT__pooling_result[1U] = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[1U];
        vlSelfRef.__PVT__pooling_result[2U] = (0x00ffffffU 
                                               & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U]);
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U];
        }
    }
    vlSelfRef.pooling_din_last = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en__BRA__4__KET__) 
                                  & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_60) 
                                      & (4U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_cnt_pooling))) 
                                     | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__strip_width_end)));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_2 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 1U) | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_4 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
            << 1U) | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_6 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 1U) | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_3 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_2));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_5 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_4));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_7 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_6));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_a_rdy 
        = (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_3));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_b_rdy 
        = (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_5));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__out_z_vld 
        = (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_7));
    if (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.__PVT__fp_mean_pool_cfg) {
        vlSelfRef.__PVT__data_buf0[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result0[0U]))))));
        vlSelfRef.__PVT__data_buf0[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result0[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf0[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf1[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result1[0U]))))));
        vlSelfRef.__PVT__data_buf1[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result1[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf1[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf2[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result2[0U]))))));
        vlSelfRef.__PVT__data_buf2[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result2[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf2[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf3[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result3[0U]))))));
        vlSelfRef.__PVT__data_buf3[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result3[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf3[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.pooling_out_pvld = ((0x0000000fU 
                                       == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__out_z_vld)) 
                                      & (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid));
    } else {
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf0[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf0[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf0[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf0[0U] = vlSelfRef.__PVT__latch_result0_d3[0U];
            vlSelfRef.__PVT__data_buf0[1U] = vlSelfRef.__PVT__latch_result0_d3[1U];
            vlSelfRef.__PVT__data_buf0[2U] = vlSelfRef.__PVT__latch_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf1[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf1[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf1[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf1[0U] = vlSelfRef.__PVT__latch_result1_d3[0U];
            vlSelfRef.__PVT__data_buf1[1U] = vlSelfRef.__PVT__latch_result1_d3[1U];
            vlSelfRef.__PVT__data_buf1[2U] = vlSelfRef.__PVT__latch_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf2[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf2[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf2[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf2[0U] = vlSelfRef.__PVT__latch_result2_d3[0U];
            vlSelfRef.__PVT__data_buf2[1U] = vlSelfRef.__PVT__latch_result2_d3[1U];
            vlSelfRef.__PVT__data_buf2[2U] = vlSelfRef.__PVT__latch_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf3[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf3[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf3[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf3[0U] = vlSelfRef.__PVT__latch_result3_d3[0U];
            vlSelfRef.__PVT__data_buf3[1U] = vlSelfRef.__PVT__latch_result3_d3[1U];
            vlSelfRef.__PVT__data_buf3[2U] = vlSelfRef.__PVT__latch_result3_d3[2U];
        }
        vlSelfRef.pooling_out_pvld = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid;
    }
    if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
        if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
            vlSelfRef.__PVT__fp_cur_pooling_dat[0U] 
                = vlSelfRef.__PVT__data_buf3[0U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[1U] 
                = vlSelfRef.__PVT__data_buf3[1U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[2U] 
                = vlSelfRef.__PVT__data_buf3[2U];
        } else {
            vlSelfRef.__PVT__fp_cur_pooling_dat[0U] 
                = vlSelfRef.__PVT__data_buf2[0U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[1U] 
                = vlSelfRef.__PVT__data_buf2[1U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[2U] 
                = vlSelfRef.__PVT__data_buf2[2U];
        }
    } else if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
        vlSelfRef.__PVT__fp_cur_pooling_dat[0U] = vlSelfRef.__PVT__data_buf1[0U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[1U] = vlSelfRef.__PVT__data_buf1[1U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[2U] = vlSelfRef.__PVT__data_buf1[2U];
    } else {
        vlSelfRef.__PVT__fp_cur_pooling_dat[0U] = vlSelfRef.__PVT__data_buf0[0U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[1U] = vlSelfRef.__PVT__data_buf0[1U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[2U] = vlSelfRef.__PVT__data_buf0[2U];
    }
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_prdy 
        = ((0x0000000fU == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_a_rdy)) 
           & (0x0000000fU == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_b_rdy)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_5__0(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3038[0U] 
        = (IData)((((QData)((IData)((0x0001ffffU & 
                                     (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                      >> 4U)))) << 0x00000022U) 
                   | (((QData)((IData)((0x0001ffffU 
                                        & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                           >> 0x0000000eU)))) 
                       << 0x00000011U) | (QData)((IData)(
                                                         (0x0001ffffU 
                                                          & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                              << 8U) 
                                                             | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                >> 0x00000018U))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3038[1U] 
        = ((0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3038[1U]) 
           | (IData)(((((QData)((IData)((0x0001ffffU 
                                         & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                            >> 4U)))) 
                        << 0x00000022U) | (((QData)((IData)(
                                                            (0x0001ffffU 
                                                             & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                >> 0x0000000eU)))) 
                                            << 0x00000011U) 
                                           | (QData)((IData)(
                                                             (0x0001ffffU 
                                                              & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                  << 8U) 
                                                                 | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                    >> 0x00000018U))))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3038[1U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3038[1U]) 
           | (0xfff80000U & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                              << 0x00000019U) | (0x01f80000U 
                                                 & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                    >> 7U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3038[2U] 
        = (0x0000000fU & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 7U));
    vlSelfRef.__PVT__fp_pool_sum[0U] = ((0xf8000000U 
                                         & vlSelfRef.__PVT__fp_pool_sum[0U]) 
                                        | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                            << 0x00000011U) 
                                           | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                               << 0x00000010U) 
                                              | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                  << 0x0000000aU) 
                                                 | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)))));
    vlSelfRef.__PVT__fp_pool_sum[0U] = ((0x07ffffffU 
                                         & vlSelfRef.__PVT__fp_pool_sum[0U]) 
                                        | (((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                              << 0x00000017U) 
                                             | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                 << 0x00000011U) 
                                                | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                   << 7U))) 
                                            | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                                << 6U) 
                                               | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10))) 
                                           << 0x0000001bU));
    vlSelfRef.__PVT__fp_pool_sum[1U] = ((0xfff80000U 
                                         & vlSelfRef.__PVT__fp_pool_sum[1U]) 
                                        | (((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                              << 0x00000017U) 
                                             | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                 << 0x00000011U) 
                                                | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                   << 7U))) 
                                            | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                                << 6U) 
                                               | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10))) 
                                           >> 5U));
    vlSelfRef.__PVT__fp_pool_sum[1U] = ((0x0007ffffU 
                                         & vlSelfRef.__PVT__fp_pool_sum[1U]) 
                                        | (0xfff80000U 
                                           & (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                               << 0x0000001dU) 
                                              | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                 << 0x00000013U))));
    vlSelfRef.__PVT__fp_pool_sum[2U] = (0x0000000fU 
                                        & ((0x0007fff8U 
                                            & ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                               << 3U)) 
                                           | ((0x0007ffffU 
                                               & ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                  >> 3U)) 
                                              | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                 >> 0x0000000dU))));
    if ((0x00010000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
        vlSelfRef.__PVT__pooling_result[0U] = ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                  >> 0x00000018U));
        vlSelfRef.__PVT__pooling_result[1U] = ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                  >> 0x00000018U));
        vlSelfRef.__PVT__pooling_result[2U] = (0x00ffffffU 
                                               & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                                   << 8U) 
                                                  | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                     >> 0x00000018U)));
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3038[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3038[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3038[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3038[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3038[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3038[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3038[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3038[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3038[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3038[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3038[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3038[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U];
        }
    } else {
        vlSelfRef.__PVT__pooling_result[0U] = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[0U];
        vlSelfRef.__PVT__pooling_result[1U] = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[1U];
        vlSelfRef.__PVT__pooling_result[2U] = (0x00ffffffU 
                                               & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U]);
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U];
        }
    }
    vlSelfRef.pooling_din_last = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en__BRA__5__KET__) 
                                  & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_60) 
                                      & (5U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_cnt_pooling))) 
                                     | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__strip_width_end)));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_2 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 1U) | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_4 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
            << 1U) | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_6 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 1U) | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_3 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_2));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_5 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_4));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_7 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_6));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_a_rdy 
        = (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_3));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_b_rdy 
        = (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_5));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__out_z_vld 
        = (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_7));
    if (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.__PVT__fp_mean_pool_cfg) {
        vlSelfRef.__PVT__data_buf0[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result0[0U]))))));
        vlSelfRef.__PVT__data_buf0[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result0[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf0[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf1[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result1[0U]))))));
        vlSelfRef.__PVT__data_buf1[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result1[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf1[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf2[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result2[0U]))))));
        vlSelfRef.__PVT__data_buf2[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result2[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf2[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf3[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result3[0U]))))));
        vlSelfRef.__PVT__data_buf3[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result3[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf3[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.pooling_out_pvld = ((0x0000000fU 
                                       == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__out_z_vld)) 
                                      & (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid));
    } else {
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf0[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf0[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf0[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf0[0U] = vlSelfRef.__PVT__latch_result0_d3[0U];
            vlSelfRef.__PVT__data_buf0[1U] = vlSelfRef.__PVT__latch_result0_d3[1U];
            vlSelfRef.__PVT__data_buf0[2U] = vlSelfRef.__PVT__latch_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf1[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf1[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf1[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf1[0U] = vlSelfRef.__PVT__latch_result1_d3[0U];
            vlSelfRef.__PVT__data_buf1[1U] = vlSelfRef.__PVT__latch_result1_d3[1U];
            vlSelfRef.__PVT__data_buf1[2U] = vlSelfRef.__PVT__latch_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf2[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf2[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf2[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf2[0U] = vlSelfRef.__PVT__latch_result2_d3[0U];
            vlSelfRef.__PVT__data_buf2[1U] = vlSelfRef.__PVT__latch_result2_d3[1U];
            vlSelfRef.__PVT__data_buf2[2U] = vlSelfRef.__PVT__latch_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf3[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf3[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf3[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf3[0U] = vlSelfRef.__PVT__latch_result3_d3[0U];
            vlSelfRef.__PVT__data_buf3[1U] = vlSelfRef.__PVT__latch_result3_d3[1U];
            vlSelfRef.__PVT__data_buf3[2U] = vlSelfRef.__PVT__latch_result3_d3[2U];
        }
        vlSelfRef.pooling_out_pvld = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid;
    }
    if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
        if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
            vlSelfRef.__PVT__fp_cur_pooling_dat[0U] 
                = vlSelfRef.__PVT__data_buf3[0U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[1U] 
                = vlSelfRef.__PVT__data_buf3[1U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[2U] 
                = vlSelfRef.__PVT__data_buf3[2U];
        } else {
            vlSelfRef.__PVT__fp_cur_pooling_dat[0U] 
                = vlSelfRef.__PVT__data_buf2[0U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[1U] 
                = vlSelfRef.__PVT__data_buf2[1U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[2U] 
                = vlSelfRef.__PVT__data_buf2[2U];
        }
    } else if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
        vlSelfRef.__PVT__fp_cur_pooling_dat[0U] = vlSelfRef.__PVT__data_buf1[0U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[1U] = vlSelfRef.__PVT__data_buf1[1U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[2U] = vlSelfRef.__PVT__data_buf1[2U];
    } else {
        vlSelfRef.__PVT__fp_cur_pooling_dat[0U] = vlSelfRef.__PVT__data_buf0[0U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[1U] = vlSelfRef.__PVT__data_buf0[1U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[2U] = vlSelfRef.__PVT__data_buf0[2U];
    }
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_prdy 
        = ((0x0000000fU == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_a_rdy)) 
           & (0x0000000fU == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_b_rdy)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_6__0(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_6__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3046[0U] 
        = (IData)((((QData)((IData)((0x0001ffffU & 
                                     (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                      >> 4U)))) << 0x00000022U) 
                   | (((QData)((IData)((0x0001ffffU 
                                        & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                           >> 0x0000000eU)))) 
                       << 0x00000011U) | (QData)((IData)(
                                                         (0x0001ffffU 
                                                          & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                              << 8U) 
                                                             | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                >> 0x00000018U))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3046[1U] 
        = ((0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3046[1U]) 
           | (IData)(((((QData)((IData)((0x0001ffffU 
                                         & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                            >> 4U)))) 
                        << 0x00000022U) | (((QData)((IData)(
                                                            (0x0001ffffU 
                                                             & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                >> 0x0000000eU)))) 
                                            << 0x00000011U) 
                                           | (QData)((IData)(
                                                             (0x0001ffffU 
                                                              & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                  << 8U) 
                                                                 | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                    >> 0x00000018U))))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3046[1U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3046[1U]) 
           | (0xfff80000U & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                              << 0x00000019U) | (0x01f80000U 
                                                 & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                    >> 7U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3046[2U] 
        = (0x0000000fU & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 7U));
    vlSelfRef.__PVT__fp_pool_sum[0U] = ((0xf8000000U 
                                         & vlSelfRef.__PVT__fp_pool_sum[0U]) 
                                        | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                            << 0x00000011U) 
                                           | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                               << 0x00000010U) 
                                              | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                  << 0x0000000aU) 
                                                 | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)))));
    vlSelfRef.__PVT__fp_pool_sum[0U] = ((0x07ffffffU 
                                         & vlSelfRef.__PVT__fp_pool_sum[0U]) 
                                        | (((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                              << 0x00000017U) 
                                             | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                 << 0x00000011U) 
                                                | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                   << 7U))) 
                                            | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                                << 6U) 
                                               | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10))) 
                                           << 0x0000001bU));
    vlSelfRef.__PVT__fp_pool_sum[1U] = ((0xfff80000U 
                                         & vlSelfRef.__PVT__fp_pool_sum[1U]) 
                                        | (((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                              << 0x00000017U) 
                                             | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                 << 0x00000011U) 
                                                | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                   << 7U))) 
                                            | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                                << 6U) 
                                               | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10))) 
                                           >> 5U));
    vlSelfRef.__PVT__fp_pool_sum[1U] = ((0x0007ffffU 
                                         & vlSelfRef.__PVT__fp_pool_sum[1U]) 
                                        | (0xfff80000U 
                                           & (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                               << 0x0000001dU) 
                                              | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                 << 0x00000013U))));
    vlSelfRef.__PVT__fp_pool_sum[2U] = (0x0000000fU 
                                        & ((0x0007fff8U 
                                            & ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                               << 3U)) 
                                           | ((0x0007ffffU 
                                               & ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                  >> 3U)) 
                                              | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                 >> 0x0000000dU))));
    if ((0x00010000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
        vlSelfRef.__PVT__pooling_result[0U] = ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                  >> 0x00000018U));
        vlSelfRef.__PVT__pooling_result[1U] = ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                  >> 0x00000018U));
        vlSelfRef.__PVT__pooling_result[2U] = (0x00ffffffU 
                                               & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                                   << 8U) 
                                                  | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                     >> 0x00000018U)));
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3046[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3046[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3046[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3046[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3046[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3046[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3046[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3046[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3046[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3046[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3046[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3046[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U];
        }
    } else {
        vlSelfRef.__PVT__pooling_result[0U] = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[0U];
        vlSelfRef.__PVT__pooling_result[1U] = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[1U];
        vlSelfRef.__PVT__pooling_result[2U] = (0x00ffffffU 
                                               & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U]);
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U];
        }
    }
    vlSelfRef.pooling_din_last = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en__BRA__6__KET__) 
                                  & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_60) 
                                      & (6U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_cnt_pooling))) 
                                     | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__strip_width_end)));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_2 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 1U) | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_4 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
            << 1U) | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_6 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 1U) | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_3 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_2));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_5 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_4));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_7 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_6));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_a_rdy 
        = (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_3));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_b_rdy 
        = (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_5));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__out_z_vld 
        = (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_7));
    if (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.__PVT__fp_mean_pool_cfg) {
        vlSelfRef.__PVT__data_buf0[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result0[0U]))))));
        vlSelfRef.__PVT__data_buf0[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result0[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf0[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf1[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result1[0U]))))));
        vlSelfRef.__PVT__data_buf1[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result1[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf1[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf2[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result2[0U]))))));
        vlSelfRef.__PVT__data_buf2[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result2[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf2[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf3[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result3[0U]))))));
        vlSelfRef.__PVT__data_buf3[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result3[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf3[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.pooling_out_pvld = ((0x0000000fU 
                                       == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__out_z_vld)) 
                                      & (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid));
    } else {
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf0[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf0[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf0[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf0[0U] = vlSelfRef.__PVT__latch_result0_d3[0U];
            vlSelfRef.__PVT__data_buf0[1U] = vlSelfRef.__PVT__latch_result0_d3[1U];
            vlSelfRef.__PVT__data_buf0[2U] = vlSelfRef.__PVT__latch_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf1[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf1[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf1[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf1[0U] = vlSelfRef.__PVT__latch_result1_d3[0U];
            vlSelfRef.__PVT__data_buf1[1U] = vlSelfRef.__PVT__latch_result1_d3[1U];
            vlSelfRef.__PVT__data_buf1[2U] = vlSelfRef.__PVT__latch_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf2[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf2[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf2[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf2[0U] = vlSelfRef.__PVT__latch_result2_d3[0U];
            vlSelfRef.__PVT__data_buf2[1U] = vlSelfRef.__PVT__latch_result2_d3[1U];
            vlSelfRef.__PVT__data_buf2[2U] = vlSelfRef.__PVT__latch_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf3[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf3[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf3[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf3[0U] = vlSelfRef.__PVT__latch_result3_d3[0U];
            vlSelfRef.__PVT__data_buf3[1U] = vlSelfRef.__PVT__latch_result3_d3[1U];
            vlSelfRef.__PVT__data_buf3[2U] = vlSelfRef.__PVT__latch_result3_d3[2U];
        }
        vlSelfRef.pooling_out_pvld = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid;
    }
    if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
        if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
            vlSelfRef.__PVT__fp_cur_pooling_dat[0U] 
                = vlSelfRef.__PVT__data_buf3[0U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[1U] 
                = vlSelfRef.__PVT__data_buf3[1U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[2U] 
                = vlSelfRef.__PVT__data_buf3[2U];
        } else {
            vlSelfRef.__PVT__fp_cur_pooling_dat[0U] 
                = vlSelfRef.__PVT__data_buf2[0U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[1U] 
                = vlSelfRef.__PVT__data_buf2[1U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[2U] 
                = vlSelfRef.__PVT__data_buf2[2U];
        }
    } else if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
        vlSelfRef.__PVT__fp_cur_pooling_dat[0U] = vlSelfRef.__PVT__data_buf1[0U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[1U] = vlSelfRef.__PVT__data_buf1[1U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[2U] = vlSelfRef.__PVT__data_buf1[2U];
    } else {
        vlSelfRef.__PVT__fp_cur_pooling_dat[0U] = vlSelfRef.__PVT__data_buf0[0U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[1U] = vlSelfRef.__PVT__data_buf0[1U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[2U] = vlSelfRef.__PVT__data_buf0[2U];
    }
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_prdy 
        = ((0x0000000fU == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_a_rdy)) 
           & (0x0000000fU == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_b_rdy)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__0(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[0U] 
        = (IData)((((QData)((IData)((0x0001ffffU & 
                                     (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                      >> 4U)))) << 0x00000022U) 
                   | (((QData)((IData)((0x0001ffffU 
                                        & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                           >> 0x0000000eU)))) 
                       << 0x00000011U) | (QData)((IData)(
                                                         (0x0001ffffU 
                                                          & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                              << 8U) 
                                                             | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                >> 0x00000018U))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[1U] 
        = ((0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[1U]) 
           | (IData)(((((QData)((IData)((0x0001ffffU 
                                         & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                            >> 4U)))) 
                        << 0x00000022U) | (((QData)((IData)(
                                                            (0x0001ffffU 
                                                             & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                >> 0x0000000eU)))) 
                                            << 0x00000011U) 
                                           | (QData)((IData)(
                                                             (0x0001ffffU 
                                                              & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                  << 8U) 
                                                                 | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                    >> 0x00000018U))))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[1U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[1U]) 
           | (0xfff80000U & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                              << 0x00000019U) | (0x01f80000U 
                                                 & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                    >> 7U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[2U] 
        = (0x0000000fU & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 7U));
    vlSelfRef.__PVT__fp_pool_sum[0U] = ((0xf8000000U 
                                         & vlSelfRef.__PVT__fp_pool_sum[0U]) 
                                        | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                            << 0x00000011U) 
                                           | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                               << 0x00000010U) 
                                              | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                  << 0x0000000aU) 
                                                 | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)))));
    vlSelfRef.__PVT__fp_pool_sum[0U] = ((0x07ffffffU 
                                         & vlSelfRef.__PVT__fp_pool_sum[0U]) 
                                        | (((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                              << 0x00000017U) 
                                             | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                 << 0x00000011U) 
                                                | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                   << 7U))) 
                                            | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                                << 6U) 
                                               | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10))) 
                                           << 0x0000001bU));
    vlSelfRef.__PVT__fp_pool_sum[1U] = ((0xfff80000U 
                                         & vlSelfRef.__PVT__fp_pool_sum[1U]) 
                                        | (((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                              << 0x00000017U) 
                                             | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                 << 0x00000011U) 
                                                | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                   << 7U))) 
                                            | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                                << 6U) 
                                               | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10))) 
                                           >> 5U));
    vlSelfRef.__PVT__fp_pool_sum[1U] = ((0x0007ffffU 
                                         & vlSelfRef.__PVT__fp_pool_sum[1U]) 
                                        | (0xfff80000U 
                                           & (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                               << 0x0000001dU) 
                                              | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                 << 0x00000013U))));
    vlSelfRef.__PVT__fp_pool_sum[2U] = (0x0000000fU 
                                        & ((0x0007fff8U 
                                            & ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                               << 3U)) 
                                           | ((0x0007ffffU 
                                               & ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                  >> 3U)) 
                                              | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                 >> 0x0000000dU))));
    if ((0x00010000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
        vlSelfRef.__PVT__pooling_result[0U] = ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                  >> 0x00000018U));
        vlSelfRef.__PVT__pooling_result[1U] = ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                  >> 0x00000018U));
        vlSelfRef.__PVT__pooling_result[2U] = (0x00ffffffU 
                                               & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                                   << 8U) 
                                                  | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                     >> 0x00000018U)));
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U];
        }
    } else {
        vlSelfRef.__PVT__pooling_result[0U] = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[0U];
        vlSelfRef.__PVT__pooling_result[1U] = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[1U];
        vlSelfRef.__PVT__pooling_result[2U] = (0x00ffffffU 
                                               & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U]);
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U];
        }
    }
    vlSelfRef.pooling_din_last = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en__BRA__7__KET__) 
                                  & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_60) 
                                      & (7U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_cnt_pooling))) 
                                     | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__strip_width_end)));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_2 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 1U) | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_4 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
            << 1U) | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_6 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 1U) | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_3 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_2));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_5 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_4));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_7 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_6));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_a_rdy 
        = (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_3));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_b_rdy 
        = (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_5));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__out_z_vld 
        = (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_7));
    if (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.__PVT__fp_mean_pool_cfg) {
        vlSelfRef.__PVT__data_buf0[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result0[0U]))))));
        vlSelfRef.__PVT__data_buf0[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result0[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf0[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf1[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result1[0U]))))));
        vlSelfRef.__PVT__data_buf1[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result1[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf1[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf2[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result2[0U]))))));
        vlSelfRef.__PVT__data_buf2[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result2[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf2[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf3[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result3[0U]))))));
        vlSelfRef.__PVT__data_buf3[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result3[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf3[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.pooling_out_pvld = ((0x0000000fU 
                                       == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__out_z_vld)) 
                                      & (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid));
    } else {
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf0[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf0[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf0[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf0[0U] = vlSelfRef.__PVT__latch_result0_d3[0U];
            vlSelfRef.__PVT__data_buf0[1U] = vlSelfRef.__PVT__latch_result0_d3[1U];
            vlSelfRef.__PVT__data_buf0[2U] = vlSelfRef.__PVT__latch_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf1[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf1[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf1[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf1[0U] = vlSelfRef.__PVT__latch_result1_d3[0U];
            vlSelfRef.__PVT__data_buf1[1U] = vlSelfRef.__PVT__latch_result1_d3[1U];
            vlSelfRef.__PVT__data_buf1[2U] = vlSelfRef.__PVT__latch_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf2[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf2[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf2[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf2[0U] = vlSelfRef.__PVT__latch_result2_d3[0U];
            vlSelfRef.__PVT__data_buf2[1U] = vlSelfRef.__PVT__latch_result2_d3[1U];
            vlSelfRef.__PVT__data_buf2[2U] = vlSelfRef.__PVT__latch_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf3[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf3[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf3[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf3[0U] = vlSelfRef.__PVT__latch_result3_d3[0U];
            vlSelfRef.__PVT__data_buf3[1U] = vlSelfRef.__PVT__latch_result3_d3[1U];
            vlSelfRef.__PVT__data_buf3[2U] = vlSelfRef.__PVT__latch_result3_d3[2U];
        }
        vlSelfRef.pooling_out_pvld = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid;
    }
    if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
        if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
            vlSelfRef.__PVT__fp_cur_pooling_dat[0U] 
                = vlSelfRef.__PVT__data_buf3[0U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[1U] 
                = vlSelfRef.__PVT__data_buf3[1U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[2U] 
                = vlSelfRef.__PVT__data_buf3[2U];
        } else {
            vlSelfRef.__PVT__fp_cur_pooling_dat[0U] 
                = vlSelfRef.__PVT__data_buf2[0U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[1U] 
                = vlSelfRef.__PVT__data_buf2[1U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[2U] 
                = vlSelfRef.__PVT__data_buf2[2U];
        }
    } else if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
        vlSelfRef.__PVT__fp_cur_pooling_dat[0U] = vlSelfRef.__PVT__data_buf1[0U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[1U] = vlSelfRef.__PVT__data_buf1[1U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[2U] = vlSelfRef.__PVT__data_buf1[2U];
    } else {
        vlSelfRef.__PVT__fp_cur_pooling_dat[0U] = vlSelfRef.__PVT__data_buf0[0U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[1U] = vlSelfRef.__PVT__data_buf0[1U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[2U] = vlSelfRef.__PVT__data_buf0[2U];
    }
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_prdy 
        = ((0x0000000fU == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_a_rdy)) 
           & (0x0000000fU == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_b_rdy)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_PDP_CORE_unit1d___ctor_var_reset(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->nvdla_core_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13795098205236914507ull);
    vlSelf->nvdla_core_rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15781730201853965120ull);
    vlSelf->average_pooling_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6884364064539979262ull);
    vlSelf->cur_datin_disable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4988658014610864156ull);
    vlSelf->last_out_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12068328814086770749ull);
    vlSelf->nvdla_op_gated_clk_fp16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11945653109852095966ull);
    VL_SCOPED_RAND_RESET_W(94, vlSelf->pdma2pdp_pd, __VscopeHash, 9598486350563803845ull);
    vlSelf->pdma2pdp_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9391828154491140047ull);
    vlSelf->pdp_din_lc_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14425777591729283204ull);
    vlSelf->pooling_din_1st = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4441334338302065898ull);
    vlSelf->pooling_din_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3267466369366585391ull);
    vlSelf->pooling_out_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2515505427707530947ull);
    vlSelf->pooling_type_cfg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15416827182209562921ull);
    vlSelf->pooling_unit_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10648025053905269549ull);
    vlSelf->reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13900896928082895439ull);
    vlSelf->reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11057522611199393495ull);
    vlSelf->reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3189991128892564258ull);
    vlSelf->pdma2pdp_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1509988105960392445ull);
    VL_SCOPED_RAND_RESET_W(92, vlSelf->pooling_out, __VscopeHash, 7884533613819988889ull);
    vlSelf->pooling_out_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5965651903392224913ull);
    vlSelf->__PVT__add_out_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2300795899623075674ull);
    VL_SCOPED_RAND_RESET_W(88, vlSelf->__PVT__data_buf0, __VscopeHash, 18288748969371096392ull);
    VL_SCOPED_RAND_RESET_W(88, vlSelf->__PVT__data_buf1, __VscopeHash, 15729921324860674928ull);
    VL_SCOPED_RAND_RESET_W(88, vlSelf->__PVT__data_buf2, __VscopeHash, 8254824724560887302ull);
    VL_SCOPED_RAND_RESET_W(88, vlSelf->__PVT__data_buf3, __VscopeHash, 14354395921196375502ull);
    VL_SCOPED_RAND_RESET_W(88, vlSelf->__PVT__fp_cur_pooling_dat, __VscopeHash, 5545708321199243540ull);
    vlSelf->__PVT__fp_mean_pool_cfg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 250092090809233977ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->__PVT__fp_pool_sum, __VscopeHash, 12271218447155690618ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->__PVT__fp_pool_sum_result0, __VscopeHash, 2913473091806415911ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->__PVT__fp_pool_sum_result1, __VscopeHash, 522093500826657729ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->__PVT__fp_pool_sum_result2, __VscopeHash, 3638829203948119743ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->__PVT__fp_pool_sum_result3, __VscopeHash, 11408803524433642757ull);
    VL_SCOPED_RAND_RESET_W(88, vlSelf->__PVT__int_pooling, __VscopeHash, 17941056809826502424ull);
    vlSelf->__PVT__load_din = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15932833667077492844ull);
    vlSelf->__PVT__pipe_in_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11175111205446083239ull);
    vlSelf->__PVT__pipe_in_rdy_d1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13400543881615917225ull);
    vlSelf->__PVT__pipe_in_rdy_d2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10798545803200253176ull);
    vlSelf->__PVT__pipe_in_rdy_d3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5577817315824363339ull);
    vlSelf->__PVT__pipe_in_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10699800482795822034ull);
    vlSelf->__PVT__pool_fun_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5143322749688366760ull);
    VL_SCOPED_RAND_RESET_W(88, vlSelf->__PVT__pooling_result, __VscopeHash, 12853829562068165936ull);
    VL_SCOPED_RAND_RESET_W(92, vlSelf->__PVT__flush_out0, __VscopeHash, 8166279470068733578ull);
    VL_SCOPED_RAND_RESET_W(92, vlSelf->__PVT__flush_out1, __VscopeHash, 4741549393253942483ull);
    VL_SCOPED_RAND_RESET_W(92, vlSelf->__PVT__flush_out2, __VscopeHash, 10710033306942970906ull);
    VL_SCOPED_RAND_RESET_W(92, vlSelf->__PVT__flush_out3, __VscopeHash, 7207909703975691867ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->__PVT__fp_pool_sum_result0_d3, __VscopeHash, 1896523251705921694ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->__PVT__fp_pool_sum_result1_d3, __VscopeHash, 10836377887281309045ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->__PVT__fp_pool_sum_result2_d3, __VscopeHash, 15717192486829010961ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->__PVT__fp_pool_sum_result3_d3, __VscopeHash, 3172692916990211857ull);
    VL_SCOPED_RAND_RESET_W(88, vlSelf->__PVT__latch_result0_d3, __VscopeHash, 16304178584294624494ull);
    VL_SCOPED_RAND_RESET_W(88, vlSelf->__PVT__latch_result1_d3, __VscopeHash, 7511315884661452369ull);
    VL_SCOPED_RAND_RESET_W(88, vlSelf->__PVT__latch_result2_d3, __VscopeHash, 795665101488961676ull);
    VL_SCOPED_RAND_RESET_W(88, vlSelf->__PVT__latch_result3_d3, __VscopeHash, 4227051160830591864ull);
    vlSelf->__PVT__pooling_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17114840527732183316ull);
    vlSelf->__PVT__pooling_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14436648184954664251ull);
    vlSelf->__PVT__pooling_MIN__Vstatic__data0_lsb = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1698404171363948885ull);
    vlSelf->__PVT__pooling_MIN__Vstatic__data0_msb = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2178983277968199152ull);
    vlSelf->__PVT__pooling_MIN__Vstatic__data1_lsb = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10071907239521985272ull);
    vlSelf->__PVT__pooling_MIN__Vstatic__data1_msb = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14345302222363154749ull);
    vlSelf->__PVT__pooling_MIN__Vstatic__min_16int = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 14979405280259847724ull);
    vlSelf->__PVT__pooling_MIN__Vstatic__min_fp16 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5005430437991107606ull);
    vlSelf->__PVT__pooling_MIN__Vstatic__min_8int_lsb = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1835407000706014998ull);
    vlSelf->__PVT__pooling_MIN__Vstatic__min_8int_msb = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12608787733649857500ull);
    vlSelf->__PVT__pooling_MIN__Vstatic__int16_data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1674861865101748212ull);
    vlSelf->__PVT__pooling_MIN__Vstatic__int16_data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17354592889604402992ull);
    vlSelf->__PVT__pooling_MIN__Vstatic__fp16_data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 6594565806011582507ull);
    vlSelf->__PVT__pooling_MIN__Vstatic__fp16_data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 18368450753321043511ull);
    vlSelf->__PVT__pooling_MIN__Vstatic__min_8int_lsb_ff = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16503759736918405133ull);
    vlSelf->__PVT__pooling_MIN__Vstatic__min_8int_msb_ff = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9909311526796123880ull);
    vlSelf->__PVT__pooling_MIN__Vstatic__min_16int_ff = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14118054682009726089ull);
    vlSelf->__PVT__pooling_MAX__Vstatic__data0_lsb = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8628279076735579595ull);
    vlSelf->__PVT__pooling_MAX__Vstatic__data0_msb = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13771168088291183029ull);
    vlSelf->__PVT__pooling_MAX__Vstatic__data1_lsb = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6276974620540436558ull);
    vlSelf->__PVT__pooling_MAX__Vstatic__data1_msb = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 772661734811598128ull);
    vlSelf->__PVT__pooling_MAX__Vstatic__max_16int = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1405538403660220432ull);
    vlSelf->__PVT__pooling_MAX__Vstatic__max_fp16 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2746075776923627067ull);
    vlSelf->__PVT__pooling_MAX__Vstatic__max_8int_lsb = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10402207231100071845ull);
    vlSelf->__PVT__pooling_MAX__Vstatic__max_8int_msb = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1495813229863462679ull);
    vlSelf->__PVT__pooling_MAX__Vstatic__int16_data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 18314209676604981087ull);
    vlSelf->__PVT__pooling_MAX__Vstatic__int16_data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 11106324454946388800ull);
    vlSelf->__PVT__pooling_MAX__Vstatic__fp16_data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 11996139669323714191ull);
    vlSelf->__PVT__pooling_MAX__Vstatic__fp16_data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 18025411836426778014ull);
    vlSelf->__PVT__pooling_MAX__Vstatic__max_8int_lsb_ff = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6341565497404861971ull);
    vlSelf->__PVT__pooling_MAX__Vstatic__max_8int_msb_ff = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5640754706961908154ull);
    vlSelf->__PVT__pooling_MAX__Vstatic__max_16int_ff = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11662892983778217960ull);
    vlSelf->__PVT__pooling_SUM__Vstatic__data0_lsb = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 147332771368155515ull);
    vlSelf->__PVT__pooling_SUM__Vstatic__data0_msb = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11184538811104535239ull);
    vlSelf->__PVT__pooling_SUM__Vstatic__data1_lsb = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10329843665904916325ull);
    vlSelf->__PVT__pooling_SUM__Vstatic__data1_msb = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9812080934151236859ull);
    vlSelf->__PVT__pooling_SUM__Vstatic__int16_data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12096820145662046752ull);
    vlSelf->__PVT__pooling_SUM__Vstatic__int16_data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1189375539154054396ull);
    vlSelf->__PVT__pooling_SUM__Vstatic__sum_16int = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 3649782113644045278ull);
    vlSelf->__PVT__pooling_SUM__Vstatic__sum_8int_lsb = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15643142456359838484ull);
    vlSelf->__PVT__pooling_SUM__Vstatic__sum_8int_msb = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1278483548362205483ull);
    vlSelf->__PVT__pooling_SUM__Vstatic__sum_8int_lsb_ff = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9218034855351659460ull);
    vlSelf->__PVT__pooling_SUM__Vstatic__sum_8int_msb_ff = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9533675988872710900ull);
    vlSelf->__PVT__pooling_SUM__Vstatic__sum_16int_ff = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 13823138097906390248ull);
    vlSelf->__PVT__pooling_fun__Vstatic__min_pooling = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16277296469280203295ull);
    vlSelf->__PVT__pooling_fun__Vstatic__max_pooling = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16267315414688597830ull);
    vlSelf->__PVT__pooling_fun__Vstatic__mean_pooling = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13560167389257038513ull);
    vlSelf->__PVT__pooling_fun__Vstatic__din0_is_nan = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3662608734811843492ull);
    vlSelf->__PVT__pooling_fun__Vstatic__din1_is_nan = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2552475333435030993ull);
    vlSelf->__PVT__pooling_fun__Vstatic__nan_in = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1215325008323427935ull);
    vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4765345771537579856ull);
    vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__inp_out_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2427778238670436252ull);
    vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11771710775409087501ull);
    vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__inp_a_rdy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8446686792454603934ull);
    vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__inp_b_rdy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5956945326970697277ull);
    vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__out_z_vld = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12730477270206000999ull);
    vlSelf->u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8459777317341930118ull);
    vlSelf->u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5924996310913631507ull);
    vlSelf->u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_4 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4210796010949441321ull);
    vlSelf->u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_5 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3938240328941306432ull);
    vlSelf->u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_6 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4061593402854432512ull);
    vlSelf->u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_7 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12930739905311112757ull);
    VL_SCOPED_RAND_RESET_W(185, vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data, __VscopeHash, 17633712268433854607ull);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7275116386423144664ull);
    VL_SCOPED_RAND_RESET_W(185, vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data, __VscopeHash, 2436424408303884369ull);
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4219242389160901449ull);
    VL_SCOPED_RAND_RESET_W(185, vlSelf->__PVT__pipe_p3__DOT__p3_pipe_data, __VscopeHash, 1719927844608622197ull);
    vlSelf->__PVT__pipe_p3__DOT__p3_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15736517410706576585ull);
    VL_SCOPED_RAND_RESET_W(185, vlSelf->__PVT__pipe_p4__DOT__p4_pipe_data, __VscopeHash, 15886778822496722761ull);
    vlSelf->__PVT__pipe_p4__DOT__p4_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13374981015437249148ull);
    VL_SCOPED_RAND_RESET_W(88, vlSelf->__Vfunc_pooling_fun__0__Vfuncout, __VscopeHash, 15181779622638344777ull);
    vlSelf->__Vfunc_pooling_SUM__1__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 7805891786290534896ull);
    vlSelf->__Vfunc_pooling_SUM__1__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9040794695898399896ull);
    vlSelf->__Vfunc_pooling_SUM__1__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8958555817991801031ull);
    vlSelf->__Vfunc_pooling_SUM__1__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16134660945191588705ull);
    vlSelf->__Vfunc_pooling_SUM__1__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2546223011860430050ull);
    vlSelf->__Vfunc_pooling_MIN__2__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16807645767690450181ull);
    vlSelf->__Vfunc_pooling_MIN__2__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17744910739212428756ull);
    vlSelf->__Vfunc_pooling_MIN__2__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7882678466746402600ull);
    vlSelf->__Vfunc_pooling_MIN__2__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6804438505794817076ull);
    vlSelf->__Vfunc_pooling_MIN__2__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 6617737524012574896ull);
    vlSelf->__Vfunc_pooling_MIN__2__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 15446858376432654253ull);
    vlSelf->__Vfunc_pooling_MAX__3__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17625952686094206033ull);
    vlSelf->__Vfunc_pooling_MAX__3__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5273672050785604844ull);
    vlSelf->__Vfunc_pooling_MAX__3__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11449214530781766305ull);
    vlSelf->__Vfunc_pooling_MAX__3__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14001612193408967510ull);
    vlSelf->__Vfunc_pooling_MAX__3__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 18241527084459333052ull);
    vlSelf->__Vfunc_pooling_MAX__3__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10179627428026274615ull);
    vlSelf->__Vfunc_pooling_SUM__4__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 13477476382399296441ull);
    vlSelf->__Vfunc_pooling_SUM__4__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12716200164463356314ull);
    vlSelf->__Vfunc_pooling_SUM__4__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10103451686634885428ull);
    vlSelf->__Vfunc_pooling_SUM__4__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12358465736978917220ull);
    vlSelf->__Vfunc_pooling_SUM__4__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 8495928076697990448ull);
    vlSelf->__Vfunc_pooling_MIN__5__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10727128725642345322ull);
    vlSelf->__Vfunc_pooling_MIN__5__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15992891410674087963ull);
    vlSelf->__Vfunc_pooling_MIN__5__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10577536449318376639ull);
    vlSelf->__Vfunc_pooling_MIN__5__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6093296173281570691ull);
    vlSelf->__Vfunc_pooling_MIN__5__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 18135866565088077489ull);
    vlSelf->__Vfunc_pooling_MIN__5__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16919306322580610552ull);
    vlSelf->__Vfunc_pooling_MAX__6__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 11317270387169206971ull);
    vlSelf->__Vfunc_pooling_MAX__6__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15711846508890001485ull);
    vlSelf->__Vfunc_pooling_MAX__6__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5720266163183270291ull);
    vlSelf->__Vfunc_pooling_MAX__6__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3844831663352363826ull);
    vlSelf->__Vfunc_pooling_MAX__6__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 9044582834503436647ull);
    vlSelf->__Vfunc_pooling_MAX__6__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12805384359241748825ull);
    vlSelf->__Vfunc_pooling_SUM__7__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1145528201095093925ull);
    vlSelf->__Vfunc_pooling_SUM__7__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4428543725641166162ull);
    vlSelf->__Vfunc_pooling_SUM__7__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17239273168262090600ull);
    vlSelf->__Vfunc_pooling_SUM__7__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12297872877672457228ull);
    vlSelf->__Vfunc_pooling_SUM__7__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 13719479753670450223ull);
    vlSelf->__Vfunc_pooling_MIN__8__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 6771778885837752748ull);
    vlSelf->__Vfunc_pooling_MIN__8__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4066943254664979618ull);
    vlSelf->__Vfunc_pooling_MIN__8__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13205521068118181518ull);
    vlSelf->__Vfunc_pooling_MIN__8__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5935521528391733214ull);
    vlSelf->__Vfunc_pooling_MIN__8__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10817195906167538266ull);
    vlSelf->__Vfunc_pooling_MIN__8__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 13521521835678965545ull);
    vlSelf->__Vfunc_pooling_MAX__9__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 4954796432363058853ull);
    vlSelf->__Vfunc_pooling_MAX__9__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14650908247641169912ull);
    vlSelf->__Vfunc_pooling_MAX__9__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12563600854562711290ull);
    vlSelf->__Vfunc_pooling_MAX__9__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7466420346126226119ull);
    vlSelf->__Vfunc_pooling_MAX__9__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 6066952054897067416ull);
    vlSelf->__Vfunc_pooling_MAX__9__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10874934737675034911ull);
    vlSelf->__Vfunc_pooling_SUM__10__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 13291746836763541315ull);
    vlSelf->__Vfunc_pooling_SUM__10__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8733801172077377209ull);
    vlSelf->__Vfunc_pooling_SUM__10__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14475670753675030313ull);
    vlSelf->__Vfunc_pooling_SUM__10__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16792846607103001948ull);
    vlSelf->__Vfunc_pooling_SUM__10__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 7088732220448796245ull);
    vlSelf->__Vfunc_pooling_MIN__11__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 8431528996477492702ull);
    vlSelf->__Vfunc_pooling_MIN__11__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18423011766613672782ull);
    vlSelf->__Vfunc_pooling_MIN__11__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12324294671928433371ull);
    vlSelf->__Vfunc_pooling_MIN__11__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4434642797728427259ull);
    vlSelf->__Vfunc_pooling_MIN__11__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5809745976538694117ull);
    vlSelf->__Vfunc_pooling_MIN__11__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 11181162414491122928ull);
    vlSelf->__Vfunc_pooling_MAX__12__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 8428227237312412022ull);
    vlSelf->__Vfunc_pooling_MAX__12__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14135668398220218054ull);
    vlSelf->__Vfunc_pooling_MAX__12__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16517628518840899351ull);
    vlSelf->__Vfunc_pooling_MAX__12__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1957911783124924530ull);
    vlSelf->__Vfunc_pooling_MAX__12__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1709526371179684300ull);
    vlSelf->__Vfunc_pooling_MAX__12__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 9663306822231042768ull);
    VL_SCOPED_RAND_RESET_W(88, vlSelf->__Vfunc_pooling_fun__13__Vfuncout, __VscopeHash, 3387386094453633136ull);
    vlSelf->__Vfunc_pooling_SUM__14__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 988028560270951932ull);
    vlSelf->__Vfunc_pooling_SUM__14__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12119679290557461323ull);
    vlSelf->__Vfunc_pooling_SUM__14__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8089095460404945703ull);
    vlSelf->__Vfunc_pooling_SUM__14__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 18334247226503882851ull);
    vlSelf->__Vfunc_pooling_SUM__14__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2934247416691211973ull);
    vlSelf->__Vfunc_pooling_MIN__15__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 8239129778751359572ull);
    vlSelf->__Vfunc_pooling_MIN__15__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6664501379190638666ull);
    vlSelf->__Vfunc_pooling_MIN__15__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9452017910737490000ull);
    vlSelf->__Vfunc_pooling_MIN__15__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10349959807201009920ull);
    vlSelf->__Vfunc_pooling_MIN__15__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5927452453818993725ull);
    vlSelf->__Vfunc_pooling_MIN__15__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5659385257497093213ull);
    vlSelf->__Vfunc_pooling_MAX__16__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2056695350630809294ull);
    vlSelf->__Vfunc_pooling_MAX__16__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13382209055171354915ull);
    vlSelf->__Vfunc_pooling_MAX__16__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17801891328347484347ull);
    vlSelf->__Vfunc_pooling_MAX__16__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14228736105688963064ull);
    vlSelf->__Vfunc_pooling_MAX__16__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2073659303985132936ull);
    vlSelf->__Vfunc_pooling_MAX__16__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 3562108534886275185ull);
    vlSelf->__Vfunc_pooling_SUM__17__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10308957594572095500ull);
    vlSelf->__Vfunc_pooling_SUM__17__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5922704599876153050ull);
    vlSelf->__Vfunc_pooling_SUM__17__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11802818050105490719ull);
    vlSelf->__Vfunc_pooling_SUM__17__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 7208855618110578085ull);
    vlSelf->__Vfunc_pooling_SUM__17__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 4691743213741232049ull);
    vlSelf->__Vfunc_pooling_MIN__18__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12389759554781035646ull);
    vlSelf->__Vfunc_pooling_MIN__18__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 530091523261224552ull);
    vlSelf->__Vfunc_pooling_MIN__18__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13634660160643695751ull);
    vlSelf->__Vfunc_pooling_MIN__18__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8550396860220874374ull);
    vlSelf->__Vfunc_pooling_MIN__18__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12878267646722987580ull);
    vlSelf->__Vfunc_pooling_MIN__18__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 7475611148686634361ull);
    vlSelf->__Vfunc_pooling_MAX__19__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12557730503438149759ull);
    vlSelf->__Vfunc_pooling_MAX__19__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17805657392625866750ull);
    vlSelf->__Vfunc_pooling_MAX__19__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1518310108599494919ull);
    vlSelf->__Vfunc_pooling_MAX__19__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7398398835962878778ull);
    vlSelf->__Vfunc_pooling_MAX__19__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 14402150501353362210ull);
    vlSelf->__Vfunc_pooling_MAX__19__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 4334500134873946786ull);
    vlSelf->__Vfunc_pooling_SUM__20__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 4805050312938167862ull);
    vlSelf->__Vfunc_pooling_SUM__20__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10722239471135166268ull);
    vlSelf->__Vfunc_pooling_SUM__20__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 830704417663389120ull);
    vlSelf->__Vfunc_pooling_SUM__20__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 14841958875712503154ull);
    vlSelf->__Vfunc_pooling_SUM__20__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16240537876397627962ull);
    vlSelf->__Vfunc_pooling_MIN__21__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 14410241702425590596ull);
    vlSelf->__Vfunc_pooling_MIN__21__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14631609051592003473ull);
    vlSelf->__Vfunc_pooling_MIN__21__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10146974732474495268ull);
    vlSelf->__Vfunc_pooling_MIN__21__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15241370275177697936ull);
    vlSelf->__Vfunc_pooling_MIN__21__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12267241499162226958ull);
    vlSelf->__Vfunc_pooling_MIN__21__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10570679643489602923ull);
    vlSelf->__Vfunc_pooling_MAX__22__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 15560646565726428608ull);
    vlSelf->__Vfunc_pooling_MAX__22__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8210463505154295771ull);
    vlSelf->__Vfunc_pooling_MAX__22__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12198295177444840418ull);
    vlSelf->__Vfunc_pooling_MAX__22__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12232104015126108448ull);
    vlSelf->__Vfunc_pooling_MAX__22__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5921039674655783599ull);
    vlSelf->__Vfunc_pooling_MAX__22__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12005500120715286175ull);
    vlSelf->__Vfunc_pooling_SUM__23__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 11221650344461886615ull);
    vlSelf->__Vfunc_pooling_SUM__23__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10888282738311470206ull);
    vlSelf->__Vfunc_pooling_SUM__23__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10262214448839144703ull);
    vlSelf->__Vfunc_pooling_SUM__23__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 8027408449612087813ull);
    vlSelf->__Vfunc_pooling_SUM__23__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 4121842681649167485ull);
    vlSelf->__Vfunc_pooling_MIN__24__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 8747638544261600636ull);
    vlSelf->__Vfunc_pooling_MIN__24__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16996278709126579810ull);
    vlSelf->__Vfunc_pooling_MIN__24__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 711946583135948866ull);
    vlSelf->__Vfunc_pooling_MIN__24__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10584037315122487092ull);
    vlSelf->__Vfunc_pooling_MIN__24__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 6918698598214297975ull);
    vlSelf->__Vfunc_pooling_MIN__24__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17035225335151107726ull);
    vlSelf->__Vfunc_pooling_MAX__25__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5415861758440049083ull);
    vlSelf->__Vfunc_pooling_MAX__25__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13519963666705437925ull);
    vlSelf->__Vfunc_pooling_MAX__25__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17095991377676398983ull);
    vlSelf->__Vfunc_pooling_MAX__25__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 562402526314352666ull);
    vlSelf->__Vfunc_pooling_MAX__25__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 4323100699920161080ull);
    vlSelf->__Vfunc_pooling_MAX__25__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12112589450684304155ull);
    VL_SCOPED_RAND_RESET_W(88, vlSelf->__Vfunc_pooling_fun__26__Vfuncout, __VscopeHash, 5767401555961275965ull);
    vlSelf->__Vfunc_pooling_SUM__27__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16048389038585101476ull);
    vlSelf->__Vfunc_pooling_SUM__27__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8923022677564288319ull);
    vlSelf->__Vfunc_pooling_SUM__27__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 770760994074247896ull);
    vlSelf->__Vfunc_pooling_SUM__27__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1593969609790986131ull);
    vlSelf->__Vfunc_pooling_SUM__27__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12052724328032185582ull);
    vlSelf->__Vfunc_pooling_MIN__28__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2138173340832775204ull);
    vlSelf->__Vfunc_pooling_MIN__28__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15437028257490954529ull);
    vlSelf->__Vfunc_pooling_MIN__28__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1273168962389397446ull);
    vlSelf->__Vfunc_pooling_MIN__28__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 596273863839092467ull);
    vlSelf->__Vfunc_pooling_MIN__28__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1940051096905510482ull);
    vlSelf->__Vfunc_pooling_MIN__28__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 9991547238095796473ull);
    vlSelf->__Vfunc_pooling_MAX__29__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 7377369181291122781ull);
    vlSelf->__Vfunc_pooling_MAX__29__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4385375589795647586ull);
    vlSelf->__Vfunc_pooling_MAX__29__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15527500147768231446ull);
    vlSelf->__Vfunc_pooling_MAX__29__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15465539646567451012ull);
    vlSelf->__Vfunc_pooling_MAX__29__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5311624651148229905ull);
    vlSelf->__Vfunc_pooling_MAX__29__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 9932816120494934439ull);
    vlSelf->__Vfunc_pooling_SUM__30__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2276182910718381699ull);
    vlSelf->__Vfunc_pooling_SUM__30__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14458292874893678095ull);
    vlSelf->__Vfunc_pooling_SUM__30__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1158481097266581933ull);
    vlSelf->__Vfunc_pooling_SUM__30__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1770958420722222622ull);
    vlSelf->__Vfunc_pooling_SUM__30__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 15070550853705244050ull);
    vlSelf->__Vfunc_pooling_MIN__31__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 3496892379150151775ull);
    vlSelf->__Vfunc_pooling_MIN__31__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10850196276795108295ull);
    vlSelf->__Vfunc_pooling_MIN__31__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7523706131475282525ull);
    vlSelf->__Vfunc_pooling_MIN__31__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7728414025488897421ull);
    vlSelf->__Vfunc_pooling_MIN__31__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 9125457520490213462ull);
    vlSelf->__Vfunc_pooling_MIN__31__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 7425679558914004672ull);
    vlSelf->__Vfunc_pooling_MAX__32__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16296301491615348827ull);
    vlSelf->__Vfunc_pooling_MAX__32__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2032831928002704061ull);
    vlSelf->__Vfunc_pooling_MAX__32__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 645759082504296863ull);
    vlSelf->__Vfunc_pooling_MAX__32__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 20108827878899663ull);
    vlSelf->__Vfunc_pooling_MAX__32__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1771650917260102988ull);
    vlSelf->__Vfunc_pooling_MAX__32__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1338934928379033528ull);
    vlSelf->__Vfunc_pooling_SUM__33__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 8892274217938055419ull);
    vlSelf->__Vfunc_pooling_SUM__33__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1743092842699553052ull);
    vlSelf->__Vfunc_pooling_SUM__33__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16100106879292903844ull);
    vlSelf->__Vfunc_pooling_SUM__33__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16437371858537523979ull);
    vlSelf->__Vfunc_pooling_SUM__33__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10665558521757362879ull);
    vlSelf->__Vfunc_pooling_MIN__34__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 4933339944395269023ull);
    vlSelf->__Vfunc_pooling_MIN__34__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17052740677503806377ull);
    vlSelf->__Vfunc_pooling_MIN__34__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11287055172080565991ull);
    vlSelf->__Vfunc_pooling_MIN__34__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13262255750542026017ull);
    vlSelf->__Vfunc_pooling_MIN__34__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 14712936094235631055ull);
    vlSelf->__Vfunc_pooling_MIN__34__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 3929412764801940734ull);
    vlSelf->__Vfunc_pooling_MAX__35__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 6245322859193838393ull);
    vlSelf->__Vfunc_pooling_MAX__35__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16235197047683851600ull);
    vlSelf->__Vfunc_pooling_MAX__35__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8743056987307904518ull);
    vlSelf->__Vfunc_pooling_MAX__35__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 363766464321257739ull);
    vlSelf->__Vfunc_pooling_MAX__35__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 6165412045958237172ull);
    vlSelf->__Vfunc_pooling_MAX__35__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1272883588343487134ull);
    vlSelf->__Vfunc_pooling_SUM__36__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 6861038280565593933ull);
    vlSelf->__Vfunc_pooling_SUM__36__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5420769730966355246ull);
    vlSelf->__Vfunc_pooling_SUM__36__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15685470491694820336ull);
    vlSelf->__Vfunc_pooling_SUM__36__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1545639593617887182ull);
    vlSelf->__Vfunc_pooling_SUM__36__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5331370888526735096ull);
    vlSelf->__Vfunc_pooling_MIN__37__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 6028088935985442185ull);
    vlSelf->__Vfunc_pooling_MIN__37__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6725024742922058705ull);
    vlSelf->__Vfunc_pooling_MIN__37__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2067534979644218175ull);
    vlSelf->__Vfunc_pooling_MIN__37__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4970807689382382329ull);
    vlSelf->__Vfunc_pooling_MIN__37__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10806980962333407838ull);
    vlSelf->__Vfunc_pooling_MIN__37__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5643113626329058582ull);
    vlSelf->__Vfunc_pooling_MAX__38__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12385488815140016132ull);
    vlSelf->__Vfunc_pooling_MAX__38__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14409130120917348563ull);
    vlSelf->__Vfunc_pooling_MAX__38__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5792142942326482845ull);
    vlSelf->__Vfunc_pooling_MAX__38__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5401335423807977590ull);
    vlSelf->__Vfunc_pooling_MAX__38__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 3913117794632763552ull);
    vlSelf->__Vfunc_pooling_MAX__38__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2810010845462378395ull);
    VL_SCOPED_RAND_RESET_W(88, vlSelf->__Vfunc_pooling_fun__39__Vfuncout, __VscopeHash, 8921320989528601813ull);
    vlSelf->__Vfunc_pooling_SUM__40__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16779624248606796392ull);
    vlSelf->__Vfunc_pooling_SUM__40__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4413573345056612509ull);
    vlSelf->__Vfunc_pooling_SUM__40__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10017789059483838740ull);
    vlSelf->__Vfunc_pooling_SUM__40__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2769986691066203021ull);
    vlSelf->__Vfunc_pooling_SUM__40__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2144424795426838010ull);
    vlSelf->__Vfunc_pooling_MIN__41__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5495195522070590437ull);
    vlSelf->__Vfunc_pooling_MIN__41__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14882924807854253815ull);
    vlSelf->__Vfunc_pooling_MIN__41__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17676178241239940917ull);
    vlSelf->__Vfunc_pooling_MIN__41__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14593653766625647773ull);
    vlSelf->__Vfunc_pooling_MIN__41__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 3622035102926457018ull);
    vlSelf->__Vfunc_pooling_MIN__41__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16733621193964981566ull);
    vlSelf->__Vfunc_pooling_MAX__42__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 15332306048638065330ull);
    vlSelf->__Vfunc_pooling_MAX__42__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17762586065268698622ull);
    vlSelf->__Vfunc_pooling_MAX__42__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11170370615355554807ull);
    vlSelf->__Vfunc_pooling_MAX__42__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15344783041555516597ull);
    vlSelf->__Vfunc_pooling_MAX__42__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17688448207666637265ull);
    vlSelf->__Vfunc_pooling_MAX__42__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 8779261388300333777ull);
    vlSelf->__Vfunc_pooling_SUM__43__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 13367437572393585898ull);
    vlSelf->__Vfunc_pooling_SUM__43__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11987153292438116842ull);
    vlSelf->__Vfunc_pooling_SUM__43__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9977066969523749803ull);
    vlSelf->__Vfunc_pooling_SUM__43__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10550443281656577302ull);
    vlSelf->__Vfunc_pooling_SUM__43__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 6940139354413482919ull);
    vlSelf->__Vfunc_pooling_MIN__44__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 14655368064108513188ull);
    vlSelf->__Vfunc_pooling_MIN__44__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6024355194741601359ull);
    vlSelf->__Vfunc_pooling_MIN__44__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14441062592407537892ull);
    vlSelf->__Vfunc_pooling_MIN__44__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 968031327422785211ull);
    vlSelf->__Vfunc_pooling_MIN__44__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2835850534775877134ull);
    vlSelf->__Vfunc_pooling_MIN__44__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 108858376996075753ull);
    vlSelf->__Vfunc_pooling_MAX__45__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 4761180258735850036ull);
    vlSelf->__Vfunc_pooling_MAX__45__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16827730348662804636ull);
    vlSelf->__Vfunc_pooling_MAX__45__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16108084093833543771ull);
    vlSelf->__Vfunc_pooling_MAX__45__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12594513002568852076ull);
    vlSelf->__Vfunc_pooling_MAX__45__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 7563492576321546257ull);
    vlSelf->__Vfunc_pooling_MAX__45__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 15765252466255938839ull);
    vlSelf->__Vfunc_pooling_SUM__46__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17950499642903611989ull);
    vlSelf->__Vfunc_pooling_SUM__46__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13179071488699916408ull);
    vlSelf->__Vfunc_pooling_SUM__46__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1165304016760719208ull);
    vlSelf->__Vfunc_pooling_SUM__46__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 4500327063102163181ull);
    vlSelf->__Vfunc_pooling_SUM__46__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 9791344079793099369ull);
    vlSelf->__Vfunc_pooling_MIN__47__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10426520333107494222ull);
    vlSelf->__Vfunc_pooling_MIN__47__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8790802981192103281ull);
    vlSelf->__Vfunc_pooling_MIN__47__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15754336425177402923ull);
    vlSelf->__Vfunc_pooling_MIN__47__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4977563049940509621ull);
    vlSelf->__Vfunc_pooling_MIN__47__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 7707340675492779926ull);
    vlSelf->__Vfunc_pooling_MIN__47__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 18414956506814623324ull);
    vlSelf->__Vfunc_pooling_MAX__48__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5008896269898279100ull);
    vlSelf->__Vfunc_pooling_MAX__48__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8530997133271525906ull);
    vlSelf->__Vfunc_pooling_MAX__48__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13239628389146722780ull);
    vlSelf->__Vfunc_pooling_MAX__48__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5584143753731163244ull);
    vlSelf->__Vfunc_pooling_MAX__48__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17197000140653395574ull);
    vlSelf->__Vfunc_pooling_MAX__48__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 11484804698661365502ull);
    vlSelf->__Vfunc_pooling_SUM__49__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 7214036399436881477ull);
    vlSelf->__Vfunc_pooling_SUM__49__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14896353989144999778ull);
    vlSelf->__Vfunc_pooling_SUM__49__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1318116351541291368ull);
    vlSelf->__Vfunc_pooling_SUM__49__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 174866552997706046ull);
    vlSelf->__Vfunc_pooling_SUM__49__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12333311707744984642ull);
    vlSelf->__Vfunc_pooling_MIN__50__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10310512636526749940ull);
    vlSelf->__Vfunc_pooling_MIN__50__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3272865389576567988ull);
    vlSelf->__Vfunc_pooling_MIN__50__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9658510163513481491ull);
    vlSelf->__Vfunc_pooling_MIN__50__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11365879814618785573ull);
    vlSelf->__Vfunc_pooling_MIN__50__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 8154292112267222332ull);
    vlSelf->__Vfunc_pooling_MIN__50__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 11530542281955689161ull);
    vlSelf->__Vfunc_pooling_MAX__51__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 4584024980120694611ull);
    vlSelf->__Vfunc_pooling_MAX__51__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17938908224676311115ull);
    vlSelf->__Vfunc_pooling_MAX__51__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3277099465272062425ull);
    vlSelf->__Vfunc_pooling_MAX__51__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4109562675317100958ull);
    vlSelf->__Vfunc_pooling_MAX__51__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 11178772607491174680ull);
    vlSelf->__Vfunc_pooling_MAX__51__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 18279315362618710668ull);
    VL_SCOPED_RAND_RESET_W(88, vlSelf->__Vfunc_pooling_fun__52__Vfuncout, __VscopeHash, 13257029608843786517ull);
    vlSelf->__Vfunc_pooling_SUM__53__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5495063733194127480ull);
    vlSelf->__Vfunc_pooling_SUM__53__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14645026222450230591ull);
    vlSelf->__Vfunc_pooling_SUM__53__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6457398873316080323ull);
    vlSelf->__Vfunc_pooling_SUM__53__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 7897063845322811200ull);
    vlSelf->__Vfunc_pooling_SUM__53__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5311147049557581600ull);
    vlSelf->__Vfunc_pooling_MIN__54__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2101475648538094513ull);
    vlSelf->__Vfunc_pooling_MIN__54__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4813612514889529560ull);
    vlSelf->__Vfunc_pooling_MIN__54__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11726576881385225411ull);
    vlSelf->__Vfunc_pooling_MIN__54__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 786961037160775088ull);
    vlSelf->__Vfunc_pooling_MIN__54__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 325862096475372357ull);
    vlSelf->__Vfunc_pooling_MIN__54__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2085648315644650910ull);
    vlSelf->__Vfunc_pooling_MAX__55__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 441596717729468696ull);
    vlSelf->__Vfunc_pooling_MAX__55__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18360259697230138663ull);
    vlSelf->__Vfunc_pooling_MAX__55__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2251264155047048393ull);
    vlSelf->__Vfunc_pooling_MAX__55__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16635506450082059572ull);
    vlSelf->__Vfunc_pooling_MAX__55__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16108553428546216700ull);
    vlSelf->__Vfunc_pooling_MAX__55__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 4426767872888740481ull);
    vlSelf->__Vfunc_pooling_SUM__56__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12063569877820788282ull);
    vlSelf->__Vfunc_pooling_SUM__56__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4555417539034271607ull);
    vlSelf->__Vfunc_pooling_SUM__56__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14418644461380597984ull);
    vlSelf->__Vfunc_pooling_SUM__56__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 8781222458775036774ull);
    vlSelf->__Vfunc_pooling_SUM__56__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2346651520712261898ull);
    vlSelf->__Vfunc_pooling_MIN__57__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2073764126424965127ull);
    vlSelf->__Vfunc_pooling_MIN__57__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13945608863251784183ull);
    vlSelf->__Vfunc_pooling_MIN__57__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17557985657293425323ull);
    vlSelf->__Vfunc_pooling_MIN__57__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14380829995787842073ull);
    vlSelf->__Vfunc_pooling_MIN__57__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 3784631264952477345ull);
    vlSelf->__Vfunc_pooling_MIN__57__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16494938782965401974ull);
    vlSelf->__Vfunc_pooling_MAX__58__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 18061692404542490034ull);
    vlSelf->__Vfunc_pooling_MAX__58__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17811266732982279835ull);
    vlSelf->__Vfunc_pooling_MAX__58__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1048892082323584221ull);
    vlSelf->__Vfunc_pooling_MAX__58__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14807085812164915288ull);
    vlSelf->__Vfunc_pooling_MAX__58__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2782285620256171759ull);
    vlSelf->__Vfunc_pooling_MAX__58__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17531223238745387337ull);
    vlSelf->__Vfunc_pooling_SUM__59__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 3742772223432636482ull);
    vlSelf->__Vfunc_pooling_SUM__59__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13030651866884648163ull);
    vlSelf->__Vfunc_pooling_SUM__59__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18276712786682487101ull);
    vlSelf->__Vfunc_pooling_SUM__59__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1910760018708093434ull);
    vlSelf->__Vfunc_pooling_SUM__59__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12540204810016255388ull);
    vlSelf->__Vfunc_pooling_MIN__60__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 883388590081016238ull);
    vlSelf->__Vfunc_pooling_MIN__60__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10507071057326778804ull);
    vlSelf->__Vfunc_pooling_MIN__60__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7216091095778841577ull);
    vlSelf->__Vfunc_pooling_MIN__60__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16556440146347910547ull);
    vlSelf->__Vfunc_pooling_MIN__60__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17002042397864742923ull);
    vlSelf->__Vfunc_pooling_MIN__60__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1306429325424545840ull);
    vlSelf->__Vfunc_pooling_MAX__61__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2789886651576614899ull);
    vlSelf->__Vfunc_pooling_MAX__61__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13564863357486337892ull);
    vlSelf->__Vfunc_pooling_MAX__61__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11015161138296731064ull);
    vlSelf->__Vfunc_pooling_MAX__61__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4577649775113644882ull);
    vlSelf->__Vfunc_pooling_MAX__61__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 9754215679750385937ull);
    vlSelf->__Vfunc_pooling_MAX__61__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5409059552373020420ull);
    vlSelf->__Vfunc_pooling_SUM__62__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 3843276914652185330ull);
    vlSelf->__Vfunc_pooling_SUM__62__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2326963360713480055ull);
    vlSelf->__Vfunc_pooling_SUM__62__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4310825140162943029ull);
    vlSelf->__Vfunc_pooling_SUM__62__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 9296565405085984556ull);
    vlSelf->__Vfunc_pooling_SUM__62__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16758315378697627249ull);
    vlSelf->__Vfunc_pooling_MIN__63__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 13828429340644220817ull);
    vlSelf->__Vfunc_pooling_MIN__63__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14505331920891742458ull);
    vlSelf->__Vfunc_pooling_MIN__63__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8290324226463966513ull);
    vlSelf->__Vfunc_pooling_MIN__63__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17399564441062599019ull);
    vlSelf->__Vfunc_pooling_MIN__63__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 11302260940593818230ull);
    vlSelf->__Vfunc_pooling_MIN__63__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 15193233344068369580ull);
    vlSelf->__Vfunc_pooling_MAX__64__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 245244203738517191ull);
    vlSelf->__Vfunc_pooling_MAX__64__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4301912154700167074ull);
    vlSelf->__Vfunc_pooling_MAX__64__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18435008286777817388ull);
    vlSelf->__Vfunc_pooling_MAX__64__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12880828698217948101ull);
    vlSelf->__Vfunc_pooling_MAX__64__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5954424413619863193ull);
    vlSelf->__Vfunc_pooling_MAX__64__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 15192692936945077248ull);
    VL_SCOPED_RAND_RESET_W(88, vlSelf->__Vfunc_pooling_fun__65__Vfuncout, __VscopeHash, 5388491875519618055ull);
    vlSelf->__Vfunc_pooling_SUM__66__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12825312194981287981ull);
    vlSelf->__Vfunc_pooling_SUM__66__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 654177231004327317ull);
    vlSelf->__Vfunc_pooling_SUM__66__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1106418361973780139ull);
    vlSelf->__Vfunc_pooling_SUM__66__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2282896540605374982ull);
    vlSelf->__Vfunc_pooling_SUM__66__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 542193718952555967ull);
    vlSelf->__Vfunc_pooling_MIN__67__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 8254697273719550360ull);
    vlSelf->__Vfunc_pooling_MIN__67__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10507877871137928221ull);
    vlSelf->__Vfunc_pooling_MIN__67__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5316088860970364575ull);
    vlSelf->__Vfunc_pooling_MIN__67__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15768814885713021882ull);
    vlSelf->__Vfunc_pooling_MIN__67__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10324345443084784401ull);
    vlSelf->__Vfunc_pooling_MIN__67__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2012750251219910251ull);
    vlSelf->__Vfunc_pooling_MAX__68__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1579110439761400152ull);
    vlSelf->__Vfunc_pooling_MAX__68__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14180637889114553486ull);
    vlSelf->__Vfunc_pooling_MAX__68__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2811139088288703061ull);
    vlSelf->__Vfunc_pooling_MAX__68__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13151761534376503796ull);
    vlSelf->__Vfunc_pooling_MAX__68__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 9507255242113343463ull);
    vlSelf->__Vfunc_pooling_MAX__68__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12036807299770317761ull);
    vlSelf->__Vfunc_pooling_SUM__69__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 14171923928465893096ull);
    vlSelf->__Vfunc_pooling_SUM__69__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6936355221437308251ull);
    vlSelf->__Vfunc_pooling_SUM__69__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9151381927202299658ull);
    vlSelf->__Vfunc_pooling_SUM__69__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10322871833014459736ull);
    vlSelf->__Vfunc_pooling_SUM__69__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 7674616128193822252ull);
    vlSelf->__Vfunc_pooling_MIN__70__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 15754952466738027967ull);
    vlSelf->__Vfunc_pooling_MIN__70__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8533264588010814712ull);
    vlSelf->__Vfunc_pooling_MIN__70__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13872577064596120833ull);
    vlSelf->__Vfunc_pooling_MIN__70__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17677369886161899474ull);
    vlSelf->__Vfunc_pooling_MIN__70__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10685148444188169026ull);
    vlSelf->__Vfunc_pooling_MIN__70__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12132603815330611660ull);
    vlSelf->__Vfunc_pooling_MAX__71__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 9974684915310955838ull);
    vlSelf->__Vfunc_pooling_MAX__71__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8982353762351419183ull);
    vlSelf->__Vfunc_pooling_MAX__71__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11814602365803068539ull);
    vlSelf->__Vfunc_pooling_MAX__71__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6099334853035268995ull);
    vlSelf->__Vfunc_pooling_MAX__71__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5603504209672935149ull);
    vlSelf->__Vfunc_pooling_MAX__71__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12251665530191282083ull);
    vlSelf->__Vfunc_pooling_SUM__72__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5763334203339162055ull);
    vlSelf->__Vfunc_pooling_SUM__72__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5656742368696559200ull);
    vlSelf->__Vfunc_pooling_SUM__72__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12086683136933570246ull);
    vlSelf->__Vfunc_pooling_SUM__72__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 9956253522828127813ull);
    vlSelf->__Vfunc_pooling_SUM__72__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2138954240426706413ull);
    vlSelf->__Vfunc_pooling_MIN__73__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 9481877308914901419ull);
    vlSelf->__Vfunc_pooling_MIN__73__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5446005578100994961ull);
    vlSelf->__Vfunc_pooling_MIN__73__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4638101564990527516ull);
    vlSelf->__Vfunc_pooling_MIN__73__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12079704313485651875ull);
    vlSelf->__Vfunc_pooling_MIN__73__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 8473868737379837100ull);
    vlSelf->__Vfunc_pooling_MIN__73__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 4556391678298447504ull);
    vlSelf->__Vfunc_pooling_MAX__74__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16576192827313016760ull);
    vlSelf->__Vfunc_pooling_MAX__74__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7911633070976164999ull);
    vlSelf->__Vfunc_pooling_MAX__74__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14741869384773806675ull);
    vlSelf->__Vfunc_pooling_MAX__74__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3656971144936636797ull);
    vlSelf->__Vfunc_pooling_MAX__74__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 11407303437500635375ull);
    vlSelf->__Vfunc_pooling_MAX__74__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 7965001839589980017ull);
    vlSelf->__Vfunc_pooling_SUM__75__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1619762004081493983ull);
    vlSelf->__Vfunc_pooling_SUM__75__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11905215886306531133ull);
    vlSelf->__Vfunc_pooling_SUM__75__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4760521915622300029ull);
    vlSelf->__Vfunc_pooling_SUM__75__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5911866520665273208ull);
    vlSelf->__Vfunc_pooling_SUM__75__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1599189219842028565ull);
    vlSelf->__Vfunc_pooling_MIN__76__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 6629516113438548670ull);
    vlSelf->__Vfunc_pooling_MIN__76__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15534014335048704223ull);
    vlSelf->__Vfunc_pooling_MIN__76__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2849767658135152506ull);
    vlSelf->__Vfunc_pooling_MIN__76__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6843422973601897819ull);
    vlSelf->__Vfunc_pooling_MIN__76__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5136705501372434024ull);
    vlSelf->__Vfunc_pooling_MIN__76__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 938561856180933375ull);
    vlSelf->__Vfunc_pooling_MAX__77__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 9574349832738858600ull);
    vlSelf->__Vfunc_pooling_MAX__77__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15809685240916328258ull);
    vlSelf->__Vfunc_pooling_MAX__77__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 720779848971871540ull);
    vlSelf->__Vfunc_pooling_MAX__77__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10238627676680077121ull);
    vlSelf->__Vfunc_pooling_MAX__77__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12063524758646129106ull);
    vlSelf->__Vfunc_pooling_MAX__77__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 13145639970548437436ull);
    VL_SCOPED_RAND_RESET_W(88, vlSelf->__Vfunc_pooling_fun__78__Vfuncout, __VscopeHash, 8177641785651163489ull);
    vlSelf->__Vfunc_pooling_SUM__79__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16735743301761084515ull);
    vlSelf->__Vfunc_pooling_SUM__79__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14552532027276132903ull);
    vlSelf->__Vfunc_pooling_SUM__79__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8629683152922642990ull);
    vlSelf->__Vfunc_pooling_SUM__79__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17188133844595155727ull);
    vlSelf->__Vfunc_pooling_SUM__79__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10278387445361599885ull);
    vlSelf->__Vfunc_pooling_MIN__80__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17935826934006377451ull);
    vlSelf->__Vfunc_pooling_MIN__80__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16307312240788250893ull);
    vlSelf->__Vfunc_pooling_MIN__80__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11015067783034470002ull);
    vlSelf->__Vfunc_pooling_MIN__80__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14198470946041777234ull);
    vlSelf->__Vfunc_pooling_MIN__80__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5889797882955666663ull);
    vlSelf->__Vfunc_pooling_MIN__80__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 7302903138568613035ull);
    vlSelf->__Vfunc_pooling_MAX__81__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 18303628600450349156ull);
    vlSelf->__Vfunc_pooling_MAX__81__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1957300610678702824ull);
    vlSelf->__Vfunc_pooling_MAX__81__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13018406473540962273ull);
    vlSelf->__Vfunc_pooling_MAX__81__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18167730203078351263ull);
    vlSelf->__Vfunc_pooling_MAX__81__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 4107258109518770955ull);
    vlSelf->__Vfunc_pooling_MAX__81__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5219129243585957963ull);
    vlSelf->__Vfunc_pooling_SUM__82__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 14502934834722189382ull);
    vlSelf->__Vfunc_pooling_SUM__82__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12724673211401233847ull);
    vlSelf->__Vfunc_pooling_SUM__82__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14808896133716750706ull);
    vlSelf->__Vfunc_pooling_SUM__82__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 13974146659402748218ull);
    vlSelf->__Vfunc_pooling_SUM__82__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 7182683485743636563ull);
    vlSelf->__Vfunc_pooling_MIN__83__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 630329660861387384ull);
    vlSelf->__Vfunc_pooling_MIN__83__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16810845659496784287ull);
    vlSelf->__Vfunc_pooling_MIN__83__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8758951623426435809ull);
    vlSelf->__Vfunc_pooling_MIN__83__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10600090520646348047ull);
    vlSelf->__Vfunc_pooling_MIN__83__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 3630572531358989085ull);
    vlSelf->__Vfunc_pooling_MIN__83__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 743525774384663593ull);
    vlSelf->__Vfunc_pooling_MAX__84__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1992386978952270727ull);
    vlSelf->__Vfunc_pooling_MAX__84__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10090688591398765373ull);
    vlSelf->__Vfunc_pooling_MAX__84__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7629708538370899150ull);
    vlSelf->__Vfunc_pooling_MAX__84__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12580895413386374676ull);
    vlSelf->__Vfunc_pooling_MAX__84__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 9287365957371676116ull);
    vlSelf->__Vfunc_pooling_MAX__84__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16395331860710988449ull);
    vlSelf->__Vfunc_pooling_SUM__85__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17659000294474294215ull);
    vlSelf->__Vfunc_pooling_SUM__85__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14587423514110740164ull);
    vlSelf->__Vfunc_pooling_SUM__85__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2734097697002978306ull);
    vlSelf->__Vfunc_pooling_SUM__85__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16594196843066758579ull);
    vlSelf->__Vfunc_pooling_SUM__85__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17984930383828893432ull);
    vlSelf->__Vfunc_pooling_MIN__86__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 4315940683412480087ull);
    vlSelf->__Vfunc_pooling_MIN__86__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10035479997880870945ull);
    vlSelf->__Vfunc_pooling_MIN__86__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10630505033395079240ull);
    vlSelf->__Vfunc_pooling_MIN__86__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16306012040813401767ull);
    vlSelf->__Vfunc_pooling_MIN__86__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2537205952714516305ull);
    vlSelf->__Vfunc_pooling_MIN__86__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5075166993117801819ull);
    vlSelf->__Vfunc_pooling_MAX__87__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 6109637034056879430ull);
    vlSelf->__Vfunc_pooling_MAX__87__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8976240845193016108ull);
    vlSelf->__Vfunc_pooling_MAX__87__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5951877979811894460ull);
    vlSelf->__Vfunc_pooling_MAX__87__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15013173583245050175ull);
    vlSelf->__Vfunc_pooling_MAX__87__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12237363103204577471ull);
    vlSelf->__Vfunc_pooling_MAX__87__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2525723298123488505ull);
    vlSelf->__Vfunc_pooling_SUM__88__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10123267354641318859ull);
    vlSelf->__Vfunc_pooling_SUM__88__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15950123323972723761ull);
    vlSelf->__Vfunc_pooling_SUM__88__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1409193759700422864ull);
    vlSelf->__Vfunc_pooling_SUM__88__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 6092919576625866203ull);
    vlSelf->__Vfunc_pooling_SUM__88__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12008494129033414809ull);
    vlSelf->__Vfunc_pooling_MIN__89__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 9811706027131013798ull);
    vlSelf->__Vfunc_pooling_MIN__89__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4849527101115085226ull);
    vlSelf->__Vfunc_pooling_MIN__89__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11647625063718137610ull);
    vlSelf->__Vfunc_pooling_MIN__89__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2045227568383496053ull);
    vlSelf->__Vfunc_pooling_MIN__89__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 11658984199437530233ull);
    vlSelf->__Vfunc_pooling_MIN__89__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12352044610442298850ull);
    vlSelf->__Vfunc_pooling_MAX__90__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1445663620113920099ull);
    vlSelf->__Vfunc_pooling_MAX__90__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11181917593568591281ull);
    vlSelf->__Vfunc_pooling_MAX__90__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15846221414065160314ull);
    vlSelf->__Vfunc_pooling_MAX__90__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18443265545715055833ull);
    vlSelf->__Vfunc_pooling_MAX__90__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 7535523806021465186ull);
    vlSelf->__Vfunc_pooling_MAX__90__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 6497549560099317885ull);
    VL_SCOPED_RAND_RESET_W(88, vlSelf->__Vfunc_pooling_fun__91__Vfuncout, __VscopeHash, 10611550850490231159ull);
    vlSelf->__Vfunc_pooling_SUM__92__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 3710521857716966089ull);
    vlSelf->__Vfunc_pooling_SUM__92__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2388872711614691295ull);
    vlSelf->__Vfunc_pooling_SUM__92__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9371500435960138524ull);
    vlSelf->__Vfunc_pooling_SUM__92__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 15989651464012148848ull);
    vlSelf->__Vfunc_pooling_SUM__92__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12994677744858923950ull);
    vlSelf->__Vfunc_pooling_MIN__93__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 3304205925526121991ull);
    vlSelf->__Vfunc_pooling_MIN__93__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6319440454610881479ull);
    vlSelf->__Vfunc_pooling_MIN__93__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17025559372263728184ull);
    vlSelf->__Vfunc_pooling_MIN__93__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14539571433037683161ull);
    vlSelf->__Vfunc_pooling_MIN__93__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 121818929845484199ull);
    vlSelf->__Vfunc_pooling_MIN__93__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10056417656121817568ull);
    vlSelf->__Vfunc_pooling_MAX__94__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12773265726851547858ull);
    vlSelf->__Vfunc_pooling_MAX__94__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12026546503221745337ull);
    vlSelf->__Vfunc_pooling_MAX__94__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12479280720300114107ull);
    vlSelf->__Vfunc_pooling_MAX__94__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9907491021202480337ull);
    vlSelf->__Vfunc_pooling_MAX__94__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1872281993632547571ull);
    vlSelf->__Vfunc_pooling_MAX__94__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 6736399346010481368ull);
    vlSelf->__Vfunc_pooling_SUM__95__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2145489996507326802ull);
    vlSelf->__Vfunc_pooling_SUM__95__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2480768579707455526ull);
    vlSelf->__Vfunc_pooling_SUM__95__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2803103153846568039ull);
    vlSelf->__Vfunc_pooling_SUM__95__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 13103227851233522669ull);
    vlSelf->__Vfunc_pooling_SUM__95__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 3825910858677279716ull);
    vlSelf->__Vfunc_pooling_MIN__96__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 15395280896391665787ull);
    vlSelf->__Vfunc_pooling_MIN__96__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3930194489263426307ull);
    vlSelf->__Vfunc_pooling_MIN__96__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3919937240796823780ull);
    vlSelf->__Vfunc_pooling_MIN__96__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17735109883203072760ull);
    vlSelf->__Vfunc_pooling_MIN__96__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 628223453462040610ull);
    vlSelf->__Vfunc_pooling_MIN__96__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1605662969743610038ull);
    vlSelf->__Vfunc_pooling_MAX__97__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 15083970520409411402ull);
    vlSelf->__Vfunc_pooling_MAX__97__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4500787023631580264ull);
    vlSelf->__Vfunc_pooling_MAX__97__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17565131591145295733ull);
    vlSelf->__Vfunc_pooling_MAX__97__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3287064262523748678ull);
    vlSelf->__Vfunc_pooling_MAX__97__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1359202880989550077ull);
    vlSelf->__Vfunc_pooling_MAX__97__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16275720517100009966ull);
    vlSelf->__Vfunc_pooling_SUM__98__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 9659477689629499412ull);
    vlSelf->__Vfunc_pooling_SUM__98__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9216463320201653021ull);
    vlSelf->__Vfunc_pooling_SUM__98__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15202832005043311977ull);
    vlSelf->__Vfunc_pooling_SUM__98__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10184824163060145515ull);
    vlSelf->__Vfunc_pooling_SUM__98__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10876400436145759988ull);
    vlSelf->__Vfunc_pooling_MIN__99__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16955418780424511264ull);
    vlSelf->__Vfunc_pooling_MIN__99__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12487072911751300192ull);
    vlSelf->__Vfunc_pooling_MIN__99__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12137379522708313736ull);
    vlSelf->__Vfunc_pooling_MIN__99__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 159395084755686124ull);
    vlSelf->__Vfunc_pooling_MIN__99__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 9293819273861412232ull);
    vlSelf->__Vfunc_pooling_MIN__99__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 3767723724183814910ull);
    vlSelf->__Vfunc_pooling_MAX__100__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17623137511747665477ull);
    vlSelf->__Vfunc_pooling_MAX__100__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18093390479850909911ull);
    vlSelf->__Vfunc_pooling_MAX__100__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 883357739480167921ull);
    vlSelf->__Vfunc_pooling_MAX__100__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8119444422419516431ull);
    vlSelf->__Vfunc_pooling_MAX__100__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 11274143286581711654ull);
    vlSelf->__Vfunc_pooling_MAX__100__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 9071946773846733023ull);
    vlSelf->__Vfunc_pooling_SUM__101__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 9406464395264674233ull);
    vlSelf->__Vfunc_pooling_SUM__101__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10267948258056449540ull);
    vlSelf->__Vfunc_pooling_SUM__101__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10262412306685171600ull);
    vlSelf->__Vfunc_pooling_SUM__101__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 9098561491779825644ull);
    vlSelf->__Vfunc_pooling_SUM__101__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 15554198407245438864ull);
    vlSelf->__Vfunc_pooling_MIN__102__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5536059149237567084ull);
    vlSelf->__Vfunc_pooling_MIN__102__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6566099051739809187ull);
    vlSelf->__Vfunc_pooling_MIN__102__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8031804417201800912ull);
    vlSelf->__Vfunc_pooling_MIN__102__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12887524947289177074ull);
    vlSelf->__Vfunc_pooling_MIN__102__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 4130047020577452924ull);
    vlSelf->__Vfunc_pooling_MIN__102__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10800760346539231927ull);
    vlSelf->__Vfunc_pooling_MAX__103__Vfuncout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 11249604419016484138ull);
    vlSelf->__Vfunc_pooling_MAX__103__reg2dp_int8_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2104769228506221513ull);
    vlSelf->__Vfunc_pooling_MAX__103__reg2dp_int16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16385696803651028313ull);
    vlSelf->__Vfunc_pooling_MAX__103__reg2dp_fp16_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17333328909327918488ull);
    vlSelf->__Vfunc_pooling_MAX__103__data0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 14180730405070151342ull);
    vlSelf->__Vfunc_pooling_MAX__103__data1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 15191816763154562172ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->__VdfgRegularize_h6e95ff9d_0_2997, __VscopeHash, 16574454267294551844ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->__VdfgRegularize_h6e95ff9d_0_3006, __VscopeHash, 14747286408776704672ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->__VdfgRegularize_h6e95ff9d_0_3014, __VscopeHash, 2131348536069603143ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->__VdfgRegularize_h6e95ff9d_0_3022, __VscopeHash, 5657790431924871803ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->__VdfgRegularize_h6e95ff9d_0_3030, __VscopeHash, 16672980938858137830ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->__VdfgRegularize_h6e95ff9d_0_3038, __VscopeHash, 7677425546266730246ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->__VdfgRegularize_h6e95ff9d_0_3046, __VscopeHash, 10898740129032243173ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->__VdfgRegularize_h6e95ff9d_0_3054, __VscopeHash, 10030960657080071198ull);
    VL_SCOPED_RAND_RESET_W(185, vlSelf->__Vdly__pipe_p4__DOT__p4_pipe_data, __VscopeHash, 2411020715424243019ull);
}

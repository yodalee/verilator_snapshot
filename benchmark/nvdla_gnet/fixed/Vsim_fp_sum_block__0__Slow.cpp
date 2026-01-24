// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_fp_sum_block___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0__0(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h1b022894_0_2;
    __VdfgRegularize_h1b022894_0_2 = 0;
    CData/*0:0*/ __VdfgRegularize_h1b022894_0_27;
    __VdfgRegularize_h1b022894_0_27 = 0;
    // Body
    vlSelfRef.__PVT__fp16_sum3 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__fp16_sum5 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__fp16_sum7 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.reg2dp_normalz_len = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_consumer)
                                     ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d1_normalz_len)
                                     : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d0_normalz_len));
    vlSelfRef.__PVT__fp16_sum_3_5_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__VdfgRegularize_h1b022894_0_16 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.__PVT__fp16_sum3_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum35_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                       & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum4_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum5_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__stage2_sum3_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__stage2_sum26_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum7_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__stage3_sum5_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__stage3_sum17_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__stage4_sum7_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__stage4_sum08_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__VdfgRegularize_h1b022894_0_13 = ((0U 
                                                  == (IData)(vlSelfRef.reg2dp_normalz_len)) 
                                                 | (1U 
                                                    == (IData)(vlSelfRef.reg2dp_normalz_len)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_0 = ((2U 
                                                 == (IData)(vlSelfRef.reg2dp_normalz_len)) 
                                                | (3U 
                                                   == (IData)(vlSelfRef.reg2dp_normalz_len)));
    __VdfgRegularize_h1b022894_0_27 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
                                       | (0U == (IData)(vlSelfRef.reg2dp_normalz_len)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_4 = ((3U 
                                                 != (IData)(vlSelfRef.reg2dp_normalz_len)) 
                                                | ((IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_17 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
                                                  << 2U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_16));
    vlSelfRef.__PVT__fp16_sum_stage1_vld = ((0U != (IData)(vlSelfRef.reg2dp_normalz_len)) 
                                            & ((IData)(vlSelfRef.__PVT__fp16_sum3_vld) 
                                               & (IData)(vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_8 = ((IData)(vlSelfRef.__PVT__fp16_sum35_rdy) 
                                                & (IData)(vlSelfRef.__PVT__fp16_sum4_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_24 = ((IData)(vlSelfRef.__PVT__stage2_sum26_rdy) 
                                                 & (IData)(vlSelfRef.__PVT__stage2_sum3_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_23 = ((IData)(vlSelfRef.__PVT__stage3_sum17_rdy) 
                                                 & (IData)(vlSelfRef.__PVT__stage3_sum5_rdy));
    vlSelfRef.__PVT__fp16_sum_stage3_rdy = ((IData)(vlSelfRef.__PVT__stage4_sum08_rdy) 
                                            & (IData)(vlSelfRef.__PVT__stage4_sum7_rdy));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2929 = (1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_13) 
                                                       | (2U 
                                                          == (IData)(vlSelfRef.reg2dp_normalz_len)))));
    vlSelfRef.__PVT__fp16_sum_stage2_vld = ((~ (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_13)) 
                                            & ((IData)(vlSelfRef.__PVT__fp16_sum5_vld) 
                                               & (IData)(vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_valid)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_28 = ((1U 
                                                  == (IData)(vlSelfRef.reg2dp_normalz_len)) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_0));
    __VdfgRegularize_h1b022894_0_2 = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_0)) 
                                            | ((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                               & (IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt))));
    vlSelfRef.__VdfgRegularize_h1b022894_0_25 = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_4) 
                                                 & (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid));
    vlSelfRef.__VdfgRegularize_h1b022894_0_18 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
                                                  << 3U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_17));
    vlSelfRef.__VdfgRegularize_h1b022894_0_12 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage1_vld) 
                                                 & (IData)(vlSelfRef.__PVT__stage2_sum3_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_11 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage1_vld) 
                                                 & (IData)(vlSelfRef.__PVT__stage2_sum26_rdy));
    vlSelfRef.__PVT__stage3_pipe_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p16__DOT__p16_pipe_valid)) 
                                               | ((3U 
                                                   != (IData)(vlSelfRef.reg2dp_normalz_len)) 
                                                  | ((IData)(vlSelfRef.__PVT__fp16_sum_stage3_rdy) 
                                                     & (IData)(vlSelfRef.__PVT__fp16_sum7_vld)))));
    vlSelfRef.__PVT__fp16_sum_stage3_vld = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2929) 
                                            & ((IData)(vlSelfRef.__PVT__fp16_sum7_vld) 
                                               & (IData)(vlSelfRef.__PVT__pipe_p16__DOT__p16_pipe_valid)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_15 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage2_vld) 
                                                 & (IData)(vlSelfRef.__PVT__stage3_sum5_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_14 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage2_vld) 
                                                 & (IData)(vlSelfRef.__PVT__stage3_sum17_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_1_0 = ((IData)(__VdfgRegularize_h1b022894_0_2) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_25));
    vlSelfRef.__PVT__stage2_pipe_in_vld = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_0) 
                                           & ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_11) 
                                              & (IData)(vlSelfRef.__PVT__stage2_sum3_rdy)));
    vlSelfRef.__PVT__stage3_pipe_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d3)));
    vlSelfRef.__PVT__stage3_pipe_in_vld = ((3U == (IData)(vlSelfRef.reg2dp_normalz_len)) 
                                           & ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_14) 
                                              & (IData)(vlSelfRef.__PVT__stage3_sum5_rdy)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_26 = ((IData)(__VdfgRegularize_h1b022894_0_27) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_1_0));
    vlSelfRef.__PVT__stage3_pipe_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d2)));
    vlSelfRef.__PVT__fp16_sum_stage0_vld = ((IData)(vlSelfRef.__PVT__fp16_sum_3_5_vld) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_26));
    vlSelfRef.__PVT__stage3_pipe_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d1)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_9 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage0_vld) 
                                                & (IData)(vlSelfRef.__PVT__fp16_sum4_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_10 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage0_vld) 
                                                 & (IData)(vlSelfRef.__PVT__fp16_sum35_rdy));
    vlSelfRef.__PVT__fp16_sum_stage2_rdy = ((3U == (IData)(vlSelfRef.reg2dp_normalz_len))
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_23) 
                                                & (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_23));
    vlSelfRef.__PVT__stage1_pipe_in_vld = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_28) 
                                           & ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_10) 
                                              & (IData)(vlSelfRef.__PVT__fp16_sum4_rdy)));
    vlSelfRef.__PVT__stage2_pipe_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_valid)) 
                                               | ((~ (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_0)) 
                                                  | ((IData)(vlSelfRef.__PVT__fp16_sum_stage2_rdy) 
                                                     & (IData)(vlSelfRef.__PVT__fp16_sum5_vld)))));
    vlSelfRef.__PVT__stage2_pipe_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d3)));
    vlSelfRef.__PVT__stage2_pipe_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d2)));
    vlSelfRef.__PVT__stage2_pipe_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d1)));
    vlSelfRef.__PVT__fp16_sum_stage1_rdy = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_0)
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_24) 
                                                & (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_24));
    vlSelfRef.__PVT__stage1_pipe_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid)) 
                                               | ((0U 
                                                   == (IData)(vlSelfRef.reg2dp_normalz_len)) 
                                                  | ((IData)(vlSelfRef.__PVT__fp16_sum_stage1_rdy) 
                                                     & (IData)(vlSelfRef.__PVT__fp16_sum3_vld)))));
    vlSelfRef.__PVT__stage1_pipe_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d3)));
    vlSelfRef.__PVT__stage1_pipe_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d2)));
    vlSelfRef.__PVT__stage1_pipe_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d1)));
    if ((0U == (IData)(vlSelfRef.reg2dp_normalz_len))) {
        vlSelfRef.fp16_sum = vlSelfRef.__PVT__fp16_sum3;
        vlSelfRef.fp16_sum_vld = vlSelfRef.__PVT__fp16_sum3_vld;
        vlSelfRef.__PVT__fp16_sum_stage0_rdy = vlSelfRef.__VdfgRegularize_h1b022894_0_8;
    } else {
        if ((1U == (IData)(vlSelfRef.reg2dp_normalz_len))) {
            vlSelfRef.fp16_sum = vlSelfRef.__PVT__fp16_sum5;
            vlSelfRef.fp16_sum_vld = vlSelfRef.__PVT__fp16_sum5_vld;
        } else if ((2U == (IData)(vlSelfRef.reg2dp_normalz_len))) {
            vlSelfRef.fp16_sum = vlSelfRef.__PVT__fp16_sum7;
            vlSelfRef.fp16_sum_vld = vlSelfRef.__PVT__fp16_sum7_vld;
        } else {
            vlSelfRef.fp16_sum = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
            vlSelfRef.fp16_sum_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
        }
        vlSelfRef.__PVT__fp16_sum_stage0_rdy = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_8) 
                                                & (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy));
    }
    vlSelfRef.__VdfgRegularize_h1b022894_0_5 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage0_rdy) 
                                                & (IData)(vlSelfRef.__PVT__fp16_sum_3_5_vld));
    vlSelfRef.__VdfgRegularize_h1b022894_0_6 = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_5) 
                                                & (IData)(__VdfgRegularize_h1b022894_0_27));
    vlSelfRef.__VdfgRegularize_h1b022894_0_7 = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_6) 
                                                & (IData)(__VdfgRegularize_h1b022894_0_2));
    vlSelfRef.__PVT__fp16_dout_4_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid)) 
                                               | ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_7) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_4))));
    vlSelfRef.__PVT__fp16_dout_4_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d3)));
    vlSelfRef.__PVT__fp16_dout_4_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d2)));
    vlSelfRef.__PVT__fp16_dout_4_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d1)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_19 = (((IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_18));
    vlSelfRef.__VdfgRegularize_h1b022894_0_20 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
                                                  << 5U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_19));
    vlSelfRef.__VdfgRegularize_h1b022894_0_21 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
                                                  << 6U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_20));
    vlSelfRef.__VdfgRegularize_h1b022894_0_22 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
                                                  << 7U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_21));
    vlSelfRef.__PVT__fp_sum_in_rdy = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                                       << 8U) | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_22));
}

VL_ATTR_COLD void Vsim_fp_sum_block___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0__1(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fp16_sum_rdy = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p2_pipe_rand_ready) 
                              & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_12));
    vlSelfRef.fp_sq_out_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_vld) 
                               & ((0x000001ffU == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__PVT__fp_sum_in_rdy)) 
                                  & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_35)));
    vlSelfRef.__PVT__fp16_dout_4_in_vld = ((IData)(vlSelfRef.fp_sq_out_vld) 
                                           & (0x0000000fU 
                                              == (((IData)(vlSelfRef.__PVT__fp_sum_in_rdy) 
                                                   >> 5U) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_18))));
}

VL_ATTR_COLD void Vsim_fp_sum_block___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__0(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h1b022894_0_2;
    __VdfgRegularize_h1b022894_0_2 = 0;
    CData/*0:0*/ __VdfgRegularize_h1b022894_0_27;
    __VdfgRegularize_h1b022894_0_27 = 0;
    // Body
    vlSelfRef.__PVT__fp16_sum3 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__fp16_sum5 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__fp16_sum7 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.fp16_dout_0 = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_1.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31) 
                              << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_1.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                  << 0x00000017U) 
                                                 | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_1.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__fp16_sum_3_5_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__VdfgRegularize_h1b022894_0_16 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.__PVT__fp16_sum3_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum35_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                       & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum4_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum5_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__stage2_sum3_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__stage2_sum26_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum7_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__stage3_sum5_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__stage3_sum17_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__stage4_sum7_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__stage4_sum08_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    __VdfgRegularize_h1b022894_0_27 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
                                       | (0U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_4 = ((3U 
                                                 != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len)) 
                                                | ((IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)));
    __VdfgRegularize_h1b022894_0_2 = (1U & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_0)) 
                                            | ((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                               & (IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt))));
    vlSelfRef.__VdfgRegularize_h1b022894_0_17 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
                                                  << 2U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_16));
    vlSelfRef.__PVT__fp16_sum_stage1_vld = ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len)) 
                                            & ((IData)(vlSelfRef.__PVT__fp16_sum3_vld) 
                                               & (IData)(vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_8 = ((IData)(vlSelfRef.__PVT__fp16_sum35_rdy) 
                                                & (IData)(vlSelfRef.__PVT__fp16_sum4_rdy));
    vlSelfRef.__PVT__fp16_sum_stage2_vld = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_13)) 
                                            & ((IData)(vlSelfRef.__PVT__fp16_sum5_vld) 
                                               & (IData)(vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_valid)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_24 = ((IData)(vlSelfRef.__PVT__stage2_sum26_rdy) 
                                                 & (IData)(vlSelfRef.__PVT__stage2_sum3_rdy));
    vlSelfRef.__PVT__fp16_sum_stage3_vld = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h6e95ff9d_0_2929) 
                                            & ((IData)(vlSelfRef.__PVT__fp16_sum7_vld) 
                                               & (IData)(vlSelfRef.__PVT__pipe_p16__DOT__p16_pipe_valid)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_23 = ((IData)(vlSelfRef.__PVT__stage3_sum17_rdy) 
                                                 & (IData)(vlSelfRef.__PVT__stage3_sum5_rdy));
    vlSelfRef.__PVT__fp16_sum_stage3_rdy = ((IData)(vlSelfRef.__PVT__stage4_sum08_rdy) 
                                            & (IData)(vlSelfRef.__PVT__stage4_sum7_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_25 = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_4) 
                                                 & (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid));
    vlSelfRef.__VdfgRegularize_h1b022894_0_18 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
                                                  << 3U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_17));
    vlSelfRef.__VdfgRegularize_h1b022894_0_12 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage1_vld) 
                                                 & (IData)(vlSelfRef.__PVT__stage2_sum3_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_11 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage1_vld) 
                                                 & (IData)(vlSelfRef.__PVT__stage2_sum26_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_15 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage2_vld) 
                                                 & (IData)(vlSelfRef.__PVT__stage3_sum5_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_14 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage2_vld) 
                                                 & (IData)(vlSelfRef.__PVT__stage3_sum17_rdy));
    vlSelfRef.__PVT__stage3_pipe_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p16__DOT__p16_pipe_valid)) 
                                               | ((3U 
                                                   != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len)) 
                                                  | ((IData)(vlSelfRef.__PVT__fp16_sum_stage3_rdy) 
                                                     & (IData)(vlSelfRef.__PVT__fp16_sum7_vld)))));
    vlSelfRef.__VdfgRegularize_h1b022894_1_0 = ((IData)(__VdfgRegularize_h1b022894_0_2) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_25));
    vlSelfRef.__PVT__stage2_pipe_in_vld = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_0) 
                                           & ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_11) 
                                              & (IData)(vlSelfRef.__PVT__stage2_sum3_rdy)));
    vlSelfRef.__PVT__stage3_pipe_in_vld = ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len)) 
                                           & ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_14) 
                                              & (IData)(vlSelfRef.__PVT__stage3_sum5_rdy)));
    vlSelfRef.__PVT__stage3_pipe_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d3)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_26 = ((IData)(__VdfgRegularize_h1b022894_0_27) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_1_0));
    vlSelfRef.__PVT__stage3_pipe_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d2)));
    vlSelfRef.__PVT__fp16_sum_stage0_vld = ((IData)(vlSelfRef.__PVT__fp16_sum_3_5_vld) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_26));
    vlSelfRef.__PVT__stage3_pipe_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d1)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_9 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage0_vld) 
                                                & (IData)(vlSelfRef.__PVT__fp16_sum4_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_10 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage0_vld) 
                                                 & (IData)(vlSelfRef.__PVT__fp16_sum35_rdy));
    vlSelfRef.__PVT__fp16_sum_stage2_rdy = ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_23) 
                                                & (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_23));
    vlSelfRef.__PVT__stage1_pipe_in_vld = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_28) 
                                           & ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_10) 
                                              & (IData)(vlSelfRef.__PVT__fp16_sum4_rdy)));
    vlSelfRef.__PVT__stage2_pipe_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_valid)) 
                                               | ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_0)) 
                                                  | ((IData)(vlSelfRef.__PVT__fp16_sum_stage2_rdy) 
                                                     & (IData)(vlSelfRef.__PVT__fp16_sum5_vld)))));
    vlSelfRef.__PVT__stage2_pipe_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d3)));
    vlSelfRef.__PVT__stage2_pipe_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d2)));
    vlSelfRef.__PVT__stage2_pipe_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d1)));
    vlSelfRef.__PVT__fp16_sum_stage1_rdy = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_0)
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_24) 
                                                & (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_24));
    vlSelfRef.__PVT__stage1_pipe_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid)) 
                                               | ((0U 
                                                   == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len)) 
                                                  | ((IData)(vlSelfRef.__PVT__fp16_sum_stage1_rdy) 
                                                     & (IData)(vlSelfRef.__PVT__fp16_sum3_vld)))));
    vlSelfRef.__PVT__stage1_pipe_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d3)));
    vlSelfRef.__PVT__stage1_pipe_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d2)));
    vlSelfRef.__PVT__stage1_pipe_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d1)));
    if ((0U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))) {
        vlSelfRef.fp16_sum = vlSelfRef.__PVT__fp16_sum3;
        vlSelfRef.fp16_sum_vld = vlSelfRef.__PVT__fp16_sum3_vld;
        vlSelfRef.__PVT__fp16_sum_stage0_rdy = vlSelfRef.__VdfgRegularize_h1b022894_0_8;
    } else {
        if ((1U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))) {
            vlSelfRef.fp16_sum = vlSelfRef.__PVT__fp16_sum5;
            vlSelfRef.fp16_sum_vld = vlSelfRef.__PVT__fp16_sum5_vld;
        } else if ((2U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))) {
            vlSelfRef.fp16_sum = vlSelfRef.__PVT__fp16_sum7;
            vlSelfRef.fp16_sum_vld = vlSelfRef.__PVT__fp16_sum7_vld;
        } else {
            vlSelfRef.fp16_sum = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
            vlSelfRef.fp16_sum_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
        }
        vlSelfRef.__PVT__fp16_sum_stage0_rdy = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_8) 
                                                & (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy));
    }
    vlSelfRef.__VdfgRegularize_h1b022894_0_5 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage0_rdy) 
                                                & (IData)(vlSelfRef.__PVT__fp16_sum_3_5_vld));
    vlSelfRef.__VdfgRegularize_h1b022894_0_6 = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_5) 
                                                & (IData)(__VdfgRegularize_h1b022894_0_27));
    vlSelfRef.__VdfgRegularize_h1b022894_0_7 = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_6) 
                                                & (IData)(__VdfgRegularize_h1b022894_0_2));
    vlSelfRef.__PVT__fp16_dout_4_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid)) 
                                               | ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_7) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_4))));
    vlSelfRef.__PVT__fp16_dout_4_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d3)));
    vlSelfRef.__PVT__fp16_dout_4_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d2)));
    vlSelfRef.__PVT__fp16_dout_4_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d1)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_19 = (((IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_18));
    vlSelfRef.__VdfgRegularize_h1b022894_0_20 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
                                                  << 5U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_19));
    vlSelfRef.__VdfgRegularize_h1b022894_0_21 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
                                                  << 6U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_20));
    vlSelfRef.__VdfgRegularize_h1b022894_0_22 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
                                                  << 7U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_21));
    vlSelfRef.__PVT__fp_sum_in_rdy = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                                       << 8U) | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_22));
}

VL_ATTR_COLD void Vsim_fp_sum_block___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__1(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fp16_sum_rdy = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p2_pipe_rand_ready) 
                              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_34) 
                                 & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.fp16_sum_vld)));
    vlSelfRef.fp_sq_out_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_vld) 
                               & ((0x000001ffU == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__PVT__fp_sum_in_rdy)) 
                                  & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_35)));
    vlSelfRef.__PVT__fp16_dout_4_in_vld = ((IData)(vlSelfRef.fp_sq_out_vld) 
                                           & (0x0000000fU 
                                              == (((IData)(vlSelfRef.__PVT__fp_sum_in_rdy) 
                                                   >> 5U) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_18))));
}

VL_ATTR_COLD void Vsim_fp_sum_block___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__0(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h1b022894_0_2;
    __VdfgRegularize_h1b022894_0_2 = 0;
    CData/*0:0*/ __VdfgRegularize_h1b022894_0_27;
    __VdfgRegularize_h1b022894_0_27 = 0;
    // Body
    vlSelfRef.__PVT__fp16_sum3 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__fp16_sum5 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__fp16_sum7 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.fp16_dout_0 = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_2.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31) 
                              << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_2.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                  << 0x00000017U) 
                                                 | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_2.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__fp16_sum_3_5_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__VdfgRegularize_h1b022894_0_16 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.__PVT__fp16_sum3_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum35_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                       & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum4_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum5_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__stage2_sum3_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__stage2_sum26_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum7_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__stage3_sum5_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__stage3_sum17_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__stage4_sum7_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__stage4_sum08_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    __VdfgRegularize_h1b022894_0_27 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
                                       | (0U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_4 = ((3U 
                                                 != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len)) 
                                                | ((IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)));
    __VdfgRegularize_h1b022894_0_2 = (1U & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_0)) 
                                            | ((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                               & (IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt))));
    vlSelfRef.__VdfgRegularize_h1b022894_0_17 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
                                                  << 2U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_16));
    vlSelfRef.__PVT__fp16_sum_stage1_vld = ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len)) 
                                            & ((IData)(vlSelfRef.__PVT__fp16_sum3_vld) 
                                               & (IData)(vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_8 = ((IData)(vlSelfRef.__PVT__fp16_sum35_rdy) 
                                                & (IData)(vlSelfRef.__PVT__fp16_sum4_rdy));
    vlSelfRef.__PVT__fp16_sum_stage2_vld = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_13)) 
                                            & ((IData)(vlSelfRef.__PVT__fp16_sum5_vld) 
                                               & (IData)(vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_valid)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_24 = ((IData)(vlSelfRef.__PVT__stage2_sum26_rdy) 
                                                 & (IData)(vlSelfRef.__PVT__stage2_sum3_rdy));
    vlSelfRef.__PVT__fp16_sum_stage3_vld = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h6e95ff9d_0_2929) 
                                            & ((IData)(vlSelfRef.__PVT__fp16_sum7_vld) 
                                               & (IData)(vlSelfRef.__PVT__pipe_p16__DOT__p16_pipe_valid)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_23 = ((IData)(vlSelfRef.__PVT__stage3_sum17_rdy) 
                                                 & (IData)(vlSelfRef.__PVT__stage3_sum5_rdy));
    vlSelfRef.__PVT__fp16_sum_stage3_rdy = ((IData)(vlSelfRef.__PVT__stage4_sum08_rdy) 
                                            & (IData)(vlSelfRef.__PVT__stage4_sum7_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_25 = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_4) 
                                                 & (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid));
    vlSelfRef.__VdfgRegularize_h1b022894_0_18 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
                                                  << 3U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_17));
    vlSelfRef.__VdfgRegularize_h1b022894_0_12 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage1_vld) 
                                                 & (IData)(vlSelfRef.__PVT__stage2_sum3_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_11 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage1_vld) 
                                                 & (IData)(vlSelfRef.__PVT__stage2_sum26_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_15 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage2_vld) 
                                                 & (IData)(vlSelfRef.__PVT__stage3_sum5_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_14 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage2_vld) 
                                                 & (IData)(vlSelfRef.__PVT__stage3_sum17_rdy));
    vlSelfRef.__PVT__stage3_pipe_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p16__DOT__p16_pipe_valid)) 
                                               | ((3U 
                                                   != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len)) 
                                                  | ((IData)(vlSelfRef.__PVT__fp16_sum_stage3_rdy) 
                                                     & (IData)(vlSelfRef.__PVT__fp16_sum7_vld)))));
    vlSelfRef.__VdfgRegularize_h1b022894_1_0 = ((IData)(__VdfgRegularize_h1b022894_0_2) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_25));
    vlSelfRef.__PVT__stage2_pipe_in_vld = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_0) 
                                           & ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_11) 
                                              & (IData)(vlSelfRef.__PVT__stage2_sum3_rdy)));
    vlSelfRef.__PVT__stage3_pipe_in_vld = ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len)) 
                                           & ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_14) 
                                              & (IData)(vlSelfRef.__PVT__stage3_sum5_rdy)));
    vlSelfRef.__PVT__stage3_pipe_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d3)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_26 = ((IData)(__VdfgRegularize_h1b022894_0_27) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_1_0));
    vlSelfRef.__PVT__stage3_pipe_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d2)));
    vlSelfRef.__PVT__fp16_sum_stage0_vld = ((IData)(vlSelfRef.__PVT__fp16_sum_3_5_vld) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_26));
    vlSelfRef.__PVT__stage3_pipe_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d1)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_9 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage0_vld) 
                                                & (IData)(vlSelfRef.__PVT__fp16_sum4_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_10 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage0_vld) 
                                                 & (IData)(vlSelfRef.__PVT__fp16_sum35_rdy));
    vlSelfRef.__PVT__fp16_sum_stage2_rdy = ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_23) 
                                                & (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_23));
    vlSelfRef.__PVT__stage1_pipe_in_vld = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_28) 
                                           & ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_10) 
                                              & (IData)(vlSelfRef.__PVT__fp16_sum4_rdy)));
    vlSelfRef.__PVT__stage2_pipe_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_valid)) 
                                               | ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_0)) 
                                                  | ((IData)(vlSelfRef.__PVT__fp16_sum_stage2_rdy) 
                                                     & (IData)(vlSelfRef.__PVT__fp16_sum5_vld)))));
    vlSelfRef.__PVT__stage2_pipe_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d3)));
    vlSelfRef.__PVT__stage2_pipe_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d2)));
    vlSelfRef.__PVT__stage2_pipe_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d1)));
    vlSelfRef.__PVT__fp16_sum_stage1_rdy = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_0)
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_24) 
                                                & (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_24));
    vlSelfRef.__PVT__stage1_pipe_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid)) 
                                               | ((0U 
                                                   == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len)) 
                                                  | ((IData)(vlSelfRef.__PVT__fp16_sum_stage1_rdy) 
                                                     & (IData)(vlSelfRef.__PVT__fp16_sum3_vld)))));
    vlSelfRef.__PVT__stage1_pipe_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d3)));
    vlSelfRef.__PVT__stage1_pipe_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d2)));
    vlSelfRef.__PVT__stage1_pipe_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d1)));
    if ((0U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))) {
        vlSelfRef.fp16_sum = vlSelfRef.__PVT__fp16_sum3;
        vlSelfRef.fp16_sum_vld = vlSelfRef.__PVT__fp16_sum3_vld;
        vlSelfRef.__PVT__fp16_sum_stage0_rdy = vlSelfRef.__VdfgRegularize_h1b022894_0_8;
    } else {
        if ((1U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))) {
            vlSelfRef.fp16_sum = vlSelfRef.__PVT__fp16_sum5;
            vlSelfRef.fp16_sum_vld = vlSelfRef.__PVT__fp16_sum5_vld;
        } else if ((2U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))) {
            vlSelfRef.fp16_sum = vlSelfRef.__PVT__fp16_sum7;
            vlSelfRef.fp16_sum_vld = vlSelfRef.__PVT__fp16_sum7_vld;
        } else {
            vlSelfRef.fp16_sum = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
            vlSelfRef.fp16_sum_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
        }
        vlSelfRef.__PVT__fp16_sum_stage0_rdy = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_8) 
                                                & (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy));
    }
    vlSelfRef.__VdfgRegularize_h1b022894_0_5 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage0_rdy) 
                                                & (IData)(vlSelfRef.__PVT__fp16_sum_3_5_vld));
    vlSelfRef.__VdfgRegularize_h1b022894_0_6 = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_5) 
                                                & (IData)(__VdfgRegularize_h1b022894_0_27));
    vlSelfRef.__VdfgRegularize_h1b022894_0_7 = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_6) 
                                                & (IData)(__VdfgRegularize_h1b022894_0_2));
    vlSelfRef.__PVT__fp16_dout_4_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid)) 
                                               | ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_7) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_4))));
    vlSelfRef.__PVT__fp16_dout_4_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d3)));
    vlSelfRef.__PVT__fp16_dout_4_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d2)));
    vlSelfRef.__PVT__fp16_dout_4_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d1)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_19 = (((IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_18));
    vlSelfRef.__VdfgRegularize_h1b022894_0_20 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
                                                  << 5U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_19));
    vlSelfRef.__VdfgRegularize_h1b022894_0_21 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
                                                  << 6U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_20));
    vlSelfRef.__VdfgRegularize_h1b022894_0_22 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
                                                  << 7U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_21));
    vlSelfRef.__PVT__fp_sum_in_rdy = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                                       << 8U) | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_22));
}

VL_ATTR_COLD void Vsim_fp_sum_block___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__1(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fp16_sum_rdy = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p2_pipe_rand_ready) 
                              & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.fp16_sum_vld) 
                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_33)));
    vlSelfRef.fp_sq_out_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_vld) 
                               & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_10) 
                                  & (0x000001ffU == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__PVT__fp_sum_in_rdy))));
    vlSelfRef.__PVT__fp16_dout_4_in_vld = ((IData)(vlSelfRef.fp_sq_out_vld) 
                                           & (0x0000000fU 
                                              == (((IData)(vlSelfRef.__PVT__fp_sum_in_rdy) 
                                                   >> 5U) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_18))));
}

VL_ATTR_COLD void Vsim_fp_sum_block___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__0(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h1b022894_0_2;
    __VdfgRegularize_h1b022894_0_2 = 0;
    CData/*0:0*/ __VdfgRegularize_h1b022894_0_27;
    __VdfgRegularize_h1b022894_0_27 = 0;
    // Body
    vlSelfRef.__PVT__fp16_sum3 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__fp16_sum5 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__fp16_sum7 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.fp16_dout_7 = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_10.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31) 
                              << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_10.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                  << 0x00000017U) 
                                                 | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_10.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.fp16_dout_4 = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_7.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31) 
                              << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_7.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                  << 0x00000017U) 
                                                 | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_7.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.fp16_dout_6 = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_9.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31) 
                              << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_9.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                  << 0x00000017U) 
                                                 | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_9.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.fp16_dout_3 = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_6.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31) 
                              << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_6.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                  << 0x00000017U) 
                                                 | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_6.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.fp16_dout_2 = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_5.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31) 
                              << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_5.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                  << 0x00000017U) 
                                                 | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_5.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.fp16_dout_1 = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_4.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31) 
                              << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_4.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                  << 0x00000017U) 
                                                 | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_4.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.fp16_dout_5 = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_8.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31) 
                              << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_8.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                  << 0x00000017U) 
                                                 | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_8.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.fp16_dout_0 = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_3.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31) 
                              << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_3.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                  << 0x00000017U) 
                                                 | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_3.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__fp16_sum_3_5_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__VdfgRegularize_h1b022894_0_16 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.__PVT__fp16_sum3_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum35_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                       & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum4_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum5_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__stage2_sum3_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__stage2_sum26_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum7_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__stage3_sum5_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__stage3_sum17_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__stage4_sum7_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__stage4_sum08_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    __VdfgRegularize_h1b022894_0_27 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
                                       | (0U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_4 = ((3U 
                                                 != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len)) 
                                                | ((IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)));
    __VdfgRegularize_h1b022894_0_2 = (1U & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_0)) 
                                            | ((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                               & (IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt))));
    vlSelfRef.__VdfgRegularize_h1b022894_0_17 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
                                                  << 2U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_16));
    vlSelfRef.__PVT__fp16_sum_stage1_vld = ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len)) 
                                            & ((IData)(vlSelfRef.__PVT__fp16_sum3_vld) 
                                               & (IData)(vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_8 = ((IData)(vlSelfRef.__PVT__fp16_sum35_rdy) 
                                                & (IData)(vlSelfRef.__PVT__fp16_sum4_rdy));
    vlSelfRef.__PVT__fp16_sum_stage2_vld = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_13)) 
                                            & ((IData)(vlSelfRef.__PVT__fp16_sum5_vld) 
                                               & (IData)(vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_valid)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_24 = ((IData)(vlSelfRef.__PVT__stage2_sum26_rdy) 
                                                 & (IData)(vlSelfRef.__PVT__stage2_sum3_rdy));
    vlSelfRef.__PVT__fp16_sum_stage3_vld = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h6e95ff9d_0_2929) 
                                            & ((IData)(vlSelfRef.__PVT__fp16_sum7_vld) 
                                               & (IData)(vlSelfRef.__PVT__pipe_p16__DOT__p16_pipe_valid)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_23 = ((IData)(vlSelfRef.__PVT__stage3_sum17_rdy) 
                                                 & (IData)(vlSelfRef.__PVT__stage3_sum5_rdy));
    vlSelfRef.__PVT__fp16_sum_stage3_rdy = ((IData)(vlSelfRef.__PVT__stage4_sum08_rdy) 
                                            & (IData)(vlSelfRef.__PVT__stage4_sum7_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_25 = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_4) 
                                                 & (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid));
    vlSelfRef.__VdfgRegularize_h1b022894_0_18 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
                                                  << 3U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_17));
    vlSelfRef.__VdfgRegularize_h1b022894_0_12 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage1_vld) 
                                                 & (IData)(vlSelfRef.__PVT__stage2_sum3_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_11 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage1_vld) 
                                                 & (IData)(vlSelfRef.__PVT__stage2_sum26_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_15 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage2_vld) 
                                                 & (IData)(vlSelfRef.__PVT__stage3_sum5_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_14 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage2_vld) 
                                                 & (IData)(vlSelfRef.__PVT__stage3_sum17_rdy));
    vlSelfRef.__PVT__stage3_pipe_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p16__DOT__p16_pipe_valid)) 
                                               | ((3U 
                                                   != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len)) 
                                                  | ((IData)(vlSelfRef.__PVT__fp16_sum_stage3_rdy) 
                                                     & (IData)(vlSelfRef.__PVT__fp16_sum7_vld)))));
    vlSelfRef.__VdfgRegularize_h1b022894_1_0 = ((IData)(__VdfgRegularize_h1b022894_0_2) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_25));
    vlSelfRef.__PVT__stage2_pipe_in_vld = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_0) 
                                           & ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_11) 
                                              & (IData)(vlSelfRef.__PVT__stage2_sum3_rdy)));
    vlSelfRef.__PVT__stage3_pipe_in_vld = ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len)) 
                                           & ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_14) 
                                              & (IData)(vlSelfRef.__PVT__stage3_sum5_rdy)));
    vlSelfRef.__PVT__stage3_pipe_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d3)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_26 = ((IData)(__VdfgRegularize_h1b022894_0_27) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_1_0));
    vlSelfRef.__PVT__stage3_pipe_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d2)));
    vlSelfRef.__PVT__fp16_sum_stage0_vld = ((IData)(vlSelfRef.__PVT__fp16_sum_3_5_vld) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_26));
    vlSelfRef.__PVT__stage3_pipe_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d1)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_9 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage0_vld) 
                                                & (IData)(vlSelfRef.__PVT__fp16_sum4_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_10 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage0_vld) 
                                                 & (IData)(vlSelfRef.__PVT__fp16_sum35_rdy));
    vlSelfRef.__PVT__fp16_sum_stage2_rdy = ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_23) 
                                                & (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_23));
    vlSelfRef.__PVT__stage1_pipe_in_vld = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_28) 
                                           & ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_10) 
                                              & (IData)(vlSelfRef.__PVT__fp16_sum4_rdy)));
    vlSelfRef.__PVT__stage2_pipe_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_valid)) 
                                               | ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_0)) 
                                                  | ((IData)(vlSelfRef.__PVT__fp16_sum_stage2_rdy) 
                                                     & (IData)(vlSelfRef.__PVT__fp16_sum5_vld)))));
    vlSelfRef.__PVT__stage2_pipe_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d3)));
    vlSelfRef.__PVT__stage2_pipe_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d2)));
    vlSelfRef.__PVT__stage2_pipe_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d1)));
    vlSelfRef.__PVT__fp16_sum_stage1_rdy = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_0)
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_24) 
                                                & (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_24));
    vlSelfRef.__PVT__stage1_pipe_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid)) 
                                               | ((0U 
                                                   == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len)) 
                                                  | ((IData)(vlSelfRef.__PVT__fp16_sum_stage1_rdy) 
                                                     & (IData)(vlSelfRef.__PVT__fp16_sum3_vld)))));
    vlSelfRef.__PVT__stage1_pipe_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d3)));
    vlSelfRef.__PVT__stage1_pipe_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d2)));
    vlSelfRef.__PVT__stage1_pipe_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d1)));
    if ((0U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))) {
        vlSelfRef.fp16_sum = vlSelfRef.__PVT__fp16_sum3;
        vlSelfRef.fp16_sum_vld = vlSelfRef.__PVT__fp16_sum3_vld;
        vlSelfRef.__PVT__fp16_sum_stage0_rdy = vlSelfRef.__VdfgRegularize_h1b022894_0_8;
    } else {
        if ((1U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))) {
            vlSelfRef.fp16_sum = vlSelfRef.__PVT__fp16_sum5;
            vlSelfRef.fp16_sum_vld = vlSelfRef.__PVT__fp16_sum5_vld;
        } else if ((2U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))) {
            vlSelfRef.fp16_sum = vlSelfRef.__PVT__fp16_sum7;
            vlSelfRef.fp16_sum_vld = vlSelfRef.__PVT__fp16_sum7_vld;
        } else {
            vlSelfRef.fp16_sum = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
            vlSelfRef.fp16_sum_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
        }
        vlSelfRef.__PVT__fp16_sum_stage0_rdy = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_8) 
                                                & (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy));
    }
    vlSelfRef.__VdfgRegularize_h1b022894_0_5 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage0_rdy) 
                                                & (IData)(vlSelfRef.__PVT__fp16_sum_3_5_vld));
    vlSelfRef.__VdfgRegularize_h1b022894_0_6 = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_5) 
                                                & (IData)(__VdfgRegularize_h1b022894_0_27));
    vlSelfRef.__VdfgRegularize_h1b022894_0_7 = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_6) 
                                                & (IData)(__VdfgRegularize_h1b022894_0_2));
    vlSelfRef.__PVT__fp16_dout_4_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid)) 
                                               | ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_7) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_4))));
    vlSelfRef.__PVT__fp16_dout_4_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d3)));
    vlSelfRef.__PVT__fp16_dout_4_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d2)));
    vlSelfRef.__PVT__fp16_dout_4_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d1)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_19 = (((IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_18));
    vlSelfRef.__VdfgRegularize_h1b022894_0_20 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
                                                  << 5U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_19));
    vlSelfRef.__VdfgRegularize_h1b022894_0_21 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
                                                  << 6U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_20));
    vlSelfRef.__VdfgRegularize_h1b022894_0_22 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
                                                  << 7U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_21));
    vlSelfRef.__PVT__fp_sum_in_rdy = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                                       << 8U) | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_22));
}

VL_ATTR_COLD void Vsim_fp_sum_block___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__1(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fp16_sum_rdy = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p2_pipe_rand_ready) 
                              & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.fp16_sum_vld) 
                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_33)));
    vlSelfRef.fp_sq_out_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_vld) 
                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_11));
    vlSelfRef.__PVT__fp16_dout_4_in_vld = ((IData)(vlSelfRef.fp_sq_out_vld) 
                                           & (0x0000000fU 
                                              == (((IData)(vlSelfRef.__PVT__fp_sum_in_rdy) 
                                                   >> 5U) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_18))));
}

VL_ATTR_COLD void Vsim_fp_sum_block___ctor_var_reset(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->fp16_dout_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7532773275397910734ull);
    vlSelf->fp16_dout_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6080259407595347432ull);
    vlSelf->fp16_dout_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14959883957604826998ull);
    vlSelf->fp16_dout_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17655772325604877755ull);
    vlSelf->fp16_dout_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13841010903751268798ull);
    vlSelf->fp16_dout_5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10204089439513545273ull);
    vlSelf->fp16_dout_6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6280976853648640976ull);
    vlSelf->fp16_dout_7 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2653243776140182806ull);
    vlSelf->fp16_dout_8 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1637312926534434686ull);
    vlSelf->fp16_sum_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9966896164484843399ull);
    vlSelf->fp_sq_out_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4039072493003733140ull);
    vlSelf->len3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11419560258667141000ull);
    vlSelf->len5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7258187481218659829ull);
    vlSelf->len7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10134153510910617590ull);
    vlSelf->len9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4967512160155358806ull);
    vlSelf->nvdla_core_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13795098205236914507ull);
    vlSelf->nvdla_core_rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15781730201853965120ull);
    vlSelf->reg2dp_normalz_len = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 600231151103899357ull);
    vlSelf->fp16_sum = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2865953911726984215ull);
    vlSelf->fp16_sum_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9531160758268305108ull);
    vlSelf->fp_sq_out_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8086469438973701571ull);
    vlSelf->__PVT__fp16_dout_4_in_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11259008808006679457ull);
    vlSelf->__PVT__fp16_dout_4_in_rdy_d1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11880523595550274780ull);
    vlSelf->__PVT__fp16_dout_4_in_rdy_d2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11838642949024957502ull);
    vlSelf->__PVT__fp16_dout_4_in_rdy_d3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17253187100223116507ull);
    vlSelf->__PVT__fp16_dout_4_in_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17661571818716805819ull);
    vlSelf->__PVT__fp16_sum3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7053871544608276298ull);
    vlSelf->__PVT__fp16_sum35_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7309523029141390155ull);
    vlSelf->__PVT__fp16_sum3_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3709373430128459419ull);
    vlSelf->__PVT__fp16_sum4_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3300926903171600906ull);
    vlSelf->__PVT__fp16_sum5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9335555191599410628ull);
    vlSelf->__PVT__fp16_sum5_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9936133805662564299ull);
    vlSelf->__PVT__fp16_sum7 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9718923138647616512ull);
    vlSelf->__PVT__fp16_sum7_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1392133625535632451ull);
    vlSelf->__PVT__fp16_sum_3_5_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8362871658131541669ull);
    vlSelf->__PVT__fp16_sum_stage0_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1670851168013941128ull);
    vlSelf->__PVT__fp16_sum_stage0_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14998531247090841371ull);
    vlSelf->__PVT__fp16_sum_stage1_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7109702340301054798ull);
    vlSelf->__PVT__fp16_sum_stage1_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17404788513707747437ull);
    vlSelf->__PVT__fp16_sum_stage2_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15142987686188030734ull);
    vlSelf->__PVT__fp16_sum_stage2_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14783381714054250880ull);
    vlSelf->__PVT__fp16_sum_stage3_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15538688946617695782ull);
    vlSelf->__PVT__fp16_sum_stage3_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1412765254326448577ull);
    vlSelf->__PVT__fp_sum_in_rdy = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15050717391885653363ull);
    vlSelf->__PVT__stage1_pipe_in_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15519184797184052399ull);
    vlSelf->__PVT__stage1_pipe_in_rdy_d1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2883638896329271885ull);
    vlSelf->__PVT__stage1_pipe_in_rdy_d2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9550339949254081963ull);
    vlSelf->__PVT__stage1_pipe_in_rdy_d3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12023722176656365205ull);
    vlSelf->__PVT__stage1_pipe_in_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6776673008248488054ull);
    vlSelf->__PVT__stage2_pipe_in_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16987448622525408646ull);
    vlSelf->__PVT__stage2_pipe_in_rdy_d1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8070902640402898255ull);
    vlSelf->__PVT__stage2_pipe_in_rdy_d2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13159757565312800561ull);
    vlSelf->__PVT__stage2_pipe_in_rdy_d3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14840820744342596366ull);
    vlSelf->__PVT__stage2_pipe_in_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2331853551114285901ull);
    vlSelf->__PVT__stage2_sum26_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11977354511249103863ull);
    vlSelf->__PVT__stage2_sum3_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12205366444217987176ull);
    vlSelf->__PVT__stage3_pipe_in_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7087258715795280408ull);
    vlSelf->__PVT__stage3_pipe_in_rdy_d1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7941127483828482318ull);
    vlSelf->__PVT__stage3_pipe_in_rdy_d2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15918353567131124849ull);
    vlSelf->__PVT__stage3_pipe_in_rdy_d3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 521726377275696404ull);
    vlSelf->__PVT__stage3_pipe_in_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11777793551814533801ull);
    vlSelf->__PVT__stage3_sum17_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10327194359945249669ull);
    vlSelf->__PVT__stage3_sum5_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5028756838869184056ull);
    vlSelf->__PVT__stage4_sum08_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17447530430874304378ull);
    vlSelf->__PVT__stage4_sum7_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2890878440162944013ull);
    vlSelf->__VdfgRegularize_h1b022894_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17069353699156025576ull);
    vlSelf->__VdfgRegularize_h1b022894_0_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5894846813563345036ull);
    vlSelf->__VdfgRegularize_h1b022894_0_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16326531463252636502ull);
    vlSelf->__VdfgRegularize_h1b022894_0_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8590654487423206767ull);
    vlSelf->__VdfgRegularize_h1b022894_0_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18378664933345985490ull);
    vlSelf->__VdfgRegularize_h1b022894_0_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5967056344986400724ull);
    vlSelf->__VdfgRegularize_h1b022894_0_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1812170101455512258ull);
    vlSelf->__VdfgRegularize_h1b022894_0_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12225458218165660711ull);
    vlSelf->__VdfgRegularize_h1b022894_0_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3127059990830057329ull);
    vlSelf->__VdfgRegularize_h1b022894_0_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6319611670887774655ull);
    vlSelf->__VdfgRegularize_h1b022894_0_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 197297340716994407ull);
    vlSelf->__VdfgRegularize_h1b022894_0_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18190224626957778125ull);
    vlSelf->__VdfgRegularize_h1b022894_0_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13242455126550717695ull);
    vlSelf->__VdfgRegularize_h1b022894_0_16 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15155220868278903732ull);
    vlSelf->__VdfgRegularize_h1b022894_0_17 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3730562168631934813ull);
    vlSelf->__VdfgRegularize_h1b022894_0_18 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16459382770233016498ull);
    vlSelf->__VdfgRegularize_h1b022894_0_19 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3965420349388330426ull);
    vlSelf->__VdfgRegularize_h1b022894_0_20 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14341608310762160426ull);
    vlSelf->__VdfgRegularize_h1b022894_0_21 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10798726768628410194ull);
    vlSelf->__VdfgRegularize_h1b022894_0_22 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9735408613191510463ull);
    vlSelf->__VdfgRegularize_h1b022894_0_23 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15477708048924705368ull);
    vlSelf->__VdfgRegularize_h1b022894_0_24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8188588637924562842ull);
    vlSelf->__VdfgRegularize_h1b022894_0_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4038573769531081012ull);
    vlSelf->__VdfgRegularize_h1b022894_0_26 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12094128611342888428ull);
    vlSelf->__VdfgRegularize_h1b022894_0_28 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1428435638827368112ull);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17633712268433854607ull);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7275116386423144664ull);
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2436424408303884369ull);
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4219242389160901449ull);
    vlSelf->__PVT__pipe_p3__DOT__p3_pipe_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1719927844608622197ull);
    vlSelf->__PVT__pipe_p3__DOT__p3_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15736517410706576585ull);
    vlSelf->__PVT__pipe_p4__DOT__p4_pipe_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15886778822496722761ull);
    vlSelf->__PVT__pipe_p4__DOT__p4_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13374981015437249148ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->__PVT__pipe_p5__DOT__p5_pipe_data, __VscopeHash, 16202532659588738797ull);
    vlSelf->__PVT__pipe_p5__DOT__p5_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5434505801443907223ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->__PVT__pipe_p6__DOT__p6_pipe_data, __VscopeHash, 3020811739688175252ull);
    vlSelf->__PVT__pipe_p6__DOT__p6_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11789893149725943249ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->__PVT__pipe_p7__DOT__p7_pipe_data, __VscopeHash, 16313206014477080733ull);
    vlSelf->__PVT__pipe_p7__DOT__p7_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8776524838196860691ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->__PVT__pipe_p8__DOT__p8_pipe_data, __VscopeHash, 8612616540718457029ull);
    vlSelf->__PVT__pipe_p8__DOT__p8_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13397125401666859888ull);
    vlSelf->__PVT__pipe_p9__DOT__p9_pipe_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9437216765233847660ull);
    vlSelf->__PVT__pipe_p9__DOT__p9_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10452032817900268538ull);
    vlSelf->__PVT__pipe_p10__DOT__p10_pipe_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1935457215368947954ull);
    vlSelf->__PVT__pipe_p10__DOT__p10_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17740447498186841233ull);
    vlSelf->__PVT__pipe_p11__DOT__p11_pipe_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 772919163870804566ull);
    vlSelf->__PVT__pipe_p11__DOT__p11_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6690314280991434669ull);
    vlSelf->__PVT__pipe_p12__DOT__p12_pipe_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3008315946071000477ull);
    vlSelf->__PVT__pipe_p12__DOT__p12_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3992117445986266235ull);
    vlSelf->__PVT__pipe_p13__DOT__p13_pipe_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12218138498275048070ull);
    vlSelf->__PVT__pipe_p13__DOT__p13_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16386475006420046944ull);
    vlSelf->__PVT__pipe_p14__DOT__p14_pipe_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3974486705588323365ull);
    vlSelf->__PVT__pipe_p14__DOT__p14_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16404211975288959510ull);
    vlSelf->__PVT__pipe_p15__DOT__p15_pipe_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4236530918668616498ull);
    vlSelf->__PVT__pipe_p15__DOT__p15_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4477240196110093726ull);
    vlSelf->__PVT__pipe_p16__DOT__p16_pipe_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13154515399375115809ull);
    vlSelf->__PVT__pipe_p16__DOT__p16_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14529312236749865268ull);
    vlSelf->__VdfgRegularize_h1b022894_1_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10014787127055375330ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2929 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7797927924661902066ull);
}

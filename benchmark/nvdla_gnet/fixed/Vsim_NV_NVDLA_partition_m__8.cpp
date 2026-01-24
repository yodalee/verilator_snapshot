// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__14(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st 
            = (0x0000ffffU & (- (IData)((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d1) 
                                          >> 5U) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1)))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_sel_d1;
        if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_reg_en) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__cfg_is_fp16_d1[0U] 
                = (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_is_fp16)));
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__cfg_is_fp16_d1[1U] 
                = (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_is_fp16)));
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__cfg_is_fp16_d1[2U] 
                = (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_is_fp16)));
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__cfg_is_fp16_d1[3U] 
                = (3U & (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_is_fp16))));
        }
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__cfg_is_fp16_d1[0U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__cfg_is_fp16_d1[1U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__cfg_is_fp16_d1[2U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__cfg_is_fp16_d1[3U] = 0U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13143 = 
        ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_sd_pvld) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
            >> 8U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13144 = 
        ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_sd_pvld) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
            >> 9U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13145 = 
        ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_sd_pvld) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
            >> 0x0000000aU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13146 = 
        ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_sd_pvld) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
            >> 0x0000000bU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13147 = 
        ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt4_sd_pvld) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
            >> 0x0000000cU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13148 = 
        ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt5_sd_pvld) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
            >> 0x0000000dU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13149 = 
        ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_sd_pvld) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
            >> 0x0000000eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13150 = 
        ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt7_sd_pvld) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
            >> 0x0000000fU));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_pvld_w 
        = (1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                 | ((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st)) 
                    & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_sd_pvld))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_pvld_w 
        = (1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 1U) | ((~ ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
                                >> 1U)) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_sd_pvld))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_pvld_w 
        = (1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 2U) | ((~ ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
                                >> 2U)) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_sd_pvld))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_pvld_w 
        = (1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 3U) | ((~ ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
                                >> 3U)) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_sd_pvld))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt4_sd_pvld_w 
        = (1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 4U) | ((~ ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
                                >> 4U)) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt4_sd_pvld))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt5_sd_pvld_w 
        = (1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 5U) | ((~ ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
                                >> 5U)) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt5_sd_pvld))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt6_sd_pvld_w 
        = (1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 6U) | ((~ ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
                                >> 6U)) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_sd_pvld))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt7_sd_pvld_w 
        = (1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 7U) | ((~ ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
                                >> 7U)) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt7_sd_pvld))));
}

void Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__15(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__15\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_pvld_d1) 
             | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d1))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_sel_d1 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_sel_d1;
        } else if (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_pvld_d1) 
                    | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d1))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_sel_d1 = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_sel_d1 = 0U;
    }
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_is_fp16 
        = ((IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (2U == (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_cfg__DOT__reg2dp_proc_precision)));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d1 
        = ((IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_pvld_d1));
}

void Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__18(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__18\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__cfg_reg_en_d1) {
            vlSelfRef.mac2accu_mode = (0x000000ffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__cfg_is_wg_d1))));
        }
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d1 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask;
    } else {
        vlSelfRef.mac2accu_mode = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d1 = 0U;
    }
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pvld_d1 
        = ((IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d2));
}

void Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__22(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__22\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__cfg_reg_en_d1) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_1 
                = (0x000000ffU & (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__cfg_is_wg_d1))));
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_2 
                = (0x000000ffU & (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__cfg_is_wg_d1))));
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_3 
                = (0x000000ffU & (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__cfg_is_wg_d1))));
        }
        if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_reg_en) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__cfg_is_wg_d1 
                = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_is_wg;
        }
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_1 = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_2 = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_3 = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__cfg_is_wg_d1 = 0U;
    }
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__cfg_reg_en_d1 
        = ((IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_reg_en));
}

void Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__24(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__24\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d4) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer 
                = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer_w;
        }
        if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d1__DOT__nvdla_cmac_a_d_misc_cfg_0_wren) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_conv_mode 
                = (1U & (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                 >> 0x00000016U)));
        }
        if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d0__DOT__nvdla_cmac_a_d_misc_cfg_0_wren) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_conv_mode 
                = (1U & (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                 >> 0x00000016U)));
        }
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_reg 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_reg_w;
        if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csb2cmac__DOT__csb2cmac_req_pvld_d3) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csb2cmac__DOT__csb2cmac_req_pd_d3;
        }
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_conv_mode = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_conv_mode = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_reg = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd = 0ULL;
    }
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer_w 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer)));
    if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_cfg__DOT__reg2dp_proc_precision 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_proc_precision;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_ori 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en;
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_cfg__DOT__reg2dp_proc_precision 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_proc_precision;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_ori 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en;
    }
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_rd_en 
        = ((~ (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                       >> 0x00000036U))) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pvld));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__select_d0 
        = ((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_producer)) 
           & (8U <= (0x00000ffcU & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                    << 2U))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__select_d1 
        = ((8U <= (0x00000ffcU & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_producer));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_wr_en 
        = ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pvld) 
           & (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                      >> 0x00000036U)));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_single_reg__DOT__reg_wr_en 
        = ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_wr_en) 
           & (8U > (0x00000ffcU & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                   << 2U))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_wr_en 
        = ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_wr_en) 
           & ((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en)) 
              & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__select_d0)));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_wr_en 
        = ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_wr_en) 
           & ((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en)) 
              & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__select_d1)));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d0__DOT__nvdla_cmac_a_d_misc_cfg_0_wren 
        = ((0x000cU == (0x00000ffcU & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_wr_en));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d1__DOT__nvdla_cmac_a_d_misc_cfg_0_wren 
        = ((0x000cU == (0x00000ffcU & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_wr_en));
}

void Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__26(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__26\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d2 
        = ((IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d1));
}

void Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__28(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__28\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d1 
        = ((IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1));
}

void Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__29(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__29\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_pvld_d1) 
             | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d1 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_pd_d1;
        } else if (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_pvld_d1) 
                    | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d1 = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d1 = 0U;
    }
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1 
        = ((IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_pvld_d1));
}
